#ifndef HEADFILE_H
#define HEADFILE_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

void putinpeople();
void putOutFile();

class people {
	string m_idcard;//���֤
	int m_age;//����
	string m_name;//����
	string m_birthday;//����
	string m_homeadress;//��ͥ��ַ
	string m_sex;//�Ա�
public:
	people(string idcard, string name, int age, char sex, long birthday, string homeadress) {
		m_idcard = idcard;
		m_age = age;
		m_name = name;
		m_homeadress = homeadress;
		if (sex = 'w')m_sex = "Ů";
		else m_sex = "��";
		m_birthday = birthday / 10000;
		m_birthday += "��";
		birthday = birthday % 10000;
		m_birthday += birthday / 100;
		m_birthday += "��";
		m_birthday += birthday % 100;
		m_birthday += "��";
		
	}
	void putInFile();
	
};

#endif // !HEADFILE_H
