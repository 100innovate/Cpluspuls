#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "�����빤��������ø�������˰������:";


	while (cin >> a) {
		if (a <= 0) {
			cout << "������һ�������Ĺ�����";
			continue;
		}
		else break;
	}


	if (a < 1200) {
		cout << "�ù���������˰";
	}
	else if (a - 1200 < 500) {
		b = (a - 1200)*0.05;
		cout << "��˰��:" << b;
	}
	else if (a - 1200 < 2000) {

	}
}