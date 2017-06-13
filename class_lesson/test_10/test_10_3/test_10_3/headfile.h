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
	string m_idcard;//身份证
	int m_age;//年龄
	string m_name;//姓名
	string m_birthday;//生日
	string m_homeadress;//家庭地址
	string m_sex;//性别
public:
	people(string idcard, string name, int age, char sex, long birthday, string homeadress) {
		m_idcard = idcard;
		m_age = age;
		m_name = name;
		m_homeadress = homeadress;
		if (sex = 'w')m_sex = "女";
		else m_sex = "男";
		m_birthday = birthday / 10000;
		m_birthday += "年";
		birthday = birthday % 10000;
		m_birthday += birthday / 100;
		m_birthday += "月";
		m_birthday += birthday % 100;
		m_birthday += "日";
		
	}
	void putInFile();
	
};

#endif // !HEADFILE_H
