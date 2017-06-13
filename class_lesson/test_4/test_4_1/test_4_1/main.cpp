#include<iostream>
using namespace std;
int main() {
	double a;
	float b(1);
	cout<< "请输入一个正整数:";

	while (cin >> a) {
		if (a <= 0 || a - (int)a != 0) {
			cout << "输入有误，请输入一个正整数：" << endl;
			continue;
		}
		else break;
	}

	for (int n(1); n <= a; n++) {
		b = b*n;
	}
	cout << a << '!' << '=' << b;
	return 0;
}