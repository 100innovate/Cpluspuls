#pragma once

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
//定义问题的最大规模
#define max 1000
//为题规模，即共有多少个包
int packageNum;
//每个包的重量
int packageWeight[max] = { 382745,799601,909247,729069,467902,44328,34610,698150,823460,903959,853665,551830,610856,670702,488960,951111,323046,446298,931161,31385,496951,264724,224916,169684 };
//每个包的价值
int packageValue[max] = { 825594,1677009,1676628,1523970,943972,97426,69666,1296457,1679693,1902996,1844992,1049289,1252836,1319836,953277,2067538,675367,853655,1826027,65731,901489,577243,466257,369261 };
//约束，背包的最大容量
int limitWeight;
//群体的规模
int colonySize;
//colonyState[i][k] 表示一个染色体
//colonyState[1...conlonySize][0|1] 表示一个群体
int colonyState[max][2][max];
// currAge 表示当前代的编号
// (currAge+1)%2 表示下一代的编号
int currAge = 0;
// 个体评价信息表

typedef struct tagIndivdualMsg
{
	int index;
	int value;
}IndivdualMsg;
IndivdualMsg indivdualMsg[max];
/////////////////////////////////////////////////////////////
//函数声明
void printColonyState(int nextAge);
/////////////////////////////////////////////////////////////
//初始化群体
void colonyInit()
{
	int i, j;
	int w;

	for (i = 0; i<colonySize; i++)
	{
		//保证找到一个符合约束的染色体
		w = limitWeight + 1;
		while (w > limitWeight)
		{
			w = 0;
			for (j = 0; j<packageNum&&w <= limitWeight; j++)
			{
				colonyState[i][currAge][j] = rand() % 2;
				w += packageWeight[j] * colonyState[i][currAge][j];
			}

		}
	}
}

//对个体进行评价
int cmp(const void *a, const void *b)
{
	IndivdualMsg *x = (IndivdualMsg *)a;
	IndivdualMsg *y = (IndivdualMsg *)b;
	return y->value - x->value;
}
//适应度函数
void indivdualEstimate()
{
	int i, j;
	for (i = 0; i<colonySize; i++)
	{
		indivdualMsg[i].index = i;
		indivdualMsg[i].value = 0;
		for (j = 0; j<packageNum; j++)
			indivdualMsg[i].value += packageValue[j] * colonyState[i][currAge][j];
	}
	qsort(indivdualMsg, colonySize, sizeof(IndivdualMsg), cmp);
}
//终止循环的条件
bool stopFlag()
{
	//进行n代进行后停止
	static int n = 100000;
	if (n-- <= 0)
		return false;
	else
		return true;
}
//赌轮选择
int gambleChoose()
{
	int wheel[max] = { 0 };
	int i = colonySize - 1;
	int choose;
	wheel[i] = indivdualMsg[i].value;
	for (i--; i >= 0; i--)
		wheel[i] = (indivdualMsg[i].value + wheel[i + 1]) + colonySize*(colonySize - i);
	int seed = abs(wheel[0] - (rand() % (2 * wheel[0] + 1)));
	choose = colonySize - 1;
	while (seed > wheel[choose])
		choose--;
	return choose;
}
//交叉
void across(int male, int female, int index)
{
	int nextAge = (currAge + 1) % 2;
	int i, j, t;
	int acrossBit = rand() % (packageNum - 1) + 1;
	for (j = 0; j<packageNum; j++)
	{
		colonyState[index][nextAge][j] = colonyState[indivdualMsg[male].index][currAge][j];
		colonyState[index + 1][nextAge][j] = colonyState[indivdualMsg[female].index][currAge][j];
	}

	for (i = 0; i<acrossBit; i++)
	{
		t = colonyState[index][nextAge][i];
		colonyState[index][nextAge][i] = colonyState[index + 1][nextAge][i];
		colonyState[index + 1][nextAge][j] = t;
	}
}
//变异
void aberrance(int index)
{
	int seed, nextAge;
	nextAge = (currAge + 1) % 2;
	//只有1/3的概率发生异变
	seed = rand() % (packageNum * 3);
	if (seed < packageNum)
		colonyState[index][nextAge][seed] = (colonyState[index][nextAge][seed] + 1) % 2;
}
//处理死亡个体
void dealDeath()
{
	int i, j;
	int weight, w;
	int nextAge = (currAge + 1) % 2;
	for (i = 0; i<colonySize; i++)
	{
		weight = 0;
		for (j = 0; j<packageNum; j++)
			weight += packageWeight[j] * colonyState[i][nextAge][j];
		if (weight > limitWeight)
		{
			w = limitWeight + 1;
			while (w > limitWeight)
			{
				w = 0;
				for (j = 0; j<packageNum&&w <= limitWeight; j++)
				{
					colonyState[i][nextAge][j] = rand() % 2;
					w += packageWeight[j] * colonyState[i][nextAge][j];
				}
			}
		}
	}
	//printColonyState(nextAge);
}
//最优个体保护
void saveBest()
{
	int i, j;
	int min, minp, value;
	int nextAge = (currAge + 1) % 2;
	min = indivdualMsg[0].value;
	minp = -1;
	for (i = 0; i<colonySize; i++)
	{
		value = 0;
		for (j = 0; j<packageNum; j++)
			value += packageValue[j] * colonyState[i][nextAge][j];
		if (value <= min)
		{
			min = value;
			minp = i;
		}
	}
	if (minp >= 0)
	{
		for (j = 0; j<packageNum; j++)
		{
			colonyState[minp][nextAge][j] = colonyState[indivdualMsg[0].index][currAge][j];
		}
	}
}


