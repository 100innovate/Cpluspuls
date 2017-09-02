#include<algorithm>
#include<functional>
#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
	int a;
	while (cin >> a) {
		vector<double> b(a);
		for (int i(0); i < a; i++) {
			cin >> b[i];
		}
		sort(b.begin(), b.end());
		if (a % 2)cout << fixed << setprecision(2) <<b[a / 2]<<endl;
		else cout << fixed << setprecision(2) << (b[a / 2 - 1] + b[a / 2]) / 2 << endl;
	}
}