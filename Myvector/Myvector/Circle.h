#include"headfile.h"

#include<cmath>


class Point {
	double m_x, m_y;
public:
	Point():m_x(0),m_y(0){}
	Point(double x, double y) :m_x(x), m_y(y) {}
	friend ostream & operator <<(ostream&, const Point&);
};

class Circle {
	Point m_point;
	double m_r;
public:
	Circle() :m_r(0){}
	Circle(Point x, double r) :m_point(x),m_r(r) {}
	bool operator >(const Circle&)const;
	bool operator ==(const Circle&)const;
	friend ostream & operator <<(ostream&,const Circle&);
};

