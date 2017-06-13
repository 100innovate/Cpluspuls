#include "Cuboid.h"

Cuboid::Cuboid():Rectangle(),m_h(0)
{
}

Cuboid::Cuboid(const Rectangle &a, double h) : Rectangle(a), m_h(h)
{
}

Cuboid::Cuboid(const Cuboid & value) : Rectangle(value), m_h(value.m_h)
{
}

Cuboid & Cuboid::operator=(const Cuboid & value)
{
	this->Rectangle::operator=(value);
	return *this;
}

double Cuboid::Volume()
{
	return m_l*m_w*m_h;
}

void Cuboid::Zoom(double g)
{
	m_x *= g;
	m_y *= g;
	m_l *= g;

}

void Cuboid::show()
{
	cout << (const Rectangle&)*this << " h=" << m_h;
}

ostream & operator<<(ostream & out, const Cuboid & value)
{
	out <<(const Rectangle&)value << " h=" << value.m_h;
	return out;
}
