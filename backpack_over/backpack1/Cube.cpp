#include "Cube.h"

Cube::Cube():Square()
{
}

Cube::Cube(Point a, double l):Square(a ,l)
{
}

Cube::Cube(const Cube & value):Square(value)
{
}

Cube & Cube::operator=(const Cube & value)
{
	this->Square::operator=(value);
	return *this;
}

double Cube::Volume()
{
	return pow(m_l,3);
}

void Cube::Zoom(double g)
{
	m_l *= g;
}

bool Cube::Exist(Point rhs)
{
	if (this->Square::Exist(rhs) && rhs.m_z < m_z&&rhs.m_z>0)
		return true;
	return false;
}

void Cube::show()
{
	cout << (const Square&)*this<< ' ' << "±ß³¤l=" << m_l;
}

ostream & operator<<(ostream & out, const Cube & value)
{
	out << (const Square&)value << ' ' << "±ß³¤l=" << value.m_l;
	return out;
}
