#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double r, s, v, m;
	cout << "请输入该球体的半径R:";
	cin >> r;
	if (r <= 0) {
		cout << "请输入一个大于零的数";
	}
	else {
		s = 4 * 3.14 * pow(r, 2);
		v = 3.14* pow(r, 3) * 4 / 3;
		m = v*7.8;
		cout << "该球体的表面积为：" << s << "cm^2" << "\n";
		cout << "该球体体积为：" << v << "cm^3" << "\n";
		cout << "该球体的质量为：" << m << "g" << "\n";
	}
	return 0;
}