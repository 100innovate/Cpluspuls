#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	int a ,n(0);
	double b;
	srand((unsigned)time(0));
	a = rand() % 1000;
	cout << "��²���Բ����������" << endl;
	while (cin >> b) {
		n++;
		if (b - (int)b != 0||b>1000||b<0) {
			cout << "���벻�Ϸ�,����������" << endl;
			continue;
		}

		if (b == a) {
			cout << "��ϲ��¶��ˣ���Ϸ������������" << n << "��" << endl;
			break;
		}
		else if (b < a) {
			cout << "��С�ˣ������԰� �ѳ���" << n << "��"<< endl;
		}
		else cout << "�´��ˣ������԰� �ѳ���" << n << "��" << endl;
	}
	return 0;
}