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
	string m_name;//����
	int m_age;//����
	string m_birthday;//����
	string m_sex;//�Ա�
	string m_idcard;//���֤
	string m_adress;//סַ
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