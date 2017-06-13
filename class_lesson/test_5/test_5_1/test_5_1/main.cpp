#include<iostream>
using namespace std;
int main() {
	int i, j, k, l, m, count = 0;
	for (i = 1; i <= 4; i++) {
		for (j = 0; j <= 4; j++) {
			if (j == 1)continue;
			for (k = 0; k < 4; k++) {
				if (k == 3 || k == i || k == j)continue;
				for (l = 0; l <= 4; l++) {
					if (l == 3 || l == i || l == k)continue;
					for (m = 0; m <= 4; m++) {
						if (m == i || m == j || m == k || m == l)continue;
						cout << i << j << k << l << m << '\t';
						count++;
						if (count % 5 == 0)cout << endl;
					}
				}
			}
		}
	}
	return 0;
}