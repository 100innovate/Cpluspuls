#include "goods.h"

goods::goods(const shared_ptr<object>& value, unsigned int id,double money):m_goods(value), m_id(id), m_volume(value->Volume())
{

}

void goods::show()
{
	m_goods->show();
	cout << "±àºÅ£º" << m_id  << ' ' << "Ìå»ý£º" << m_volume;
	cout << '\n';
}

double goods::Volume()
{
	return m_goods->Volume();
}
