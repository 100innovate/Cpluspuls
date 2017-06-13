#include "Mystring.h"

void Mystring::Reallocate(size_type newsize)
{
	char*newstr(new char[newsize]);
	copy(newstr, m_first);
	delete[]m_first;
	m_first = newstr;
}

void Mystring::copy(char * first, char * first2)
{
	*first = *first2;
	for (auto i(0); *first2 != '\0'; i++)
		*(++first) = *(++first2);
}

Mystring::Mystring():m_first(new char[1]),m_length(1)
{
	*m_first = '\0';
}

Mystring::Mystring(char *value):m_length( SizeOfChar(value)), m_first(new char[m_length])
{
	copy(m_first, value);
}

Mystring::Mystring(const Mystring &vaule):m_first(new char[vaule.size()]),m_length(vaule.size())
{
	copy(m_first, vaule.m_first);
}

Mystring::~Mystring()
{
	delete[]m_first;
}

size_type Mystring::size() const
{
	return size_type(m_length);
}

Mystring & Mystring::operator=(const Mystring &vaule)
{
	if (&vaule != this) {
		delete[]m_first;
		m_first = new char[vaule.size()];
		copy(m_first, vaule.m_first);
	}
	return *this;
}

Mystring & Mystring::operator+=(const Mystring &vaule)
{
	Reallocate(m_length + vaule.m_length - 1);
	copy(m_first + m_length - 1, vaule.m_first);
	m_length = m_length + vaule.m_length - 1;
	return *this;
}

bool Mystring::operator==(const Mystring &vaule)const
{
	if (m_length != vaule.m_length) return false;
	for (char*p(m_first),*q(vaule.m_first); *p != '\0'; p++, q++)
		if (*p != *q) return false;
	return true;
}

bool Mystring::operator<(const Mystring &vaule)const
{
	for (char*p=m_first,*q=vaule.m_first;; p++, q++)
		if (*p < *q||( *p =='\0'&& *q!='\0'))return true;
		else if (*q == '\0')return false;
}

char & Mystring::operator[](unsigned int num) const
{
	if (num > m_length - 1)throw num;
	return m_first[num];
}

Mystring Mystring::operator+(const Mystring &vaule) const
{
	Mystring a = *this;
	a += vaule;
	return a;
}

Mystring Mystring::operator+(const char a)
{
	Mystring vaule;
	vaule.Reallocate(m_length+1);
	vaule.m_length = m_length + 1;
	copy(vaule.m_first, m_first);
	vaule[m_length - 1] = a;
	vaule[m_length] = '\0';
	return vaule;
}

Mystring operator+(char b, const Mystring &a)
{
	Mystring vaule;
	vaule.Reallocate(a.m_length + 1);
	vaule.m_length = a.m_length + 1;
	vaule[0] = b;
	vaule.copy(vaule.m_first, a.m_first);
	return vaule;
}

ostream& operator<<(ostream &out, const Mystring &vaule)
{
	for (auto i(vaule.m_first); *i != '\0'; i++)
		out << *i;
	return out;
}


size_type SizeOfChar(char *vaule)
{
	for (size_type i(1);;vaule++,i++)
		if (*vaule == '\0')
			return i;
}




