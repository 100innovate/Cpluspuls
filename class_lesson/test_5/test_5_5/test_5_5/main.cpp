#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> number(1, 2);
	double n;
	int x(1),y(0),k(0),l(0);
	cout << "������һ������2��������:";


	while (cin >> n) {
		if (n - (int)n != 0 || n < 2) {
			cout << "����������һ����������";
			continue;
		}
		else break;
	}


	for (int m(2); m <= n; m++) {
		for (y=0,k=0; y < x; y++) {
			if (m % number[y] == 0) {
				break;
			}
			else {
				k++;
				continue;
			}
		}
		if (k == x) {
			number.push_back(m);
			x++;
		}
		
	}

	while (l < x) {
		cout << number[l] << '\t';
		l++;
		if (l % 7 == 0)cout << endl;
	}
	return 0;
}