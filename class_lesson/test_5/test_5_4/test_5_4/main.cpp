#include<iostream>
using namespace std;
int main() {
	for (char m('A'); m <= 'E'; m++) {
		for (char n('J'); n <= 'N'; n++) {
			if (m == 'A') {
				if (n == 'J') continue;
			}
			if (m == 'D' || m == 'E') {
				if (n == 'M')continue;
			}
			cout << m << " VS " << n << endl;
		}
	}
	return 0;
}