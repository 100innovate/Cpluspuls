#ifndef HEADFILE_H
#define HEADFILE_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

void in();
void out();

class people {
private:
	string m_name;//姓名
	int m_age;//年龄
	string m_birthday;//生日
	string m_sex;//性别
	string m_idcard;//身份证
	string m_adress;//住址
public:
	people(string, int, string, string, string, string);
	people(people&);
	people();
	void input();
	void putout();
	void putinfile();
	void aaaa();
	void bb();
	void cc();
};
#endif // !HEADFILE_H