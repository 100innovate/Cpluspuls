#include"headfile.h"

Rectangle::Rectangle(int l, int t, int r, int b) :m_left(l), m_top(t), m_right(r), m_bottom(b) {

}

void Rectangle::assign(int l, int t, int r, int b) {
	m_left = l;
	m_top = t;
	m_right = r;
	m_bottom = b;
}
void Rectangle::show() {
	cout << "����" << m_left << ',' << m_top << endl;
	cout << "����" << m_right << ',' << m_bottom << endl;
}
int Rectangle::calArea() {
	return abs((m_right - m_left)*(m_bottom - m_top));
}

int Rectangle::calPerimeter() {
	return 2 * abs((m_right - m_left) + (m_bottom - m_top));
}