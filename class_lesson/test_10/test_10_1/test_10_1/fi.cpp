#include"headfile.h"

Rectangle::Rectangle(int l, int t, int r, int b) :m_left(l), m_top(t), m_right(r), m_bottom(b) {

}
Rectangle::Rectangle(const Rectangle & rhs) : m_left(rhs.m_left), m_top(rhs.m_top), m_right(rhs.m_right), m_bottom(rhs.m_bottom){

}//复制构造函数

void Rectangle::assign(int l, int t, int r, int b) {
	m_left = l; 
	m_top = t;
	m_right = r;
	m_bottom = b;
}
void Rectangle::show() {
	cout << "高是" << m_left << ','<<m_top<<endl;
	cout << "宽是" << m_right << ',' << m_bottom<<endl;
}
int Rectangle::calArea() {
	return abs((m_right - m_left)*(m_bottom - m_top));
}

int Rectangle::calPerimeter() {
	return 2 * abs((m_right - m_left) + (m_bottom - m_top));
}