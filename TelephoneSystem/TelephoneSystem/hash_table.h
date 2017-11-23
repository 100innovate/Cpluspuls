#pragma once

#ifndef HASH_TABLE
#define HASH_TABLE

#include<string>
#include<cmath>

template<typename K,
	typename Val>
	struct ChainNode
{
	K key;
	Val data;
	ChainNode<K, Val>*link;
};

struct telephoneData
{
	std::string name;
	std::string adress;
	std::string telephoneNumber;
};

template<typename K,
	typename Val>
	class hash_table 
{
public:
	hash_table(int d, int size = 100);
	~hash_table();

	Val& Search(const K&key);
	bool Insert(const K&key, const Val&value);
	void InsertIn(const K&key, const Val&value);
	bool remove(const K&key);
	
	void makeEmpty();
private:
	int divitor;
	int TableSize;
	ChainNode<K, Val>**ht;
	Val& FindPos(const K key);
	int hash(const K & key);
};

#endif // !HASH_kABLE

template<typename K, typename Val>
inline hash_table<K, Val>::hash_table(int d, int size)
{
	divitor = d;
	TableSize = size;
	ht = new ChainNode<K, Val>*[size];
}

template<typename K, typename Val>
inline hash_table<K, Val>::~hash_table()
{
	makeEmpty();
	delete[]ht;
}

template<typename K, typename Val>
inline Val & hash_table<K, Val>::Search(const K & key)
{
	return FindPos(key);
}

template<typename K, typename Val>
inline bool hash_table<K, Val>::Insert(const K & key, const Val & value)
{
	int j = hash(key) % divitor;
	ChainNode<K, Val> *p = ht[j];
	if (p != nullptr) {
		ht[j] = new ChainNode<K, Val>();
		ht[j]->data = value;
		ht[j]->key = key;
		return true;
	}
	if (p->key == key)return 0;

	while (p->link!=nullptr)
	{
		if (p->key == key)return 0;
		p = p->link;
	}
	p->link = new ChainNode<K, Val>;
	p->link->data = value;
	p->link->key = key;
	return true;
}

template<typename K, typename Val>
inline void hash_table<K, Val>::InsertIn(const K & key, const Val & value)
{
	int j = hash(key) % divitor;
	ChainNode<K, Val> *p = ht[j];
	if (p != nullptr) {
		ht[j] = new ChainNode<K, Val>();
		ht[j]->data = value;
		ht[j]->key = key;
	}

	while (p->link != nullptr)
	{
		p = p->link;
	}
	p->link = new ChainNode<K, Val>;
	p->link->data = value;
	p->link->key = key;
}

template<typename K, typename Val>
inline bool hash_table<K, Val>::remove(const K & key)
{
	int j = hash(key) % divitor;
	ChainNode<K, Val> *p = ht[j];
	ChainNode<K, Val> *q;
	while (p != nullptr&&p->data != key)
	{
		q = p;
		p = p->link;
	}
	if (p == nullptr)return false;
	else {
		q->link = p->link;
		delete p;
		return true;
	}
}

template<typename K, typename Val>
inline void hash_table<K, Val>::makeEmpty()
{

}

template<typename K, typename Val>
inline Val& hash_table<K, Val>::FindPos(const K key)
{
	int j = hash(key) % divitor;
	ChainNode<K, Val> *p = ht[j];
	while (p!=nullptr&&p->key!=key)
	{
		p = p->link;
	}
	return p->data;
}

template<typename K, typename Val>
inline int hash_table<K, Val>::hash(const K & key)//×Ö·û´®hash¾­µäËã·¨
{
	int seed = 131;

	int hash_key = 0;

	for (int i(0); i < key.size(); i++) {
		hash_key += hash_key*seed + (int)key[i];
	}
	return abs(hash_key);
}
