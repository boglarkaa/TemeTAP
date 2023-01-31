#include "Banca.h"
#include<iostream>
#include<string>
using namespace std;

Client::Client(string nume, string prenume, string adr, unsigned nrCont, ContBancar** conturi) {
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adr;
	this->nrConturi = nrCont;
	this->conturi = conturi;
}

Client::Client(const Client& c) {
	this->nume = c.nume;
	this->prenume = c.prenume;
	this->adresa = c.adresa;
	this->nrConturi = c.nrConturi;
	this->conturi = c.conturi;
	for (int i = 0; i < nrConturi; i++) {
		this->conturi[i] = c.conturi[i];
	}
}

Client::Client() {

}

Client::~Client() {
	this->nume = "Nedefinit";
	this->prenume = "Nedefinit";
	this->adresa = "Nedefinit";
	this->nrConturi = -1;
	delete[] conturi;
}

void Client::setNume(string nume) {
	this->nume = nume;
}

void Client::setPrenume(string prenume) {
	this->prenume = prenume;
}

void Client::setAdresa(string adresa) {
	this->adresa = adresa;
}

void Client::setNrConturi(unsigned nrConturi) {
	this->nrConturi = nrConturi;
}

void Client::setCont(ContBancar** conturi){
	this->conturi = conturi;
}

string Client::getNume() {
	return this->nume;
}

string Client::getPrenume() {
	return this->prenume;
}

string Client::getAdresa() {
	return this->adresa; ;
}

unsigned Client::getNrConturi() {
	return this->nrConturi;
}

void Client::afisareDateClient() {
	cout << "Client: " << this->nume << " " << this->prenume << " " << this->adresa << " " << this->nrConturi<<" conturi" << endl;
	for (int i = 0; i < nrConturi; i++) {
		conturi[i]->afisareDateCont();
	}
}