#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	vector<long long>two(31);
	for (int i(0); i < 31; i++)two[i] = pow(2, i);
	for (int pp(0); pp < a; pp++) {
		long double b;
		cin >> b;
		long long c;
		int k = 0;
		while (1) {
			if (two[k] <= b)k++;
			else break;
		}
		k -= 1;
		c = (1 + b) / 2 * b;

		while (1) {
			if (k >= 0) { 
				c -= 2*two[k]; 
				k--;
			}
			else break;
		}

		cout << c << endl;
	}
	return 0;
}