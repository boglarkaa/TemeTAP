#pragma once
#ifndef _LSI_H
#define _LSI_H

#include<iostream>
using namespace std;

template<class T>
class Node {
private:
	T info;
	Node* succesor;
	template<class T>
	friend class LSI;
public:
	Node(T);
	~Node();
};

template<class T>
class LSI {
private:
	Node<T>* list;
public:
	LSI();
	LSI(const LSI&);
	~LSI();
	void printList();
	void insertFirst(T);
	void insertEnd(T);
	void deleteFirst();
	void deleteEnd();
	LSI<T>& operator=(const LSI<T>&);
	bool operator==(const LSI<T>&);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);

};

#endif 

