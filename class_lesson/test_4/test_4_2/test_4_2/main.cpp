#include<iostream>
using namespace std;
int main() {
	int i(1);
	double sum(0), pi, term(1.0);
	
	do {
		sum += term;
		i++;
		term = term*(i - 1) / (2 * i - 1.0);
	} while (term > 1.0e-10);

	pi = 2 * sum;
	cout << "pi=" << pi << endl;

	return 0;
}