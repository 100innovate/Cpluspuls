#include"Calculator.h"

int Calculator::GetPrecedence(char exp, bool isCurrent) {
	switch (exp)
	{
	case'#':return 0;
	case'=':return 1;
	case'+':case'-':return 3;
	case'*':case'/':case'%':return 5;
	case'(':return isCurrent ? 8:2;
	case')':return 2;
	case'^':return 6;
	case's':case'n':return 7;
	default:return -1;
	}
}

void Calculator::calculate(char *exp) {
	bool isCurrent(0);
	while (*exp != '\0') {
		if (*exp >= '0'&&*exp <= '9') 
			GetnumCIN(exp);
		else {
			char ch(GetcharCIN(exp));

			if (ch == '#'||ch == '(') { 
				m_charStack.push(ch);
				continue;
			}
			else if (ch == ')')
				isCurrent = 1;

			while (GetPrecedence(ch, isCurrent) <= GetPrecedence(m_charStack.GetTop(), isCurrent)) {
				//当前运算符优先级小于或等于栈顶运算符优先级
				if (m_charStack.GetTop() == '(') {
					//完成（）的运算
					compute();
					isCurrent = 0;
					break;
				}else compute();
			}

			if (ch != ')')m_charStack.push(ch);
		}
	}
	compute();//其余运算符全部执行完毕，执行=
	m_charStack.pop();//取出#
}

void Calculator::GetnumCIN(char *& exp)
{
	double tmp(0);
	while (*exp >= '0'&&*exp <= '9') {
		tmp *= 10;
		tmp += *(exp++)-48;
	}
	//记录整数位
	if (*exp == '.') {
		exp++;
		for (int i(1); *exp >= '0'&&*exp <= '9'; exp++, i++)
			tmp += (*exp - 48) *pow(10, -i);
	}
	//记录小数位
	m_numStack.push(tmp);
	//存入数据
}

char Calculator::GetcharCIN(char *& exp)
{
	if (*exp == 's' || *exp == 'c')
		exp += 2;
	return *(exp++);
}


void Calculator::compute() {
	char ch = m_charStack.pop();
	if (ch != '#'&&ch != 's'&&ch != 'n'&&ch != '='&&ch != '(') {//双数字运算符
		double num1 = m_numStack.pop();
		double num2 = m_numStack.pop();

		switch (ch) {
		case'+':m_numStack.push(num2 + num1); break;
		case'-':m_numStack.push(num2 - num1); break;
		case'*':m_numStack.push(num2 * num1); break;
		case'/':m_numStack.push(num2 / num1); break;
		case'%':m_numStack.push((int)num2 % (int)num1); break;
		case'^':m_numStack.push(pow(num2, num1)); break;
		default:
			break;
		}
	}
	switch (ch) {//单数字自运算符
	case's':m_numStack.push(cos(m_numStack.pop())); break;
	case'n':m_numStack.push(sin(m_numStack.pop())); break;
	case'=':cout << m_numStack.pop() << endl; break;
	}
}