#include "headfile.h"

int main() {
	char op;
	double a, b;
	while (cin >> op ) {
		if (op == '#')break;
		else if (op != '+'&&op != '-'&&op != '*'&&op != '/') { 
			cout << "输入错误，请重新输入" << endl;
			continue;
		}
		a = putin();
		b = putin();
		cout << Calculate(a, b, op) << endl;
	}

	cout << "程序结束";
	system("pause");
	return 0;
}

