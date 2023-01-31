#include "Banca.h"
#include<iostream>
#include<string>
using namespace std;

Banca::Banca(string codBanca, unsigned nrClienti, Client** clienti) {
	this->codBanca = codBanca;
	this->nrClienti = nrClienti;
	this->clienti = clienti;
}

Banca::Banca(const Banca& b) {
	this->codBanca = b.codBanca;
	this->nrClienti = b.nrClienti;
	this->clienti = b.clienti;
	for (int i = 0; i < this->nrClienti; i++) {
		this->clienti[i] = b.clienti[i];
	}
}

Banca::Banca() {

}

Banca::~Banca() {
	this->codBanca = "Nedefinit";
	this->nrClienti = -1;
	delete[] clienti;
}

void Banca::setCodBanca(string codBanca) {
	this->codBanca = codBanca;
}

void Banca::setNrClienti(unsigned nrClienti) {
	this->nrClienti = nrClienti;
}

string Banca::getCodBanca() {
	return this->codBanca;
}

unsigned Banca::getNrClienti() {
	return this->nrClienti;
}

void Banca::afisareDateBanca() {
	cout << "Banca: " << this->codBanca << " " << this->nrClienti << endl;
	for (int i = 0; i < nrClienti; i++) {
		clienti[i]->afisareDateClient();
	}
}
