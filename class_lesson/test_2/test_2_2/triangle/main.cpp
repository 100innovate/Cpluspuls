//2016.10.18    2016.10.21
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c, s, area;//����int ��ʾ���ܻᶪʧ����
	cout << "�����������ε����߳�a,b,c=";
	cin >> a >> b >> c;
	//����ʹ������if�ж��������Ƿ���� �����������Ϣ�ļ���
	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "����������";
	}
	else if (a >= b + c||b >= a + c||c >= a + b) {
		cout << "�������β�����" << '\n';
	}
	else {
		s = (a + b + c) / 2.0;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		cout << "�������������" << area << endl;
	}
	return 0;
}
