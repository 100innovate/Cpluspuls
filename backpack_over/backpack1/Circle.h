#pragma once

#include"Point.h"
#include"Line.h"

class Circle :public Point {
protected:
	double m_r;
public:
	Circle();
	Circle(const Point& a, double r);
	Circle(const Circle&value);
	Circle&operator=(const Circle&value);
	virtual ~Circle(){}

	double Area();
	virtual void Zoom(double g);
	virtual bool Exist(Point rhs);
	virtual double Volume();
	friend ostream& operator<<(ostream&out, const Circle & s);
	virtual void show();

};
