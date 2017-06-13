#include"headfile.h"

people::people() {

}
people::people(string a, int b, string c, string d, string e, string f):m_name(a), m_age(b), m_sex(c), m_birthday(d), m_idcard(e), m_adress(f) {

}

people::people(people& copy) {
	m_name = copy.m_name;
	m_adress = copy.m_adress;
	m_age = copy.m_age;
	m_birthday = copy.m_birthday;
	m_idcard = copy.m_idcard;
	m_sex = copy.m_sex;
}

void people::input() {
	cout << "请输入姓名:";
	getline(cin, m_name);
	cout << "请输入性别（男/女）:";
	getline(cin, m_sex);
	cout << "请输入生日(20001226):";
	getline(cin, m_birthday);
	cout << "请输入身份证号码:";
	getline(cin, m_idcard);
	cout << "请输入家庭住址";
	getline(cin, m_adress);
	cout << "请输入年龄:";
	cin >> m_age;
}
void people::putinfile() {
	ofstream ofile;
	ofile.open("myfile.txt", ios::app);
	ofile << "姓名：" << m_name << " 性别：" << m_sex << "  年龄:" << m_age << "  生日:" << m_birthday << "  身份证:" << m_idcard << "  家庭住址:" << m_adress<<endl;
	ofile.close();
}