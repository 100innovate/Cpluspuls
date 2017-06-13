#include<iostream>
using namespace std;
int main() {
	double a;
	cout << "请输入一个数字:";
	while (cin >> a) {
		if (a - (int)a != 0) {
			cout << "输入的数不是整数,请输入一个整数" << endl;
			continue;
		}
		//else if ((int)a % 2) {
		else if (a - (int)a / 2 * 2) {
			cout << "该函数是奇数" << '\n';
			break;
		}
		else {
			cout << "该函数是偶数" << '\n';
			break;
		}

	}
	return 0; 
}