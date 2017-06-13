#pragma once

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
//�������������ģ
#define max 1000
//Ϊ���ģ�������ж��ٸ���
int packageNum;
//ÿ����������
int packageWeight[max] = { 382745,799601,909247,729069,467902,44328,34610,698150,823460,903959,853665,551830,610856,670702,488960,951111,323046,446298,931161,31385,496951,264724,224916,169684 };
//ÿ�����ļ�ֵ
int packageValue[max] = { 825594,1677009,1676628,1523970,943972,97426,69666,1296457,1679693,1902996,1844992,1049289,1252836,1319836,953277,2067538,675367,853655,1826027,65731,901489,577243,466257,369261 };
//Լ�����������������
int limitWeight;
//Ⱥ��Ĺ�ģ
int colonySize;
//colonyState[i][k] ��ʾһ��Ⱦɫ��
//colonyState[1...conlonySize][0|1] ��ʾһ��Ⱥ��
int colonyState[max][2][max];
// currAge ��ʾ��ǰ���ı��
// (currAge+1)%2 ��ʾ��һ���ı��
int currAge = 0;
// ����������Ϣ��

typedef struct tagIndivdualMsg
{
	int index;
	int value;
}IndivdualMsg;
IndivdualMsg indivdualMsg[max];
/////////////////////////////////////////////////////////////
//��������
void printColonyState(int nextAge);
/////////////////////////////////////////////////////////////
//��ʼ��Ⱥ��
void colonyInit()
{
	int i, j;
	int w;

	for (i = 0; i<colonySize; i++)
	{
		//��֤�ҵ�һ������Լ����Ⱦɫ��
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

//�Ը����������
int cmp(const void *a, const void *b)
{
	IndivdualMsg *x = (IndivdualMsg *)a;
	IndivdualMsg *y = (IndivdualMsg *)b;
	return y->value - x->value;
}
//��Ӧ�Ⱥ���
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
//��ֹѭ��������
bool stopFlag()
{
	//����n�����к�ֹͣ
	static int n = 100000;
	if (n-- <= 0)
		return false;
	else
		return true;
}
//����ѡ��
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
//����
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
//����
void aberrance(int index)
{
	int seed, nextAge;
	nextAge = (currAge + 1) % 2;
	//ֻ��1/3�ĸ��ʷ������
	seed = rand() % (packageNum * 3);
	if (seed < packageNum)
		colonyState[index][nextAge][seed] = (colonyState[index][nextAge][seed] + 1) % 2;
}
//������������
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
//���Ÿ��屣��
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
	cout << "���:" << endl;
	int j, w = 0;

	cout << setw(10) << "��ƷI ";
	for (j = 0; j<packageNum; j++)
	{
		cout << setw(5) << j + 1;
	}
	cout << endl;
	cout << setw(10) << "����W ";
	for (j = 0; j<packageNum; j++)
	{
		w += packageWeight[j] * colonyState[indivdualMsg[0].index][currAge][j];
		cout << setw(5) << packageWeight[j];
	}
	cout << endl;
	cout << setw(10) << "��ֵV ";
	for (j = 0; j<packageNum; j++)
		cout << setw(5) << packageValue[j];
	cout << endl;

	cout << setw(10) << "Choose: ";
	for (j = 0; j<packageNum; j++)
		cout << setw(5) << colonyState[indivdualMsg[0].index][currAge][j];
	cout << endl;

	cout << "������: " << w << endl;
	cout << "�ܼ�ֵ: " << indivdualMsg[0].value << endl;

}
///////////////////////////////////////////////////////////////////////////////////////////////
void setProblem()
{
	packageNum = 24;  //��Ʒ�ĸ���	
	limitWeight = 6404180; //��������
	colonySize = 50;//��¡����

	cout << "��Ʒ����= " << packageNum << endl;
	cout << "��������= " << limitWeight << endl;
	cout << "��¡����= " << colonySize << endl;

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

