#pragma once
#ifndef _COMPLEX_H_
#define _COMPLEX_h_
#include <iostream>
using namespace std;
class Complex {
private:
	int real;
	int imaginar;
public:
	Complex(int real = -1, int imaginar = -1);
	Complex(const Complex&);
	~Complex();
	void setReal(int real) { this->real = real; };
	void setImaginar(int imaginar) { this->imaginar = imaginar; };
	int getReal() { return this->real; };
	int getImaginar() { return this->imaginar; };
	Complex adunare(Complex a, Complex b);
	Complex scadere(Complex a, Complex b);
	Complex inmultire(Complex a, Complex b);
	Complex impartire(Complex a, Complex b);
	friend double modul(Complex&);
	friend Complex conjugat(Complex&);
	void print();

	Complex& operator=(const Complex& o);
	Complex operator+(const Complex& c1) const;
	Complex operator-(const Complex& c1) const;
	Complex operator*(const Complex& c1) const;
	Complex operator/(const Complex& c1) const;
	bool operator!=(const Complex& c) const;
	bool operator==(const Complex& c) const;

	Complex& operator+=(const Complex& f);
	Complex& operator-=(const Complex& f);
	Complex& operator*=(const Complex& f);
	Complex& operator/=(const Complex& f);

	/*
	Complex& operator++();
	Complex operator++(int dummy);
	Complex& operator--();
	Complex operator--(int dummy);
	*/

	ostream& operator<<(ostream& o) const;
	istream& operator>>(istream& i);
};


#endif