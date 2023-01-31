#pragma once
#ifndef _MATRICE_H
#define _MATRICE_H
#include<iostream>
using namespace std;
class Matrice {
public:
	int nrLinii;
	int nrColoane;
	int **elemente;
public:
	Matrice(int nrLinii = 0, int nrColoane = 0);
	Matrice(const Matrice&);
	~Matrice();
	int getNrLinii() { return nrLinii; }
	int getNrColoane() { return nrColoane; };
	Matrice& operator=(const Matrice&);
	Matrice operator+(const Matrice&) const;
	Matrice operator-(const Matrice&) const;
	Matrice operator*(const Matrice&) const;
	//Matrice operator/(const Matrice&);
	Matrice& operator+=(const Matrice&);
	Matrice& operator-=(const Matrice&);
	Matrice& operator*=(const Matrice&);
	bool operator!=(const Matrice&) const;
	bool operator==(const Matrice&) const;
	Matrice& operator++();
	Matrice& operator++(int dummy);
	Matrice& operator--();
	Matrice& operator--(int dummy);
	ostream& operator<<(ostream&) const;
	istream& operator>>(istream&);
	int* operator[](int index) const;

};

#endif // !_MATRICE_H
