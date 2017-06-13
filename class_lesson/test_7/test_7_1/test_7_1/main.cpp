#include<iostream>
#include<cmath>
using namespace std;
double sroot(double);

int main() {
	double x, a;
	cout << "������һ����������ƽ����:";
	while (cin >> a) {
		if (a <= 0)cout << "����������";
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
