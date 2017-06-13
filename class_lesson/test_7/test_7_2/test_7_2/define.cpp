#include"headfile.h"

double Calculate(double &a, double &b, char &op) {
	switch (op)
	{
	case '+':return add(a, b);
	case '-':return reduce(a, b);
	case '*':return multi(a, b);
	case '/':return div(a, b);
	}
}

double add(double &a, double &b) {
	return a + b;
}

double reduce(double &a, double &b) {
	return a - b;
}
double multi(double &a, double &b) {
	return a*b;
}
double div(double &a, double &b) {
	return a / b;
}

