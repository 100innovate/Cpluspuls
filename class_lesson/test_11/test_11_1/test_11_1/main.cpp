#include"headfile.h"

int main() {
	int b[25] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	int n = 25, k, sub;
	for (k=0;;k++) {
		if (k == 0)cout << "������С��100������(����101ֹͣ):"<<endl;
		else cout << "������С��100������(����101ֹͣ):"<<endl;
		cin >> sub;
		if (sub == 101)break;
		index(b, n, sub);
		if (sub != -1)cout << "��Ӧ�±�Ϊ:" <<sub<< endl;
		else cout << "not found" << endl;
		}
	return 0;

	}

