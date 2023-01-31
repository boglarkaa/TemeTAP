#include "Persoana.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student(int cnp, string nume, string email, double nota)
	:Persoana(cnp, nume), email(email), nota(nota){}

Student::Student(const Student& s)
	:Persoana(s), email(s.email), nota(s.nota) {}

Student::~Student() {
	cnp = -1;
	nume = "";
	email = "";
	nota = -1;
}

string Student::detalii() const{
	return "Studentul " + nume + " are nota " + to_string(nota) + "\n";
}