#include"calculator.h"

int main() {
	Calculator cal;

	char c[80];
	cin >> c;
	
	cal.calculate(c);

	system("pause");
	return 0;
}