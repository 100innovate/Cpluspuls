#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m, n, x(0), k(0),win;
	cout << "请输入参与游戏的人数，游戏人数最少为两人:";
	while (cin >> n) {
		if (n <= 1) {
			cout << "请重新输入" << endl;
		}
		else break;
	}


	vector<bool> people(n, 1);
	cout << "请输入本局所报数字:";

	//运算部分，运算本局出局的人
	while (cin >> m) {//输入本次所需要报数的次数
		while ( m > 0) {
			if (people[x] != 0) {
				m--;
				if (m == 0)people[x] = 0;
				x++;//下次报数起始对象
				//if (x >= n)x = x - n;//用此语句可以循环
			}
			else {
				x++;
				//if (x >= n)x = x - n;
			}
			x = x%n;//代替上面的重置
		}
		k++;//计数器


		//输出部分。输出本轮比赛结果
		cout << "游戏剩余玩家数: "<< n - k<<endl;
		for (int l = 0; l < n; l++) {
			if (people[l] == 0) {
				cout << "玩家" << l + 1 << "已出局" << endl;
			}
			else {
				cout << "玩家" << l + 1<< "还在游戏中" << endl;
				win = l + 1;
			}
		}
		if ((n - k) == 1) {
			cout << "玩家"<< win <<"获胜" << endl;
			break;
		}
	}
	return 0;
}