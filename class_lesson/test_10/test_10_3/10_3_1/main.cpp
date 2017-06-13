#include"headfile.h"

int main() {
	char a(0);
	cout << " 欢迎来到学籍管理系统 " << endl;
	while (a != 'E') {
		cout << "功能菜单" << endl;
		cout << "A.添加新的学籍信息" << endl;
		cout << "B.查看所有学籍信息" << endl;
		cout << "E.退出" << endl;
		cout << "请输入功能前的字母序号进入功能" << endl;
		cin >> a;
		switch (a) {
		case 'A':in();
		case 'B':out();
		case 'E ':break;
			cout << "输入的信息有误请重新输入" << endl;
		}
	}
	return 0;
}