#ifndef MYVECTOR_H
#define MYVECTOR_H

#include"headfile.h"

typedef unsigned int size_type;
 
template<typename Type_name>
class Myvector {
	Type_name* m_first;
	Type_name* m_last;
	Type_name* max_end;
	//public:iterator;

	size_type max_size()const;

	void Reallocate(size_type);
	void Reserve(size_type needsize);
	void save(Type_name*first,Type_name*last,const Type_name&vaule);
	void copy(Type_name*first, Type_name*first2, Type_name*last2);//将first2-last2区间的内容拷贝至first

public:
	Myvector();
	Myvector(size_type x,const Type_name & y);
	Myvector(size_type x);
	Myvector(const Myvector&);
	~Myvector();
	const Myvector<Type_name> & operator =(const Myvector&);
	size_type size()const;
	Type_name *begin()const;
	Type_name *end()const;
	void resize(size_type);
	bool empty()const;
	Type_name & operator[](size_type);
	const Type_name &operator[](size_type)const;
	Type_name & at(size_type);
	const Type_name & at(size_type)const;
	Type_name & front();
	Type_name & back();
	void push_back(const Type_name&);
	void pop_back(const Type_name&);
	Type_name* insert(Type_name*, const Type_name&);
	Type_name* erase(Type_name*);
	void clear();
	void sort();
	Type_name* binarySearch(const Type_name&)const;
	Type_name* binarySearch(const Type_name&,Type_name*first, Type_name*last)const;
	void show();
};

#endif // !MYVECTOR_H

template<typename Type_name>
inline size_type Myvector<Type_name>::max_size() const
{
	if (max_end == nullptr)return 0;
	else return size_type(max_end-m_first+1);
}

template<typename Type_name>
inline void Myvector<Type_name>::Reallocate(size_type newsize)
{
	if (newsize > this->max_size()){
		Type_name*q = new Type_name[newsize + this->max_size() + this->max_size() / 2];
		copy(q, m_first, m_last);
		m_last = q + size() - 1;
		max_end = q + newsize + this->max_size() + this->max_size() / 2 - 1;
		delete[]m_first;
		m_first = q;
	}
	else {
		Type_name*q = new Type_name[newsize];
		copy(q, m_first, m_first+ newsize-1);
		m_last = m_first + newsize - 1;
		max_end = m_first + newsize - 1;
		delete[]m_first;
		m_first = q;
	}
}


template<typename Type_name>
inline void Myvector<Type_name>::Reserve(size_type needsize)
{
	Reallocate(needsize + this->max_size());
}

template<typename Type_name>
inline void Myvector<Type_name>::save(Type_name * first, Type_name * last, const Type_name & vaule)
{
	for (auto i(first); i <= last; i++)
		*i = vaule;
}

template<typename Type_name>
inline void Myvector<Type_name>::copy(Type_name * first, Type_name * first2, Type_name * last2)
{
	for (auto i(first2); i <= last2; i++)
		*(first++) = *i;
}


template<typename Type_name>
inline Myvector<Type_name>::Myvector():m_last(nullptr),max_end(nullptr)
{
	m_first = new Type_name[0];
}

template<typename Type_name>
inline Myvector<Type_name>::Myvector(size_type x, const Type_name & value) :m_first(new Type_name[x]), m_last(m_first + x - 1),max_end(m_last)
{//初始化列表中初始化顺序严格按照声明顺序
	save(m_first, m_last, value);
}

template<typename Type_name>
inline Myvector<Type_name>::Myvector(size_type x) :m_first(new Type_name[x]), m_last(m_first + x - 1), max_end(m_last)
{//初始化列表中初始化顺序严格按照声明顺序

}

template<typename Type_name>
inline Myvector<Type_name>::Myvector(const Myvector &value) :m_first(new Type_name[value.max_size()]),m_last(nullptr),max_end(nullptr)
{
	if (value.m_last != nullptr) {
		m_last = m_first + value.size() - 1;
		max_end = m_first + value.max_size() - 1;
		copy(m_first, value.m_first, value.m_last);
	}
}

template<typename Type_name>
inline Myvector<Type_name>::~Myvector()
{
	delete[] m_first;
}

