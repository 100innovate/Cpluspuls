#ifndef DOUBLELINK_H
#define DOUBLELINK_H

template<typename Type_name>
struct Node {
	Type_name m_info;
	Node<Type_name> *m_Llink;
	Node<Type_name> *m_Rlink;
	Node() :m_Llink(nullptr) {};
	Node(const Type_name &data, Node<Type_name>*next = nullptr) :m_info(data), m_Llink(next), m_Rlink(nullptr){}
};

template<typename Type_name>
class DoubleLink :public Node<Type_name> {
private:
	Node<Type_name>*m_top;
	Node<Type_name>*m_end;
public:
	DoubleLink() :m_top(nullptr) {};
	~DoubleLink();
	void push(const Type_name &data);//左添加
	Node<Type_name>* GetTop();//出顶端指针
	Node<Type_name>* GetBottom();//出底端指针

	void MakeEmpty();//清空
	bool isEmpty()const;
};

template<typename Type_name>
inline bool DoubleLink<Type_name>::isEmpty()const {
	return m_top == nullptr;
}

template<typename Type_name>
DoubleLink<Type_name>::~DoubleLink() {
	MakeEmpty();
}

template<typename Type_name>
void DoubleLink<Type_name>::MakeEmpty() {
	Node<Type_name>*t;
	while (m_top != nullptr) {
		t = m_top;
		m_top = m_top->m_Llink;
		delete t;
	}
}

template<typename Type_name>
void DoubleLink<Type_name>::push(const Type_name &data) {
	if (m_top == nullptr) {
		m_top = new Node<Type_name>(data, m_top);
		m_end = m_top;
	}
	else {
		m_top->m_Rlink = new Node<Type_name>(data, m_top);
		m_top = m_top->m_Rlink;
	}
	
}

template<typename Type_name>
inline Node<Type_name>* DoubleLink<Type_name>::GetTop()
{
	if (isEmpty())throw 0;
	return m_top;
}

template<typename Type_name>
inline Node<Type_name>* DoubleLink<Type_name>::GetBottom()
{
	return m_end;
}



#endif
