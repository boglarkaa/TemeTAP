#include <iostream>
#include"Fractie.h"
using namespace std;
int main() {
	Fractie f;
	cout << f.getNumitor() << endl;
	Fractie f2(2);
	cout << f2.getNumarator() << endl;
	Fractie a(1, 3);
	Fractie b(1, 4);
	Fractie op;
	cout << " Cel mai mic multiplu comun: " << op.cmmmc(a, b) << endl;
	cout << " Suma este: " << op.adunare(a, b) << endl;
	cout << " Diferenta este: " << op.scadere(a, b) << endl;
	cout << " Produsul este: " << op.inmultire(a, b) << endl;
	cout << " Catul este: " << op.impartire(a, b) << endl;
	cout << " Cel mai mare divizor comun: " << Fractie::cmmdc(13, 26) << endl;
	Fractie f3(16, 10);
	cout << " " << f3.getNumarator() << " / " << f3.getNumitor() << " simplificat este: ";
	f3.simplifica();
	f3.print();
	cout << " Reciprocul lui " << f3.getNumarator() << " / " << f3.getNumitor() << " este: ";
	f3.reciproc();
	f3.print();
	Fractie f4 = a;
	cout << f4.egal(a);

	return 0;
}