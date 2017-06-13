#include "Rectangle.h"

Rectangle::Rectangle():Point(),m_l(0),m_w(0)
{
}

Rectangle::Rectangle(Point a, double l, double w):Point(a), m_l(l), m_w(w)
{
}

Rectangle::Rectangle(const Rectangle & value): Point(value), m_l(value.m_l), m_w(value.m_w)
{
}

Rectangle & Rectangle::operator=(const Rectangle & value)
{
	this->Point::operator=(value);
	m_l = value.m_l;
	m_w = value.m_w;
	return *this;
}

double Rectangle::Area()
{
	return m_l*m_w;
}

void Rectangle::Zoom(double g)
{
	m_x *= g;
	m_y *= g;
}

bool Rectangle::Exist(Point rhs)
{
	if (Line(Point(m_x, 0), Point(rhs.m_x, 0)).Length() <= m_l / 2
		&& Line(Point(0, m_y), Point(0, rhs.m_y)).Length() <= m_w / 2)
		return true;
	return false;
}

double Rectangle::Volume()
{
	return 0.0;
}

void Rectangle::show()
{
	cout << (const Point&)*this << ' ' << "³¤l=" << m_l << " ¿íw=" << m_w << ' ';

}

ostream & operator<<(ostream & out, const Rectangle & value)
{
	out << (const Point&)value << ' ' << "³¤l=" << value.m_l << " ¿íw=" << value.m_w<<' ';
	return out;
}