void printResult()
{
	cout << "-----------------------------------------------------------" << endl;
	cout << "结果:" << endl;
	int j, w = 0;

	cout << setw(10) << "物品I ";
	for (j = 0; j<packageNum; j++)
	{
		cout << setw(5) << j + 1;
	}
	cout << endl;
	cout << setw(10) << "重量W ";
	for (j = 0; j<packageNum; j++)
	{
		w += packageWeight[j] * colonyState[indivdualMsg[0].index][currAge][j];
		cout << setw(5) << packageWeight[j];
	}
	cout << endl;
	cout << setw(10) << "价值V ";
	for (j = 0; j<packageNum; j++)
		cout << setw(5) << packageValue[j];
	cout << endl;

	cout << setw(10) << "Choose: ";
	for (j = 0; j<packageNum; j++)
		cout << setw(5) << colonyState[indivdualMsg[0].index][currAge][j];
	cout << endl;

	cout << "总重量: " << w << endl;
	cout << "总价值: " << indivdualMsg[0].value << endl;

}
///////////////////////////////////////////////////////////////////////////////////////////////
void setProblem()
{
	packageNum = 24;  //物品的个数	
	limitWeight = 6404180; //背包容量
	colonySize = 50;//克隆次数

	cout << "物品个数= " << packageNum << endl;
	cout << "背包容量= " << limitWeight << endl;
	cout << "克隆次数= " << colonySize << endl;

}

void printColonyState(int k)
{
	cout << "----------------------------------------------------" << endl;
	cout << "colonyState-->";
	if (k == currAge)
		cout << "currAge:" << endl;
	else
		cout << "next age:" << endl;
	int i, j;
	for (i = 0; i<colonySize; i++)
	{
		for (j = 0; j<packageNum; j++)
			cout << setw(2) << colonyState[i][k][j];
		cout << endl;
	}
}
void printIndividualMsg()
{
	int i;
	cout << "---------------------------------------------------" << endl;
	cout << "Individual Msg:" << endl;
	for (i = 0; i<colonySize; i++)
		cout << indivdualMsg[i].index << "\t" << indivdualMsg[i].value << endl;
}

