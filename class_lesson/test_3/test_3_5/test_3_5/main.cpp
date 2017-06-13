#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "请输入工资数以求得个人所得税缴纳数:";


	while (cin >> a) {
		if (a <= 0) {
			cout << "请输入一个正常的工资数";
			continue;
		}
		else break;
	}


	if (a < 1200) {
		cout << "该工资无需纳税";
	}
	else if (a - 1200 < 500) {
		b = (a - 1200)*0.05;
		cout << "纳税额:" << b;
	}
	else if (a - 1200 < 2000) {

	}
}