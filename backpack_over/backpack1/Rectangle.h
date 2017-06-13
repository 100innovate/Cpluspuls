#pragma once
#include"Point.h"
#include"Line.h"

class Rectangle :public Point {
protected:
	double m_l, m_w;
public:
	Rectangle();
	Rectangle(Point a, double l,double w);
	Rectangle(const Rectangle&value);
	Rectangle&operator=(const Rectangle&value);
	virtual ~Rectangle(){}

	double Area();
	virtual void Zoom(double g);
	virtual bool Exist(Point rhs);
	virtual double Volume();
	friend ostream& operator<<(ostream&out, const Rectangle & s);
	virtual void show();

};

