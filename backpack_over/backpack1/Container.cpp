#include "Container.h"

void Container::remove(unsigned int number)
{
	if (number > m_all.size() - 1) {
		cout << "error" << endl;
		return;
	}
	m_all.erase(m_all.begin() + number - 1);
}

void Container::outsort()
{
	auto a = m_all;
	int l;
	for (unsigned int i(0); i < a.size(); i++) {
		l = i;
		for (unsigned int k(i); k < a.size(); k++)
			if (a[k].Volume()>a[l].Volume())
				l = k;
		auto t = a[i];
		a[i] = a[l];
		a[l] = t;
	}
	for (unsigned int i(0); i < a.size(); i++)
		a[i].show();
}

goods & Container::operator[](unsigned int number)
{
	return m_all[number];
}
