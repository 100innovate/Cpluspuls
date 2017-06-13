#include<iostream>
using namespace std;
int main() {
	int n, a, sum(0);
	cout << "请输入两个数a,n输出 a+aa+aaa....." << endl;
	while (cin >> a >> n) {
		if (a < 10)break;
		cout << "输入的数据不合法,请重试" << endl;
	}
	for (int x = 0; x < n; x++) {
		sum = sum + a;
		a = a * 10;
	}
	cout << sum;
	return 0;
}