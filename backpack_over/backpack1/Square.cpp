#include "Square.h"

Square::Square():Point(),m_l(0)
{
}

Square::Square(Point a, double l): Point(a), m_l(l)
{
}

Square::Square(const Square & value):Point(value), m_l(value.m_l)
{
}

Square & Square::operator=(const Square & value)
{
	this->Point::operator=(value);
	m_l = value.m_l;
	return *this;
}

double Square::Area()
{
	return m_l*m_l;
}

bool Square::Exist(Point rhs)
{
	if (Line(Point(m_x, 0), Point(rhs.m_x, 0)).Length() <= m_l / 2
		&& Line(Point(0, m_y), Point(0, rhs.m_y)).Length() <= m_l / 2)
		return true;
	return false;
}

void Square::show()
{
	cout << (const Point&)*this << ' ' << "±ß³¤l=" << m_l;

}

void Square::Zoom(double g)
{
	m_l *= g;
}

ostream & operator<<(ostream & out, const Square & value)
{
	out << (const Point&)value << ' ' << "±ß³¤l=" << value.m_l;
	return out;
}
