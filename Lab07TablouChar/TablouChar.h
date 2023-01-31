#pragma once
#ifndef _TablouChar_h
#define _TablouChar_h
#include "Tablou.h"
#include <iostream>
using namespace std;

template<>
class Tablou<char> {
private:
	char* tablou;
	unsigned int size;
public:
	Tablou(unsigned int size = -1) : size(size) {
		tablou = new char[size];
	}
	Tablou(const Tablou<char>& t)
	{
		this->tablou = t.tablou;
		this->size = t.size;
	}
	~Tablou() {
		delete[] this->tablou;
		this->size = -1;
	}
	Tablou<char>& operator=(const Tablou<char>& t){
		this->tablou = t.tablou;
		this->size = t.size;
		return *this;
	}
	char operator[](unsigned int pos) {
		return this->tablou[pos];
	}
	ostream& operator<<(ostream& os) {
		for (int i = 0; i < this->size; ++i) {
			os << tablou[i] << " ";
		}
		os << endl;
		return os;
	}

	istream& operator>>(istream& is) {
		for (int i = 0; i < this->size; ++i) {
			cout << "tablou[ " << i << " ] = ";
			is >> tablou[i];
		}
		return is;
	}
};


#endif // !_Tablou_h