#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "ÇëÊäÈëa,b" << endl;
	cin >> a >> b;
	cout << "a=" << a << "b=" << b << endl;
	int c;
	c = a;
	a = b;
	b = c;
	cout <<"a="<< a << "\t"<<"b=" << b << endl;
	return 0;
}
