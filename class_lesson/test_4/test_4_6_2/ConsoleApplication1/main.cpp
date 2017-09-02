#include<iostream>

using namespace std;

int a[] = { 2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881,13482720,25779600,68468401,610346880,1271932200,327280800 };

int main() {
	int n;
	while (cin >> n) {
		if (n == 0)break;
		else cout << a[n - 1] << endl;
	}
}