#ifndef STACK_H
#define STACK_H

#include<iostream>
#include<string>

using namespace std;

template<typename Type_name>
class Node {
public:
    Type_name m_info;
    Node<Type_name> *m_link;
    Node():m_link(nullptr){};
    Node(const Type_name &data, Node<Type_name>*next = nullptr) :m_info(data),m_link(next){}
};

template<typename Type_name>
class LinkStack :public Node<Type_name> {
private:
    Node<Type_name>*m_top;
public:
    LinkStack() :m_top(nullptr) {};
    ~LinkStack();
    void push(const Type_name &data);//进栈
    Type_name pop();//出栈
    const Type_name &GetTop()const;//出顶端元素
    void MakeEmpty();//清空
    bool isEmpty()const;
};

template<typename Type_name>
inline bool LinkStack<Type_name>::isEmpty()const {
    return m_top == nullptr;
}

template<typename Type_name>
LinkStack<Type_name>::~LinkStack() {
    MakeEmpty();
}

template<typename Type_name>
void LinkStack<Type_name>::MakeEmpty() {
    Node<Type_name>*t;
    while (m_top != nullptr) {
        t = m_top;
        m_top = m_top->m_link;
        delete t;
    }
}

template<typename Type_name>
void LinkStack<Type_name>::push(const Type_name &data) {
    m_top = new Node<Type_name>(data, m_top);
}

template<typename Type_name>
Type_name LinkStack<Type_name>::pop() {
    if (isEmpty())throw 0;
    Node<Type_name>*t = m_top;
    Type_name data = t->m_info;
    m_top = m_top->m_link;
    delete t;
    return data;
}

template<typename Type_name>
const Type_name &LinkStack<Type_name>::GetTop()const {
    if (isEmpty())throw 0;
    return m_top->m_info;
}


#endif
