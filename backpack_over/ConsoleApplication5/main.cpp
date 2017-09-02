#include<iostream>
#include<vector>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int a;
	scanf("%d", &a);
	while (a > 0) {
		int b, c;
		scanf("%d", &b);
		vector<int>x(b);
		for (int i(0); i < b; i++) {
			scanf("%d", &x[i]);
		}
		scanf("%d", &c);
		vector<int>y(c);
		for (int i(0); i < c; i++) {
			scanf("%d", &y[i]);
		}

		int p(0); int q(0);
		while (p < b&&q < c) {
			if (x[p] < y[q]) {
				printf("%d ", x[p]);
				p++;
			}
			else {
				printf("%d ", y[q]);
				q++;
			}
		}

		while (p < b) {
			if(p!=b-1)
			printf("%d ", x[p]);
			else printf("%d", x[p]);
			p++;
		}
		while (q < c) {
			if(p!=c-1)
			printf("%d ", y[q]);
			else printf("%d", y[q]);
			q++;
		}
		cout << endl;
		a--;
	}
	return 0;
}