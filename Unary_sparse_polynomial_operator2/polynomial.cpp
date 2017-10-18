#include "polynomial.h"

polynomial::polynomial()
{
#include<bits/stdc++.h>
#include"singlelink.h"

using namespace std;

class Term {
public:
    double m_coef;//系数
    int m_exp;//指数
public:
    Term(){}
    ~Term(){}
    Term(double coef, int exp) :m_coef(coef), m_exp(exp) {}
    Term(const Term&value) :m_coef(value.m_coef), m_exp(value.m_exp){}
    friend istream& operator >>(istream&in, Term&value) {

    }
    friend ostream& operator <<(ostream&out, const Term&value) {
        out << value.m_coef << "x^" << value.m_exp << endl;
    }
};

class Polynomial
{
    SingleLink<Term> m_node;
public:
    Polynomial();
    Polynomial& operator +(const Polynomial&value);
    Polynomial& operator -(const Polynomial&value);
    friend istream& operator >>(istream&in, Polynomial&value);
    friend ostream& operator <<(ostream&out, const Polynomial&value);
};

}
