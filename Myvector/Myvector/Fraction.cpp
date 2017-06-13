#include"Fraction.h"

Fraction::~Fraction() {
	
}

int Fraction::common(int a, int b) {
	int n = abs(b);
	int sub = 1;
	for (int i = n; i >= 1; i--) {
		if (a%i == 0 && b%i == 0) {
			sub = i;
			return sub;
			break;
		}
	}
}

void Fraction::reduction(int &a, int &b) {
	int n = common(a, b);
	a /= n;
	b /= n;
}

void Fraction::reduction() {
	int n = common(m_numberator, m_denominator);
	m_numberator /= n;
	m_denominator /= n;
}

Fraction::Fraction(int a, int b) {
	m_numberator = a;
	m_denominator = b;
	reduction();
}

Fraction::Fraction(const Fraction&c) {
	m_numberator = c.m_numberator;
	m_denominator = c.m_denominator;
}

void Fraction::reciprocal() {
	int x;
	x = m_denominator;
	m_denominator = m_numberator;
	m_numberator = x;
}

void Fraction::show() {
	cout << m_numberator << "/" << m_denominator << endl;
}


void Fraction::makeCommonDen(Fraction&c) {
	c.m_numberator *= m_denominator;
	m_numberator *= c.m_denominator;
	m_denominator = c.m_denominator *= m_denominator;
}


Fraction&Fraction::operator = (const Fraction&c) {
	m_numberator = c.m_numberator;
	m_denominator = c.m_denominator;
	return *this;
}

Fraction Fraction::operator + (const Fraction&c)const {
	return Fraction(m_numberator*c.m_denominator + m_denominator + c.m_numberator, m_denominator*c.m_denominator);

}

Fraction Fraction::operator - (const Fraction&c)const {
	return Fraction(m_numberator*c.m_denominator - m_denominator + c.m_numberator, m_denominator*c.m_denominator);
}

Fraction Fraction::operator * (const Fraction&c)const {
	return Fraction(m_numberator * c.m_numberator, m_denominator * c.m_denominator);
}

Fraction Fraction::operator / (const Fraction&c) const {
	return Fraction(m_numberator *  c.m_denominator, m_denominator * c.m_numberator);

}

Fraction&Fraction::operator += (const Fraction&c) {
	Fraction n(c);
	makeCommonDen(n);
	m_numberator += n.m_numberator;
	reduction();
	return *this;

}

Fraction&Fraction::operator -= (const Fraction&c) {
	Fraction n(c);
	makeCommonDen(n);
	m_numberator -= n.m_numberator;
	reduction();
	return *this;

}

Fraction&Fraction::operator *= (const Fraction&c) {
	m_numberator *= c.m_numberator;
	m_denominator *= c.m_denominator;
	reduction();
	return *this;

}

Fraction&Fraction::operator /= (const Fraction&c) {
	if (this == &c) {
		m_numberator = 1;
		m_denominator = 1;
	}
	else {
		m_numberator *= c.m_denominator;
		m_denominator *= c.m_numberator;
	}
	reduction();
	return *this;
}

bool Fraction::operator > (const Fraction&c) const {
	if (c.m_numberator*m_denominator<m_numberator*c.m_denominator)
		return true;
	else return false;

}

bool Fraction::operator < (const Fraction&c)const {
	if (c.m_numberator*m_denominator>m_numberator*c.m_denominator)
		return true;
	else return false;
}

bool Fraction::operator >= (const Fraction&c) const {
	if (c.m_numberator*m_denominator <= m_numberator*c.m_denominator)
		return true;
	else return false;
}

bool Fraction::operator <= (const Fraction&c)const {
	if (c.m_numberator*m_denominator >= m_numberator*c.m_denominator)
		return true;
	else return false;
}

bool Fraction::operator==(const Fraction &a) const
{
	if (m_denominator == a.m_denominator&&m_numberator == a.m_numberator)return true;
	else return false;
}



ostream &operator<<(ostream & out, const Fraction& f) {
	out << f.m_numberator << '/' << f.m_denominator;
	return out;
}

inline void Fraction::set(int a, int b) {
	m_numberator = a;
	m_denominator = b;
}