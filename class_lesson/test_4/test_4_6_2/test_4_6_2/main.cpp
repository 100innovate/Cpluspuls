#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m, n, x(0), k(0),win;
	cout << "请输入参与游戏的人数:";
	while (cin >> n) {
		if (n < 0) cout << "请重新输入" << endl;
		else break;
	}
	vector<bool> people(n, 1);
	cout << "请输入本局所报数字:";

	//此处为运算部分，最终输出x为本局出局玩家序号
	while (cin >> m) {
		while ( m > 0) {
			if (people[x] != 0) {
				m--;
				if (m == 0)people[x] = 0;	
			}
			x = (x+1)%n;
		}
		k++;
		//下面为输出部分
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