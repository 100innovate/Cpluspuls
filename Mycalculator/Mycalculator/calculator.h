#ifndef CALCULATOR_H
#define CALCULATOR_H
#include"stack.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Calculator {
	LinkStack<double>m_numStack;
	LinkStack<char>m_charStack;

	int GetPrecedence(char exp, bool isCurrent);
	void GetnumCIN(char *&exp);
	char GetcharCIN(char *&exp);
	void compute();//º∆À„

public:
	Calculator() {};
	
	void calculate(char *exp);


};






#endif // !CALCULATOR_H

