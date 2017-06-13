#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>

using namespace std;

typedef unsigned int size_type;

class Mystring {
private:
	size_type m_length;
	char*m_first;

	void Reallocate(size_type);
	void copy(char*first, char*first2);
public:
	Mystring();
	Mystring(char *);
	Mystring(const Mystring&);
	~Mystring();
	
	size_type size()const;

	Mystring& operator=(const Mystring&);
	Mystring& operator+=(const Mystring&);
	bool operator==(const Mystring&)const;
	bool operator<(const Mystring&)const;
	char& operator[](unsigned int num)const;

	Mystring operator+(const Mystring&)const;
	Mystring operator+(const char);

	friend Mystring operator+(char,const Mystring&);
	friend ostream& operator<<(ostream &,const Mystring&);

};

size_type SizeOfChar(char*);

#endif // !MYSTRING_H

