#include"headfile.h"

int main() {
	cout << "area is" << area(1) << endl;//	���������������ĺ���ԭ�͸�Ϊ double area(double a=0, double b=0)������ֶ�����غ�������ƥ����á� ����������ʾ���ò���ȷ
	cout << "area is" << area(1, 2) << endl;
	cout << "area is" << area(1, 3, 2) << endl;//double area(double a, double b��double c=0��int); ���뽫double c=0�����β�ĩβ
	cout << "area is" << area(1, 2, 5, 0) << endl;
	return 0;
}

