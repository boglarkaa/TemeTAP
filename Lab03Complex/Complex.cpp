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

Complex Complex::adunare(Complex c1, Complex c2) {
	Complex c(c1.real + c2.real, c1.imaginar + c2.imaginar);
	return c;
}

Complex Complex::scadere(Complex c1, Complex c2) {
	Complex c(c1.real - c2.real, c1.imaginar - c2.imaginar);
	return c;
}

Complex Complex::inmultire(Complex c1, Complex c2) {
	Complex c(c1.real * c2.real - c1.imaginar * c2.imaginar, c1.real * c2.imaginar + c1.imaginar * c2.real);
	return c;
}

Complex Complex::impartire(Complex c1, Complex c2) {
	Complex c;
	c.real = (c1.real * c2.real + c1.imaginar * c2.imaginar)
		/ (c1.real * c1.real + c2.imaginar * c2.imaginar);
	c.imaginar = (c1.imaginar * c2.real - c1.real * c2.imaginar)
		/ (c1.real * c1.real + c2.imaginar * c2.imaginar);
	return c;
}

double modul(Complex& c) {
	return sqrt(pow(c.real, 2) + pow(c.imaginar, 2));
}

Complex conjugat(Complex& c) {
	c.imaginar *= -1;
	return c;
}

void Complex::print() {
	if (this->imaginar < 0) {
		cout << "(" << this->real << " - " << this->imaginar * -1 << "i" << ")";
		return;
	}
	cout << "(" << this->real << " + " << this->imaginar << "i" << ")";
}