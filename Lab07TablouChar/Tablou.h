#pragma once
#ifndef _Tablou_h
#define _Tablou_h
#include<iostream>
using namespace std;

template<class T>
class Tablou {
private:
	T* tablou;
	unsigned int size;
public:
	Tablou(unsigned int size = -1);
	Tablou(const Tablou<T>&);
	~Tablou();
	Tablou<T>& operator=(const Tablou<T>&);
	T operator[](unsigned int);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};


template <class T>
Tablou<T>::Tablou(unsigned int s) : size(s) {
	tablou = new T[s];
}

template <class T>
Tablou<T>::Tablou(const Tablou<T>& t) {
	this->tablou = t.tablou;
	this->size = t.size;
}

template <class T>
Tablou<T>::~Tablou() {
	delete[] this->tablou;
	this->size = -1;
}

template <class T>
Tablou<T>& Tablou<T>::operator=(const Tablou<T>& t) {
	this->tablou = t.tablou;
	this->size = t.size;
	return *this;
}

template <class T>
T Tablou<T>::operator[](unsigned int pos) {
	return this->tablou[pos];
}

template <class T>
ostream& Tablou<T>::operator<<(ostream& os) {
	for (int i = 0; i < this->size; ++i) {
		os << tablou[i] << " ";
	}
	os << endl;
	return os;
}

template <class T>
istream& Tablou<T>::operator>>(istream& is) {
	for (int i = 0; i < this->size; ++i) {
		cout << "tablou[ " << i << " ] = ";
		is >> tablou[i];
	}
	return is;
}

#endif // !_Tablou_h
