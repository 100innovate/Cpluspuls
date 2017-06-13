#include "Point.h"

Point::Point():m_x(0),m_y(0)
{
}

Point::Point(double x, double y, double z):m_x(x),m_y(y),m_z(z)
{
}

Point::Point(const Point & value): m_x(value.m_x),m_y(value.m_y),m_z(value.m_z)
{
}

Point & Point::operator=(const Point & value)
{
	m_x = value.m_x;
	m_y = value.m_y;
	m_z = value.m_z;
	return *this;
}

double Point::Area()
{
	return 0;
}

bool Point::Exist(Point rhs)
{
	if (m_x == rhs.m_x&&m_y == rhs.m_y&&m_z == rhs.m_z)return true;
	return false;
}

double Point::Volume()
{
	return 0.0;
}

void Point::Move(double x,double y,double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

void Point::show()
{
	cout << '(' << m_x << ',' << m_y << ',' << m_z << ") ";
}

ostream & operator<<(ostream & out, const Point & value)
{
	out << '(' << value.m_x << ',' << value.m_y << ',' << value.m_z << ") ";
	return out;
}
