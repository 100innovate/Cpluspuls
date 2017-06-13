#pragma once

#include"Square.h"

class Cube :public Square {
public:
	Cube();
	Cube(Point a, double l);
	Cube(const Cube&value);
	Cube&operator=(const Cube&cir);
	~Cube(){}

	double Volume();
	void Zoom(double g);
	bool Exist(Point rhs);
	friend ostream& operator<<(ostream&out, const Cube & s);
	virtual void show();

};

