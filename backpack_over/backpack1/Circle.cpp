#include "Circle.h"

Circle::Circle():Point(),m_r(0)
{
}

Circle::Circle(const Point &a, double r):Point(a),m_r(r)
{
}

Circle::Circle(const Circle & value):Point(value),m_r(value.m_r)
{
}

Circle & Circle::operator=(const Circle & value)
{
	this->Point::operator=(value);
	m_r = value.m_r;
	return *this;
}

double Circle::Area()
{
	return PI*m_r*m_r;
}

double Circle::Volume()
{
	return 0.0;
}

void Circle::show()
{
	cout << (const Point&)*this << ' ' << "r=" <<m_r << ' ';

}

void Circle::Zoom(double g)
{
	m_r *= g;
}

bool Circle::Exist(Point rhs)
{
	if (Line(*this, rhs).Length() <= m_r)return true;
	return false;
}

ostream & operator<<(ostream & out, const Circle & value)
{
	out << (const Point&)value << ' ' << "r=" << value.m_r << ' ';
	return out;
}
