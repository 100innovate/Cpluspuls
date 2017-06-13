#include<iostream>
#include<cmath>
using namespace std;
double sroot(double);

int main() {
	double x, a;
	cout << "请输入一个数以求其平方根:";
	while (cin >> a) {
		if (a <= 0)cout << "请重新输入";
		else {
			x = sroot(a);
			cout << x;
			break;
		}
	}
	return 0;
}

double sroot(double a) {
	double x = a / 2;
	while (fabs((x - a / x)/2) > 1e-7)x = (x + a / x) / 2;
	return x;
}
