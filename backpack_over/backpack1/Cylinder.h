#pragma once

#include"Circle.h"

class Cylinder :public Circle {
	double m_h;
public:
	Cylinder();
	Cylinder(const Circle& a, double h);
	Cylinder(const Cylinder&value);
	Cylinder&operator=(Cylinder&value);
	~Cylinder(){}

	double Volume();
	void Zoom(double g);
	bool Exist(Point rhs);
	friend ostream& operator<<(ostream&out, const Cylinder & s);
	virtual void show();
};


