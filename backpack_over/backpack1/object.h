#pragma once

#include"headfile.h"

class object {
protected:
	double m_money;//��ֵ
public:
	virtual double Area() = 0;
	virtual double Volume() = 0;
	virtual void Zoom(double g) = 0;
	virtual void Move(double x = 0, double y = 0, double z = 0) = 0;
	virtual void show() {
		cout << "��ֵ�� " << m_money << ' ';
	}
};