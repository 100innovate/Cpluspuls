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

	//��ʼ��Ⱥ��
	colonyInit();
	while (stopFlag())
	{
		//���۵�ǰȺ��
		indivdualEstimate();
		//������һ��
		for (int i = 0; i<colonySize; i += 2)
		{
			int male = gambleChoose();
			int female = gambleChoose();
			across(male, female, i);
			aberrance(i);
			aberrance(i + 1);
			}
		//������������
		dealDeath();
		//�������Ÿ���
		saveBest();
		//���ڵ���һ�������һ�ֵĵ�ǰ��
		currAge = (currAge + 1) % 2;
	}
		//��������

	indivdualEstimate();
	printResult();
	system("Pause");*/

	return 0;
}