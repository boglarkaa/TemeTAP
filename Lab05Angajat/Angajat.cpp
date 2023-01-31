#include "Angajat.h"

Angajat::Angajat(double tarifOrar, int nrOre)
	:tarifOrar(tarifOrar), nrOre(nrOre){}

Angajat::Angajat(const Angajat& a)
	:tarifOrar(a.tarifOrar), nrOre(a.nrOre){}

Angajat::~Angajat() {
	tarifOrar = -1;
	nrOre = -1;
}

ostream& Angajat::operator<<(ostream& o) const {
	o <<"Tarif orar: " << tarifOrar << ", nr ore: " << nrOre << endl;
	return o;
}

istream& Angajat::operator>>(istream& i) {
	cout << "Dati tarif orar\n";
	i >> tarifOrar;
	cout << "Dati nr ore\n";
	i >> nrOre;
	return i;
}

Angajat& Angajat::operator=(const Angajat& a) {
	this->tarifOrar = a.tarifOrar;
	this->nrOre = a.nrOre;
	return *this;
}
