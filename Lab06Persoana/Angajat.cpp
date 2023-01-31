#include "Persoana.h"
#include<iostream>
#include<string>
using namespace std;

Angajat::Angajat(int cnp, string nume, string email, string departament)
	:Persoana(cnp,nume), email(email), departament(departament){}

Angajat::Angajat(const Angajat& a)
	:Persoana(a), email(a.email), departament(a.departament){}

Angajat::~Angajat() {
	Persoana::~Persoana();
	email = "";
	departament = "";
}

string Angajat::detalii() const{
	return "Angajatul " + nume + " face parte din departamentul " + departament + "\n";
}