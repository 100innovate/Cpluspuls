#include"headfile.h"

void putinpeople() {
	string idcard;
	string name;
	int age;
	char sex;
	long birthday;
	string homeadress;

	cout << "请依次输入身份证、姓名、年龄、性别（男m女w）、生日(19980101)、出生地" << endl;
	cout << "每次输入一项后请按回车" << endl;

	cin >> idcard;
	cin >> name;
	cin >> age;
	cin >> sex;
	cin >> birthday;
	cin >> homeadress;

	people person(idcard,name,age,sex,birthday,homeadress);
	person.putInFile();
}