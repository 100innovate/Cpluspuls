#include"headfile.h"

void putinpeople() {
	string idcard;
	string name;
	int age;
	char sex;
	long birthday;
	string homeadress;

	cout << "�������������֤�����������䡢�Ա���mŮw��������(19980101)��������" << endl;
	cout << "ÿ������һ����밴�س�" << endl;

	cin >> idcard;
	cin >> name;
	cin >> age;
	cin >> sex;
	cin >> birthday;
	cin >> homeadress;

	people person(idcard,name,age,sex,birthday,homeadress);
	person.putInFile();
}