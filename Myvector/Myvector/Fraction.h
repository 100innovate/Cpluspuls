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
	void reduction();//Լ��
	void reduction(int &a, int &b);//Լ��
	void makeCommonDen(Fraction&);//ͨ��
	void reciprocal();//����
	int common(int a, int b);//���Լ��
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
