#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int m;
	for (int n(100); n < 1000; n++) {
		m = n;
		for (int x(0); m != 0;m=m/10) {
			x = pow(m % 10,3) + x;
			if (x == n)cout << n << endl;
		}
	}
}