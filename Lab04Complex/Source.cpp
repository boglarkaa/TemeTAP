#include "Complex.h"
#include<iostream>
using namespace std;

int main() {

	Complex operatii;
	Complex c1(3, 4);
	Complex c2(8, -2);
	Complex rezultat;
	rezultat = c1 + c2;
	rezultat.operator<<(cout);
	rezultat = c1 / c2;
	rezultat.operator<<(cout);
	c1 /= c2;
	c1.operator<<(cout);
	cout << endl;
	cout << (c1 != c2);
	return 0;
}