/*
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c, sqrt1, x1, x2;
	cout << "������һԪ���η�������ϵ��a,b,c:";
	cin >> a >> b >> c;
	sqrt1 = pow(b, 2) - 4 * a*c;
	if (sqrt1 >= 1) {
		cout << "�÷����н�" << endl;
		x1 = (-b + sqrt(sqrt1)) / (2 * a);
		x2 = (-b - sqrt(sqrt1)) / (2 * a);
		cout << "�÷��̵Ľ�Ϊ��" << "x1=" << x1 << "," << "x2=" << x2 << endl;
	}
	else {
		cout << "�÷�����ʵ����" << endl;
	}
	return 0;
}
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void fun(double a, double b, double c)
{
	double det;
	if (fabs(a) < 0.00000001)
	{
		cout << "�ⲻ�Ƕ��η���" << endl;
		return;
	}
	det = b*b - 4 * a*c;
	if (fabs(det) < 0.00000001)
	{
		double x = -b*0.5 / a;
		cout << "����ֻ��һ����" << endl << x << endl;
	}
	else if (det > 0.0)
	{
		cout << "����������ʵ�� ��" << endl;
		double x1, x2;
		x1 = (sqrt(det) - b) / (2 * a);
		x2 = (-sqrt(det) - b) / (2 * a);
		cout << x1 << endl << x2 << endl;
	}
	else
	{
		cout << "����ֻ������������:" << endl;
		//����������жϣ�+1��-1ʱ�����1��
		double temp = sqrt(-det) / (2 * a);
		double k = -b / (2 * a);
		if (fabs(k) < 0.0000001)
		{
			if (fabs(fabs(temp) - 1) < 0.00000001)
			{
				cout << '+' << 'i' << endl;
				cout << '-' << 'i' << endl;
			}
			else
			{
				cout << '+' << temp << 'i' << endl;
				cout << '-' << temp << 'i' << endl;
			}
		}
		else
		{
			if (fabs(fabs(temp) - 1) < 0.00000001)
			{
				cout << k << '+' << 'i' << endl;
				cout << k << '-' << 'i' << endl;
			}
			else
			{
				cout << k << '+' << temp << 'i' << endl;
				cout << k << '-' << temp << 'i' << endl;
			}
		}
	}
}
int main(){
	int A, B, C;
	cout << "������һԪ���η��̵�����ϵ��";
	cin >> A >> B >> C;
	fun(A, B, C);
	getchar();
}
