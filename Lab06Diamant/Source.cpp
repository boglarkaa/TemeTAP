#include "Masina.h"
#include<iostream>
using namespace std;

int main() {

	Masina m;
	cout << m.getAlimentare()<<endl;
	CuBenzina b;
	cout << b.getAlimentare()<<endl;
	Electric e;
	cout << e.getAlimentare()<<endl;
	Hybrid h;
	cout << h.getAlimentare()<<endl;

}