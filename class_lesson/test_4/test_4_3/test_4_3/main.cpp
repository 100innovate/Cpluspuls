#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "���������ַ�������������Сд��ĸ����ת��Ϊ��д������������0ʱ�˳�:"<<endl;

	while (cin.get(a)){
		if (a >= 'a' && a<='z') a = a - 32;
		if (a == '0')break;
		cout << a;
	} 
	return 0;
}