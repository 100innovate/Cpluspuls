#include"headfile.h"
int Fraction::ms_x = 0;
int main() {
	vector<Fraction> a(10);

	loadData(a);

	cout << "¼��ķ�������:" << endl;
	for (auto &i : a) {
		cout << i << endl;
	}

	cout << "���ص��������ֵ��" << max_element(a) << endl;

	normalize(a);
	cout << "��һ����ķ�������:" << endl;
	for (auto &i : a) {
		cout << i << endl;
	}

	system("pause");
	return 0;
}