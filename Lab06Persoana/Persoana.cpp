#include "Persoana.h"
#include<iostream>
#include<string>
using namespace std;

Persoana::Persoana(int cnp, string nume )
	:cnp(cnp), nume(nume){}

Persoana::Persoana(const Persoana& p)
	:cnp(p.cnp), nume(p.nume){}

Persoana::~Persoana() {
	cnp = -1;
	nume = "";
}

string Persoana::detalii()const {
	return "Persoana cu numele " + nume + "cu cnp-ul " + to_string(cnp) + "\n";
}