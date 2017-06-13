#ifndef FRACTION_H
#define FRACTION_H

#include<iostream>
#include<cmath>

using namespace std;

class Fraction {
	int m_numberator;
	int m_denominator;
public:
	void show();
	void reduction();//约分
	void reduction(int &a, int &b);//约分
	void makeCommonDen(Fraction&);//通分
	void reciprocal();//倒数
	int common(int a, int b);//最大公约数
	Fraction(int a = 0, int b = 1);
	Fraction(const Fraction&);
	~Fraction();
	Fraction&operator = (const Fraction&);
	Fraction operator + (const Fraction&)const;
	Fraction operator - (const Fraction&)const;
	Fraction operator * (const Fraction&)const;
	Fraction operator / (const Fraction&)const;
	Fraction&operator += (const Fraction&);
	Fraction&operator -= (const Fraction&);
	Fraction&operator *= (const Fraction&);
	Fraction&operator /= (const Fraction&);
	bool operator > (const Fraction&)const;
	bool operator >= (const Fraction&)const;
	bool operator < (const Fraction&)const;
	bool operator <= (const Fraction&)const;
	bool operator == (const Fraction&)const;

	inline void set(int a, int b);
	friend ostream &operator<<(ostream & out, const Fraction& f);
};


#endif
