#include<iostream>
using namespace std;
int main() {
	int n, a, sum(0);
	cout << "������������a,n��� a+aa+aaa....." << endl;
	while (cin >> a >> n) {
		if (a < 10)break;
		cout << "��������ݲ��Ϸ�,������" << endl;
	}
	for (int x = 0; x < n; x++) {
		sum = sum + a;
		a = a * 10;
	}
	cout << sum;
	return 0;
}