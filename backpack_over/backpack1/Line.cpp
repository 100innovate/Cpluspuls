#include "Line.h"

Line::Line():m_start(),m_end()
{
}

Line::Line(Point a, Point b): m_start(a), m_end(b)
{
}

Line::Line(const Line & value): m_start(value.m_start), m_end(value.m_end)
{
}

void Line::Zoom(double g)
{
	m_start = Point((m_start.m_x - (m_start.m_x + m_end.m_x) / 2)*g + (m_start.m_x + m_end.m_x) / 2,
		(m_start.m_y - (m_start.m_y + m_end.m_y) / 2)*g + (m_start.m_y + m_end.m_y) / 2, 
		(m_start.m_z - (m_start.m_z + m_end.m_z) / 2)*g + (m_start.m_z + m_end.m_z) / 2);
	m_end = Point((m_end.m_x - (m_start.m_x + m_end.m_x) / 2)*g + (m_start.m_x + m_end.m_x) / 2, 
		(m_end.m_y - (m_start.m_y + m_end.m_y) / 2)*g + (m_start.m_y + m_end.m_y) / 2,
		(m_end.m_z - (m_start.m_z + m_end.m_z) / 2)*g + (m_start.m_z + m_end.m_z) / 2);
}

double Line::Length()
{
	return sqrt(pow(m_start.m_x - m_end.m_x, 2) + pow(m_start.m_y - m_end.m_y, 2) + pow(m_start.m_z - m_end.m_z, 2));
}

void Line::show()
{
	cout << "起始点：" << m_start << "终点：" << m_end;
}

ostream & operator<<(ostream & out, const Line & value)
{
	out << "起始点：" << value.m_start << "终点：" << value.m_end;
	return out;
}
