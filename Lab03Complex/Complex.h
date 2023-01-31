#pragma once
#ifndef _COMPLEX_H_
#define _COMPLEX_h_

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
};


#endif