#include<iostream>
using namespace std;
int main() {
	double a;
	cout << "������һ������:";
	while (cin >> a) {
		if (a - (int)a != 0) {
			cout << "���������������,������һ������" << endl;
			continue;
		}
		//else if ((int)a % 2) {
		else if (a - (int)a / 2 * 2) {
			cout << "�ú���������" << '\n';
			break;
		}
		else {
			cout << "�ú�����ż��" << '\n';
			break;
		}

	}
	return 0; 
}