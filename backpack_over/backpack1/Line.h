#pragma once
#include"Point.h"

class Line {
	Point m_start, m_end;
public:
	Line();
	Line(Point a, Point b);
	Line(const Line&value);

	void Zoom(double g);
	double Length();
	friend ostream& operator<<(ostream&out, const Line & value);
	virtual void show();
};

