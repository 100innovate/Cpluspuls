#include"headfile.h"

int main() {
	char a(0);
	cout << " ��ӭ����ѧ������ϵͳ " << endl;
	while (a != 'E') {
		cout << "���ܲ˵�" << endl;
		cout << "A.����µ�ѧ����Ϣ" << endl;
		cout << "B.�鿴����ѧ����Ϣ" << endl;
		cout << "E.�˳�" << endl;
		cout << "�����빦��ǰ����ĸ��Ž��빦��" << endl;
		cin >> a;
		switch (a) {
		case 'A':in();
		case 'B':out();
		case 'E ':break;
			cout << "�������Ϣ��������������" << endl;
		}
	}
	return 0;
}