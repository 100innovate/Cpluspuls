#include "headfile.h"

int main() {
	ball r;
	cout << r.area(1) << endl;
	cout << r.volume(1) << endl;
	return 0;
}

double ball::area(double r) {
	return 4 * pi*r*r;
}
double ball::volume(double r) {
	return 4.0 / 3 * r*r*r*pi;
}
