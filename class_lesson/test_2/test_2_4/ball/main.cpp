#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double r, s, v, m;
	cout << "�����������İ뾶R:";
	cin >> r;
	if (r <= 0) {
		cout << "������һ�����������";
	}
	else {
		s = 4 * 3.14 * pow(r, 2);
		v = 3.14* pow(r, 3) * 4 / 3;
		m = v*7.8;
		cout << "������ı����Ϊ��" << s << "cm^2" << "\n";
		cout << "���������Ϊ��" << v << "cm^3" << "\n";
		cout << "�����������Ϊ��" << m << "g" << "\n";
	}
	return 0;
}