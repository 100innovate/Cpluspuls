#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int x;
	while (cin >> x) {
		double a(1);
		double b(2);
		//double c(3);
		double sum(0);
		for (int i(0); i < x; i++) {
			sum += b / a;
			int x;
			x = b;
			b = a + b;
			a = x;
		}
		cout << fixed << setprecision(2) << sum << endl;
	}
}