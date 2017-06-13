#include"Container.h"
#include"backpackProblem.h"
#include"backpackproblem2.h"

int Container::ms_number = 0;

int main() {
	Circle a(Point(1,1), 1);
	Rectangle b(Point(1,1), 2, 3);
	cout << a << '\n' << b << endl;
	cout << compare(a, b);
	system("pause");
	object *d = new Cylinder(Circle(Point(0, 0), 4), 3);
	Cylinder f(Circle(Point(0, 0), 4), 3);
	vector<shared_ptr<object>> m_all;
	m_all.push_back(shared_ptr<object>(d));
	Container n;
	n.add(f,100);
	

	backpack();
	
/*	srand((unsigned int)time(NULL));
	setProblem();

	//初始化群体
	colonyInit();
	while (stopFlag())
	{
		//评价当前群体
		indivdualEstimate();
		//生成下一代
		for (int i = 0; i<colonySize; i += 2)
		{
			int male = gambleChoose();
			int female = gambleChoose();
			across(male, female, i);
			aberrance(i);
			aberrance(i + 1);
			}
		//处理死亡个体
		dealDeath();
		//保护最优个体
		saveBest();
		//现在的下一代变成下一轮的当前代
		currAge = (currAge + 1) % 2;
	}
		//输出问题解

	indivdualEstimate();
	printResult();
	system("Pause");*/

	return 0;
}