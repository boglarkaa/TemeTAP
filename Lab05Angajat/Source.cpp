#include"Angajat.h"
#include <iostream>
using namespace std;
int main() {

	Angajat a;
	a.operator>>(cin);
	a.operator<<(cout);
	cout <<"Salariu angajat: " << a.getSalar() << endl;
	cout <<"Tarif orar angajat" << a.getTarifOrar() << endl;
	Manager m;
	m.operator>>(cin);
	m.operator<<(cout);
	cout << "Salariu manager: " << m.getSalar() << endl;
	return 0;
}