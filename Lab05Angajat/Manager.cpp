#include"Angajat.h"
#include<iostream>
using namespace std;

Manager::Manager(double tarifOre, int nrOre, int nrSubordonati)
	:Angajat(tarifOre, nrOre), nrSubordonati(nrSubordonati){}

Manager::Manager(const Manager& m)
	:Angajat(m) {
	this->nrSubordonati = m.nrSubordonati;
}

Manager::~Manager() {
	Angajat::~Angajat();
	this->nrSubordonati = 0;
}

Manager& Manager::operator=(const Manager& m) {
	Angajat::operator=(m);
	this->nrSubordonati = nrSubordonati;
	return *this;
}

ostream& Manager::operator<<(ostream& o) const{
	Angajat::operator<<(cout);
	o << "nr subordonati : " << nrSubordonati << endl;
	return o;
}

istream& Manager::operator>>(istream& i) {
	Angajat::operator>>(cin);
	cout << "Nr subordonati\n";
	i >> nrSubordonati;
	return i;
}