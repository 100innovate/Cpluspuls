#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	while (a > 0) {
		int n;
		cin >> n;
		int num(0);
		while (n)
		{
			num += n / 5;
			n = n / 5;
		}
		cout << num << endl;
		a--;
	}

	return 0;
}
