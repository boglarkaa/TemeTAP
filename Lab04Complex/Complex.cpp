#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

Complex::Complex(int real, int imaginar) :real(real), imaginar(imaginar) {}

Complex::Complex(const Complex& c) {
	this->real = c.real;
	this->imaginar = c.imaginar;
}

Complex::~Complex() {
	this->real = -1;
	this->imaginar = -1;
}

Complex& Complex::operator=(const Complex& c) {
	this->real = c.real;
	this->imaginar = c.imaginar;
	return *this;
}

Complex Complex::operator+(const Complex& c1) const {
	Complex rezultat;
	rezultat.real = this->real + c1.real;
	rezultat.imaginar = this->imaginar + c1.imaginar;
	return rezultat;
}
Complex Complex::operator-(const Complex& c1) const {
	Complex rezultat;
	rezultat.real = this->real - c1.real;
	rezultat.imaginar = this->imaginar - c1.imaginar;
	return rezultat;
}
Complex Complex::operator*(const Complex& c1) const {
	Complex c(this->real * c1.real - this->imaginar * c1.imaginar, this->real * c1.imaginar + this->imaginar * c1.real);
	return c;
}
Complex Complex::operator/(const Complex& c1) const {
	Complex c;
	c.real = (this->real * c1.real + this->imaginar * c1.imaginar)
		/ (this->real * this->real + c1.imaginar * c1.imaginar);
	c.imaginar = (this->imaginar * c1.real - this->real * c1.imaginar)
		/ (this->real * this->real + c1.imaginar * c1.imaginar);
	return c;
}
bool Complex::operator!=(const Complex& c) const {
	return (this->real != c.real) && (this->imaginar != c.real);
}

bool Complex::operator==(const Complex& c) const {
	return (this->real == c.real) && (this->imaginar == c.real);
}

ostream& Complex::operator<<(ostream& o) const {
	o << this->real << " + " << this->imaginar << "i" << endl;
	return o;
}

istream& Complex::operator>>(istream& i) {
	cout << "Dati valoare pentru real" << endl;
	i >> this->real;
	cout << "Dati valoare pentru imaginar" << endl;
	i >> this->imaginar;
	return i;
}

Complex& Complex::operator+=(const Complex& c) {
	this->real = this->real + c.real;
	this->imaginar = this->imaginar + c.imaginar;
	return *this;
}
Complex& Complex::operator-=(const Complex& c){
	this->real = this->real - c.real;
	this->imaginar = this->imaginar - c.imaginar;
	return *this;
}
Complex& Complex::operator*=(const Complex& c) {
	this->real = this->real * c.real - this->imaginar * c.imaginar;
	this->imaginar=this->real* c.imaginar + this->imaginar * c.real;
	return *this;
}
Complex& Complex::operator/=(const Complex& c) {
	this->real = (this->real * c.real + this->imaginar * c.imaginar)
		/ (this->real * this->real + c.imaginar * c.imaginar);
	this->imaginar = (this->imaginar * c.real - this->real * c.imaginar)
		/ (this->real * this->real + c.imaginar * c.imaginar);
	return *this;
}
/*
Complex& Complex::operator++() {

}
Complex Complex::operator++(int dummy) {

}
Complex& Complex::operator--() {

}
Complex Complex::operator--(int dummy) {

}
*/