#ifndef HEADFILE_H
#define HEADFILE_H

#include<iostream>
#include<cstdlib>
using namespace std;

class Rectangle {
	int m_left, m_top;
	int m_right, m_bottom;
public:
	Rectangle(int l = 0, int t = 0, int r = 0, int b = 0);
	~Rectangle() {}
	void assign(int l, int t, int r, int b);
	void show();
	int calArea();
	int calPerimeter();
};

#endif // !HEADFILE_H
