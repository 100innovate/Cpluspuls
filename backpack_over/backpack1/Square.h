#pragma once

#include"Point.h"
#include"Line.h"

class Square :public Point {
protected:
	double m_l;
public:
	Square();
	Square(Point a, double l);
	Square(const Square&value);
	Square&operator=(const Square&value);
	virtual ~Square(){}

	double Area();
	virtual void Zoom(double g);
	virtual bool Exist(Point rhs);
	friend ostream& operator<<(ostream&out, const Square & s);
	virtual void show();

};


