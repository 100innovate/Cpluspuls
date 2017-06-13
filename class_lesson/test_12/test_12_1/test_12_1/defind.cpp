#include"headfile.h"

Rectangle::Rectangle(int l, int t, int r, int b) :m_left(l), m_top(t), m_right(r), m_bottom(b) {
	sum++;
	cout << "ִ����һ�ι��캯��" << " ������" << sum << "������" << endl;
}
Rectangle::Rectangle(const Rectangle & rhs) : m_left(rhs.m_left), m_top(rhs.m_top), m_right(rhs.m_right), m_bottom(rhs.m_bottom) {
	sum++;
	cout << "ִ����һ�θ��ƹ��캯��" << " ������" << sum << "������" << endl;
}//���ƹ��캯��

Rectangle::~Rectangle() {
	sum1++;
	cout << "ִ����һ�ι�������" << " ������" << sum1 << "������" << endl;
}
void Rectangle::assign(int l, int t, int r, int b) {
	m_left = l;
	m_top = t;
	m_right = r;
	m_bottom = b;
}
void Rectangle::show() {
	cout << "���Ͻ���" << m_left << ',' << m_top << endl;
	cout << "���½���" << m_right << ',' << m_bottom << endl;
}
int Rectangle::calArea() {
	return abs((m_right - m_left)*(m_bottom - m_top));
}

int Rectangle::calPerimeter() {
	return 2 * abs((m_right - m_left) + (m_bottom - m_top));
}

Rectangle&Rectangle::operator += (const Rectangle&c) {
	m_right += (c.m_left-c.m_right);
	m_bottom += (c.m_top-c.m_bottom);
	return *this;
}
Rectangle&Rectangle::operator -= (const Rectangle&c) {
	m_right -= (c.m_left-c.m_right);
	m_bottom -= (c.m_top-c.m_bottom);
	return *this;
}
Rectangle Rectangle::operator + (const Rectangle&c) {
	int right=m_right + (c.m_left - c.m_right);
	int bottom =m_bottom + (c.m_top - c.m_bottom);
	return Rectangle(m_left,m_top,right,bottom);
}
Rectangle Rectangle::operator - (const Rectangle&c) {
	int right = m_right - (c.m_left - c.m_right);
	int bottom = m_bottom + (c.m_top - c.m_bottom);
	return Rectangle(m_left,m_top,right, bottom);
}