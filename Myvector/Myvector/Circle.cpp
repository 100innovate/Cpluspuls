#include "Circle.h"

ostream & operator<<(ostream&out, const Point &a)
{
	out << '(' << a.m_x << ',' <<a.m_y << ')';
	return out;
}

ostream & operator<<(ostream&out, const Circle &a)
{
	out << a.m_point << ' ' << a.m_r << '\t';
	return out;
}

bool Circle::operator>(const Circle &a)const
{
	if (m_r > a.m_r)return true;
	else return false;
}

bool Circle::operator==(const Circle &a) const
{
	if (m_r == a.m_r)return true;
	else return false;
}
