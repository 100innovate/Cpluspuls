#ifndef HEADFILE_H
#define HEADFILE_H

#include<iostream>
#include<cmath>

using namespace std;
const double pi(3.1415926);

class ball {
	int r;
public:
	double area(double r);
	double volume(double r);
};

#endif // !HEADFILE_H
