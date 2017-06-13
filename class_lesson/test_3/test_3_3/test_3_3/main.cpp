#include<iostream>
using namespace std;
int main() {
	double a;
	cout << "请输入成绩以获得一个等级:";
	while (cin >> a) {
		if (a <= 0) {
			cout << "请输入一个正数成绩：";
			continue;
		}
		else break;
	}


	if (a >= 90) {
		cout << "grade A" << endl;
	}
	else if (a >= 80) {
		cout << "grade B" << endl;
	}
	else if (a >= 70) {
		cout << "grade C" << endl;
	}
	else if (a >= 60) {
		cout << "grade D" << endl;
	}
	else {
		cout << "NO grade" << endl;
	}
	return 0;
}