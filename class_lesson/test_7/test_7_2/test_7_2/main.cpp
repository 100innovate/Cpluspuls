#include "headfile.h"

int main() {
	char op;
	double a, b;
	while (cin >> op ) {
		if (op == '#')break;
		else if (op != '+'&&op != '-'&&op != '*'&&op != '/') { 
			cout << "�����������������" << endl;
			continue;
		}
		a = putin();
		b = putin();
		cout << Calculate(a, b, op) << endl;
	}

	cout << "�������";
	system("pause");
	return 0;
}

