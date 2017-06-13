#pragma once

#include"headfile.h"
#include"object.h"

class Point :public object{
protected:
	double m_x, m_y, m_z;
public:
	Point();
	Point(double x, double y,double z=0);
	Point(const Point&value);
	virtual ~Point() {};

	Point&operator=(const Point&value);
	virtual double Area();
	virtual double Volume();
	virtual void Zoom(double g){}
	virtual bool Exist(Point rhs);
	virtual void Move(double x=0, double y=0,double z=0);
	virtual void show();

	friend ostream& operator<<(ostream&out, const Point & s);
	friend class Line;
	friend class Rectangle;
	friend class Square;
	friend class Cube;
	friend class Circle;
	friend class Cylinder;

};


