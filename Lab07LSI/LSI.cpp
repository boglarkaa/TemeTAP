#include"LSI.h"
#include<iostream>
using namespace std;

template<class T>
LSI<T>::LSI() {
	this->list = NULL;
}

template<class T>
LSI<T>::~LSI() {
	this->list = NULL;
}

template<class T>
LSI<T>::LSI(const LSI<T>& l) {
	this->list = l.list;
}

template<class T>
void LSI<T>::insertFirst(T newInfo) {
	Node<T>* node = new Node<T>(newInfo);
	if (this->list == NULL)
		this->list = node;
	else {
		node->succesor = this->list;
		node->info = newInfo;
		this->list = node;
	}
}

template<class T>
void LSI<T>::insertEnd(T newInfo) {
	if (this->list == NULL) {
		this->list = new Node<T>(newInfo);
	}
	else {
		Node<T>* tmp = this->list;
		while (tmp->succesor != NULL) {
			tmp = tmp->succesor;
		}
		Node<T>* lastNode = tmp;
		Node<T>* newNode = new Node<T>(newInfo);
		lastNode->succesor = newNode;
	}
}

template<class T>
void LSI<T>::deleteFirst() {
	if (this->list == NULL)
		cout << "Empty list" << endl;
	else {
		Node<T>* save = this->list;
		this->list = this->list->succesor;
		delete save;
	}
}

template<class T>
void LSI<T>::deleteEnd() {
	if (this->list == NULL)
		cout << "Empty list" << endl;
	else {
		Node<T>* tmp = this->list;
		while (tmp->succesor->succesor != NULL) {
			tmp = tmp->succesor;
		}
		Node<T>* last = tmp;
		Node<T>* save = last->succesor;
		last->succesor = NULL;
		delete(save);
	}
}

template<class T>
void LSI<T>::printList() {
	Node<T>* temp = this->list;
	while (temp != NULL) {
		cout << temp->info << " ";
		temp = temp->succesor;
	}
	cout << endl;
}

template<class T>
LSI<T>& LSI<T>::operator=(const LSI<T>& l) {
	this->list = l.list;
	return *this;
}

template<class T>
bool LSI<T>::operator==(const LSI<T>& l) {
	return (this->list == l.list);
}

template<class T>
ostream& LSI<T>::operator<<(ostream& os)
{
	os << this->list;
	return os;
}

template <class T>
istream& LSI<T>::operator>>(istream& is) 
{
	is >> this->list;
	return is;
}

template<class T>
Node<T>::Node(T info) :info(info), succesor(NULL) {}

template<class T>
Node<T>::~Node() {
	this->info = -1;
	this->succesor = NULL;
}