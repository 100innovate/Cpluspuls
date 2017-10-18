#ifndef SINGLELINK_H
#define SINGLELINK_H

template<typename Type_name>
class Node {
public:
    Type_name m_info;
    Node<Type_name> *m_link;
    Node(): m_link(nullptr) {}
    Node(const Type_name &data)
        :m_info(data),m_link(nullptr){}

};

template<typename Type_name>
class SingleLink :public Node<Type_name> {
private:
    Node<Type_name>*m_first;
    Node<Type_name>*m_end;
public:
    SingleLink() :m_first(nullptr),m_end(nullptr) {}
    ~SingleLink();
    Node<Type_name>* begin();//返回头指针
    void push(const Type_name &data);

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
    if(m_first==nullptr){
        m_first = new Node<Type_name>(data);
        m_end=m_first;
    }else{
        m_end->m_link=new Node<Type_name>(data);
        m_end=m_end->m_link;
    }
}

template<typename Type_name>
inline Node<Type_name>* SingleLink<Type_name>::begin()
{
    return m_first;
}

#endif // SINGLELINK_H
