#ifndef CALCULATOR_H
#define CALCULATOR_H
#include"stack.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Calculator {
	LinkStack<double>m_numStack;
	LinkStack<string>m_strStack;
public:
	Calculator() {};
	void compute();
	void calculate(string &);
	const double Getnum();
	const string Getchar();
	void GetnumCIN(char *& exp);
	string GetcharCIN(char *& exp);

};

int getPrecedence(const string &exp, bool isCurrent);



#endif // !CALCULATOR_H