template<typename Type_name>
inline const Myvector<Type_name>& Myvector<Type_name>::operator=(const Myvector &value)
{	
	if (this != &value) {
		delete[]m_first;
		m_first = new Type_name[value.max_size()];

		if (value.m_last == nullptr)
			m_last = nullptr,max_end = nullptr;
		else {
			m_last = m_first + value.size() - 1;
			max_end = m_first + value.max_size() - 1;
		}
		copy(m_first, value.m_first, value.m_last);
	}
	return *this;
}




template<typename Type_name>
inline size_type Myvector<Type_name>::size() const
{
	if (m_last == nullptr)return 0;
	else return size_type(m_last-m_first+1);
}

template<typename Type_name>
inline Type_name * Myvector<Type_name>::begin() const
{
	return m_first;
}

template<typename Type_name>
inline Type_name * Myvector<Type_name>::end() const
{
	return m_last;
}

template<typename Type_name>
inline void Myvector<Type_name>::resize(size_type a)
{
	if (a > max_size())
		Reserve(a - max_size());
	else Reallocate(a);
}

template<typename Type_name>
inline bool Myvector<Type_name>::empty() const
{
	if (m_last!=nullptr)return true;
	else return false;
}

template<typename Type_name>
inline Type_name & Myvector<Type_name>::operator[](size_type a)
{
	return *(m_first + a);
}

template<typename Type_name>
inline const Type_name & Myvector<Type_name>::operator[](size_type a) const
{
	return *(m_first + a);
}

template<typename Type_name>
inline Type_name & Myvector<Type_name>::at(size_type a)
{
	if (size() < a + 1)throw a;
	return *(m_first + a);
}

template<typename Type_name>
inline const Type_name & Myvector<Type_name>::at(size_type a) const
{
	if (size() < a+1)throw a;
	return *(m_first + a);
}

template<typename Type_name>
inline Type_name & Myvector<Type_name>::front()
{
	if (m_last = nullptr)throw 0;
	else return *m_first;
}

template<typename Type_name>
inline Type_name & Myvector<Type_name>::back()
{
	if (m_last = nullptr)return nullptr;
	else return *m_last;
}

template<typename Type_name>
inline void Myvector<Type_name>::push_back(const Type_name & value)
{
	if (m_last == max_end)
		Reserve(1);
	save(m_last + 1, m_last + 1, value);
	m_last++;
}

template<typename Type_name>
inline void Myvector<Type_name>::pop_back(const Type_name & value)
{
	if (empty())throw "error"
	else erase(m_last--);
}

template<typename Type_name>
inline Type_name * Myvector<Type_name>::insert(Type_name *value_ptr, const Type_name &value)
{
	if (m_last == max_end)Reserve(1);
	m_last++;
	for (auto i(m_last); i > value_ptr; i--)*i = *(i - 1);
	*value_ptr = value;
	return value_ptr;
}

template<typename Type_name>
inline Type_name * Myvector<Type_name>::erase(Type_name *value_ptr)
{
	copy(value_ptr, value_ptr + 1, m_last);
	if (m_last == m_first)m_last = nullptr;
	else m_last--;
	return value_ptr+1;
}

template<typename Type_name>
inline void Myvector<Type_name>::clear()
{
	delete[] m_first;
	m_first = new Type_name[0];
	m_last = nullptr;
	max_end = nullptr;
}

template<typename Type_name>
inline void Myvector<Type_name>::sort()
{
	for (auto p(m_first); p < m_last; p++) {
		Type_name *t(p);
		auto q(p);
		for (; q <= m_last; q++) {
			if (*t > *q)t = q;
		}
		Type_name x;
		x = *t;	
		*t = *p;		
		*p = x;
	}
}

template<typename Type_name>
inline Type_name * Myvector<Type_name>::binarySearch(const Type_name & vaule) const
{
	return binarySearch(vaule, m_first, m_last);
}

template<typename Type_name>
inline Type_name * Myvector<Type_name>::binarySearch(const Type_name &vaule, Type_name * first, Type_name * last) const
{
	auto x = first + (last - first) / 2;
	if ((last - first) == 1) x++;
	if (*x == vaule)return x;
	else if (first == last)return nullptr;
	else if(*x>vaule)return  binarySearch(vaule, first, x);
	else return binarySearch(vaule, x, last);
}

template<typename Type_name>
inline void Myvector<Type_name>::show()
{
	for (auto i(m_first); i <= m_last; i++)cout << *i << ' ';
	cout << endl;
}





