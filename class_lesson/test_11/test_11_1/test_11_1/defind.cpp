#include"headfile.h"


void index(int a[], int n, int&sub) {
	int i, k = sub;
	sub = -1;
	for (i = 0; i < n; i++) {
		if (a[i] == k) {
			sub = i;
			break;
		}
	}
}

