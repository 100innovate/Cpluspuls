#include<iostream>
using std::cin;
using std::endl;
using std::cout;//��ֹ��Ⱦ�����ռ�
int main() {
	double a;
	cout << "������һ����:";
	while (cin >> a) {
		if (a - (int)a != 0) {
			cout << "��������ֲ�������,����������" << endl;
			continue;
		}
		else break;
	}


		if ((int)a % 3 == 0 && (int)a % 7 == 0) {
			cout << "������3�ı���Ҳ��7�ı���" << endl;
		}
		else if ((int)a % 3 != 0 && (int)a % 7 != 0) {
			cout << "�����Ȳ���3�ı���Ҳ����7�ı���" << endl;
		}
		else if ((int)a % 3 == 0 && (int)a % 7 != 0) {
			cout << "������3�ı���������7�ı���" << endl;
		}
		else if ((int)a % 3 != 0 && (int)a % 7 == 0) {
			cout << "��������3�ı�������7�ı���" << endl;
		}
	return 0;
}