#include "Persoana.h"
#include<iostream>
#include<string>
using namespace std;

Profesor::Profesor(int cnp, string nume, string email, string materie )
:Persoana(cnp, nume), email(email), materie(materie)  {}

Profesor::Profesor(const Profesor& p)
	:Persoana(p), email(p.email), materie(p.materie) {}

Profesor::~Profesor() {
	Persoana::~Persoana();
	email = "";
	materie = "";
}

string Profesor::detalii() const {
	return "Profesorul " + nume + " preda " + materie + "\n";
}