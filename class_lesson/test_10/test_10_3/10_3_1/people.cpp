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
	cout << "����������:";
	getline(cin, m_name);
	cout << "�������Ա���/Ů��:";
	getline(cin, m_sex);
	cout << "����������(20001226):";
	getline(cin, m_birthday);
	cout << "���������֤����:";
	getline(cin, m_idcard);
	cout << "�������ͥסַ";
	getline(cin, m_adress);
	cout << "����������:";
	cin >> m_age;
}
void people::putinfile() {
	ofstream ofile;
	ofile.open("myfile.txt", ios::app);
	ofile << "������" << m_name << " �Ա�" << m_sex << "  ����:" << m_age << "  ����:" << m_birthday << "  ���֤:" << m_idcard << "  ��ͥסַ:" << m_adress<<endl;
	ofile.close();
}