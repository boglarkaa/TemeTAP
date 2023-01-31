#pragma once
#ifndef _ANGAJAT_H
#define _ANGAJAT_H
#include<iostream>
using namespace std;
class Angajat {
private:
	double tarifOrar;
	int nrOre;
public:
	Angajat(double tarifOrar = 5.5, int nrOre = 0);
	Angajat(const Angajat&);
	~Angajat();
	double getSalar() { return tarifOrar * nrOre; };
	double getTarifOrar(){ return tarifOrar; };
	Angajat& operator=(const Angajat&);
	ostream& operator<<(ostream&) const;
	istream& operator>>(istream&);

};

class Manager :public Angajat {
private:
	int nrSubordonati;
public:
	Manager(double tarifOre=5.5, int nrOre=0, int nrSubordonati=0);
	Manager(const Manager&);
	~Manager();
	Manager& operator=(const Manager&);
	ostream& operator<<(ostream&) const;
	istream& operator>>(istream&);
	double getSalar() {
		return Angajat::getSalar() + Angajat::getSalar() * 50 / 100;
	}
};
#endif // !
