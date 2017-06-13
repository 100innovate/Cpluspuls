#include "Cylinder.h"

Cylinder::Cylinder():Circle(),m_h(0)
{
}

Cylinder::Cylinder(const Circle &a, double h) : Circle(a), m_h(h)
{
}

Cylinder::Cylinder(const Cylinder & value):Circle(value), m_h(value.m_h)
{
}

Cylinder & Cylinder::operator=(Cylinder & value)
{
	this->Circle::operator=(value);
	m_h = value.m_h;
	return *this;
}

double Cylinder::Volume()
{
	return Area()*m_h;
}

void Cylinder::Zoom(double g)
{
	m_r *= g;
	m_h *= g;
}

bool Cylinder::Exist(Point rhs)
{
	if (this->Circle::Exist(rhs) && rhs.m_z < m_h &&rhs.m_z>0)
		return true;
	return false;
}

void Cylinder::show()
{
	cout << (const Circle&)*this<< " h=" << m_h;
}

ostream & operator<<(ostream & out, const Cylinder & value)
{
	out << (const Circle&)value << " h=" << value.m_h;
	return out;
}
