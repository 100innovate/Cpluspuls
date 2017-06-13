#pragma once

#include"Template.h"
#include"goods.h"

class Container {
private:
	vector<goods> m_all;
	static int ms_number;
public:
	void outsort();
	void remove(unsigned int number);
	template <typename T>void add(const T&value,double money);
	goods& operator [](unsigned int number);
};

template<typename T>
inline void Container::add(const T & value,double money)
{
	m_all.push_back(goods(shared_ptr<object>(new T(value)), ms_number, money));
	ms_number++;
}
