#include"Matrice.h"
#include<iostream>
using namespace std;

int main() {
	//Matrice m,m1, m2;
	Matrice m(3, 3);

	Matrice m1(3, 3);
	Matrice m2(3, 3);
	cout << "Prima matrice\n";
	m1.operator<<(cout);

	cout << "A doua matrice\n";
	m2.operator<<(cout);

	m = m1 + m2;
	cout << "Suma\n";
	m.operator<<(cout);

	m = m1 - m2;
	cout << "Diferenta\n";
	m.operator<<(cout);

	m = m1 * m2;
	cout << "Produs\n";
	m.operator<<(cout);

	cout << "Postincrementare\n";
	m1++;
	m1.operator<<(cout);
	if (m1 != m2)
		cout << "Matricile sunt diferite\n";
}