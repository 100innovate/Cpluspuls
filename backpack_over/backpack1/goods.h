#pragma once

#include"Template.h"

class goods{
private:
	shared_ptr<object>m_goods;
	unsigned int m_id;//���
	double m_volume;//���
public:
	double Volume();
	goods()=delete;
	goods(const shared_ptr<object>&value,unsigned int id,double money=0);
	~goods(){}
	void show();
};


