#include<iostream>
using std::cin;
using std::endl;
using std::cout;//防止污染命名空间
int main() {
	double a;
	cout << "请输入一个数:";
	while (cin >> a) {
		if (a - (int)a != 0) {
			cout << "输入的数字不是整数,请重新输入" << endl;
			continue;
		}
		else break;
	}


		if ((int)a % 3 == 0 && (int)a % 7 == 0) {
			cout << "该数是3的倍数也是7的倍数" << endl;
		}
		else if ((int)a % 3 != 0 && (int)a % 7 != 0) {
			cout << "该数既不是3的倍数也不是7的倍数" << endl;
		}
		else if ((int)a % 3 == 0 && (int)a % 7 != 0) {
			cout << "该数是3的倍数但不是7的倍数" << endl;
		}
		else if ((int)a % 3 != 0 && (int)a % 7 == 0) {
			cout << "该数不是3的倍数但是7的倍数" << endl;
		}
	return 0;
}