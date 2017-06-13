#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	int a ,n(0);
	double b;
	srand((unsigned)time(0));
	a = rand() % 1000;
	cout << "请猜测电脑产生的随机数" << endl;
	while (cin >> b) {
		n++;
		if (b - (int)b != 0||b>1000||b<0) {
			cout << "输入不合法,请重新输入" << endl;
			continue;
		}

		if (b == a) {
			cout << "恭喜你猜对了，游戏结束，共尝试" << n << "次" << endl;
			break;
		}
		else if (b < a) {
			cout << "猜小了，再试试吧 已尝试" << n << "次"<< endl;
		}
		else cout << "猜大了，再试试吧 已尝试" << n << "次" << endl;
	}
	return 0;
}