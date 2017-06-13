#include"Mystring.h"

int main() {
	Mystring a("‘Á…œ");
	Mystring b("∫√");
	a += b;
	Mystring c;
	c = a + b;
	
	char d('a');
	c = a + d;
	bool f = (a == b);

	c = d + a;

	cout << a;

	cout << f;
	return 0;
}

