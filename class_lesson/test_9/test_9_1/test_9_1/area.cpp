#include"headfile.h"

double area(double r) {
	return r*r*pi;
}
double area(double a, double b) {
	return a*b;
}
double area(double a, double b, double h) {
	return (a + b)*h / 2;
}
double area(double a, double b, double c, int) {
	double s = (0.5*(a + b)*c);
	return sqrt(s*(s - a)*(s - b)*(s - c));
}