#ifndef SingleLink_H
#define SingleLink_H

template<typename Type_name>
class Node {
public:
	Type_name m_info;
	Node<Type_name> *m_link;
	Node() :m_link(nullptr) {};
	Node(const Type_name &data, Node<Type_name>*next = nullptr) :m_info(data), m_link(next) {}

};

template<typename Type_name>
class SingleLink :public Node<Type_name> {
private:
	Node<Type_name>*m_first;
public:
	SingleLink() :m_first(nullptr) {}
	Node<Type_name>* begin();
	Node<Type_name>* next();

	void push(const Type_name &data);//进栈
	Type_name pop();//出栈
	const Type_name &GetTop()const;//出顶端元素
	void MakeEmpty();//清空
	bool isEmpty()const;
};

template<typename Type_name>
inline bool SingleLink<Type_name>::isEmpty()const {
	return m_first == nullptr;
}

template<typename Type_name>
SingleLink<Type_name>::~SingleLink() {
	MakeEmpty();
}

template<typename Type_name>
void SingleLink<Type_name>::MakeEmpty() {
	Node<Type_name>*t;
	while (m_first != nullptr) {
		t = m_first;
		m_first = m_first->m_link;
		delete t;
	}
}

template<typename Type_name>
void SingleLink<Type_name>::push(const Type_name &data) {
	m_first = new Node<Type_name>(data, m_first);
}

template<typename Type_name>
inline Node<Type_name>* SingleLink<Type_name>::begin()
{
	return m_first;
}

template<typename Type_name>
inline Node<Type_name>* SingleLink<Type_name>::next()
{
	return m_first->m_link;
}

template<typename Type_name>
Type_name SingleLink<Type_name>::pop() {
	if (isEmpty())throw 0;
	Node<Type_name>*t = m_first;
	Type_name data = t->m_info;
	m_first = m_first->m_link;
	delete t;
	return data;
}

template<typename Type_name>
const Type_name &SingleLink<Type_name>::GetTop()const {
	if (isEmpty())throw 0;
	return m_first->m_info;
}


#endif