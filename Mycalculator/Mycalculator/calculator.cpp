#include"Calculator.h"



int getPrecedence(const string &exp, bool isCurrent) {
	if (exp == "=")
		return 1;
	else if (exp == "#")
		return 0;
	else if (exp == "+" || exp == "-")
		return(isCurrent) ? 3 : 4;
	else if (exp == "*" || exp == "/" || exp == "%")
		return (isCurrent) ? 5 : 6;
	else if (exp == "(")
		return (isCurrent) ? 8 : 2;
	else if (exp == ")")
		return 2;
	else if (exp == "^")
		return 7;
	else if (exp == "sin" || exp == "cos" || exp == "log" || exp == "sqrt")
		return 7;
	else return -1;
}

void Calculator::calculate(string &expression) {
	char *exp = &expression[0];
	bool isCurrent(false);//判断是否与栈顶运算符相同
	while (*exp != '\0') {//跳出条件
		if (*exp >= '0'&&*exp <= '9') {//判断为数字
			GetnumCIN(exp);
		}
		else {//判断为运算符
			string ch = GetcharCIN(exp);
			if (ch == "#" || ch == "(") {
				m_strStack.push(ch);
				continue;
			}
			else if (ch == ")"|| ch == "=")
				isCurrent = 1;

			while ((getPrecedence(ch, isCurrent) <= getPrecedence(m_strStack.GetTop(), isCurrent))) {
				//当前运算符优先级小于或等于栈顶运算符优先级
				if (m_strStack.GetTop() == "(") {
					//完成（）的运算
					compute();
					isCurrent = 0;
					break;
				}
				else compute();
			}
			if (ch != ")")m_strStack.push(ch);
		}
	}
	compute();//其余运算符全部执行完毕，执行=
}

const double Calculator::Getnum() {
	return m_numStack.pop();
}

const string Calculator::Getchar() {
	return m_strStack.pop();
}

void Calculator::compute() {
	string str = m_strStack.pop();
	double num1, num2;
	if (str != "#"&&str != "sin"&&str != "cos"&&str != "log"&&str != "sqrt"&&str != "="&&str != "(") {
		num1 = m_numStack.pop();
		if (str == "-"&&m_numStack.isEmpty()) {
			num2 = 0;
		}
		else num2 = m_numStack.pop();
		if (str == "+")
			m_numStack.push(num2 + num1);
		else if (str == "-") {
			m_numStack.push(num2 - num1);
		}
		else if (str == "*")
			m_numStack.push(num2 * num1);
		else if (str == "/")
			m_numStack.push(num2 / num1);
		else if (str == "%")
			m_numStack.push((int)num2 % (int)num1);
		else if (str == "^")
			m_numStack.push(pow(num2, num1));
	}
	else if (str == "=") {
		cout<<m_numStack.pop();
	}
	else if (str == "cos")
		m_numStack.push(cos(m_numStack.pop()));
	else if (str == "sin")
		m_numStack.push(sin(m_numStack.pop()));
	else if (str == "log")
		m_numStack.push(log(m_numStack.pop()));
	else if (str == "sqrt")
		m_numStack.push(sqrt(m_numStack.pop()));
}

void Calculator::GetnumCIN(char *& exp)
{
	double tmp(0);
	while (*exp >= '0'&&*exp <= '9') {
		tmp *= 10;
		tmp += *(exp++) - 48;
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

string Calculator::GetcharCIN(char *&exp)
{
	if (*exp == 's'&&*(exp + 1) == 'i'&&*(exp + 2) == 'n') {
		exp += 3;
		return "sin";
	}
	else if (*exp == 'c'&&*(exp + 1) == 'o'&&*(exp + 2) == 's') {
		exp += 3;
		return "cos";
	}
	else if (*exp == 'l'&&*(exp + 1) == 'o'&&*(exp + 2) == 'g') {
		exp += 3;
		return "log";
	}
	else if (*exp == 's'&&*(exp + 1) == 'q'&&*(exp + 2) == 'r'&&*(exp + 3) == 't') {
		exp += 4;
		return "sqrt";
	}
	else {
		char x = *(exp++);
		string a;
		a += x;
		return a;
	}
}
