#include "Complex.h"
#include<iostream>
using namespace std;

int main() {

	Complex operatii;
	Complex c1(3, 4);
	Complex c2(8, -2);
	Complex rezultat = operatii.adunare(c1, c2);
	c1.print(); cout << " + ";  c2.print(); cout << " = ";
	rezultat.print();
	cout << endl;

	rezultat = operatii.scadere(c1, c2);
	c1.print(); cout << " - ";  c2.print(); cout << " = ";
	rezultat.print();
	cout << endl;

	rezultat = operatii.inmultire(c1, c2);
	c1.print(); cout << " * ";  c2.print(); cout << " = ";
	rezultat.print();
	cout << endl;

	rezultat = operatii.impartire(c1, c2);
	c1.print(); cout << " / ";  c2.print(); cout << " = ";
	rezultat.print();
	cout << endl;

	cout << "Modul din ";
	c1.print();
	cout << " = " << modul(c1) << endl;

	cout << "Conjugat din ";
	c2.print();
	conjugat(c2);
	cout << " = ";
	c2.print();
	return 0;
}