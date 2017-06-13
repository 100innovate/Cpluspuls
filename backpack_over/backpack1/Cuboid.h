#pragma once

#include"Rectangle.h"

class Cuboid :public Rectangle {
	double m_h;
public:
	Cuboid();
	Cuboid(const Rectangle& a,double h);
	Cuboid(const Cuboid&value);
	Cuboid&operator=(const Cuboid&cir);
	~Cuboid(){}

	double Volume();
	void Zoom(double g);
	friend ostream& operator<<(ostream&out, const Cuboid & s);
	virtual void show();

};

