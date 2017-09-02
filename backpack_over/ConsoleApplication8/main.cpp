#include<iostream>
#include<vector>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int sum = a*b;
		if (a == 1)cout << b << endl;
		else if (b == 1)cout << a << endl;
		else if (a == 2) {
			sum = b / 4 * 4;
			if (b % 4 < 2)sum += (b % 4) * 2;
			else sum += 4;
			cout << sum << endl;
		}
		else if (b == 2) {
			sum = a / 4 * 4;
			if (a % 4 < 2)sum += (a % 4) * 2;
			else sum += 4;
			cout << sum << endl;
		}
		else {
			if (sum % 2)cout << sum / 2 + 1 << endl;
			else cout << sum / 2 << endl;
		}
	}
	return 0;
}