#pragma once
#include"Circle.h"
#include"Cube.h"
#include"Cuboid.h"
#include"Line.h"
#include"Point.h"
#include"Rectangle.h"
#include"Square.h"
#include"Cylinder.h"

template<typename A,typename B>
int compare(A a, B b) {
	if (a.Volume() == 0 || b.Volume() == 0) {
		if (a.Area() > b.Area())
			return 1;
		else if (a.Area() == b.Area())
			return 0;
		else return -1;
	}
	else {
		if (a.Volume() > b.Volume())
			return 1;
		else if (a.Volume() == b.Volume())
			return 0;
		else return -1;
	}
}

