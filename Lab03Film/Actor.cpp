#include "FilmActor.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;


Actor::Actor(string nume, string prenume, string personaj) : 
	nume(nume), prenume(prenume), personaj(personaj) {
	nrInstante++;
}

Actor::Actor(const Actor& a) : nume(a.nume), prenume(a.prenume), personaj(a.personaj) {
	nrInstante++;
}

Actor::~Actor() {
	this->nume = "Nedefinit";
	this->prenume = "Nedefinit";
	this->personaj = "Nedefinit";
	nrInstante--;
}

void Actor::printActor() {
	cout << "Nume, prenume, personaj: ";
	cout << this->nume << ", " << this->prenume << ", " << this->personaj << endl;

}