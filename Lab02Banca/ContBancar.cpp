#include "Banca.h"
#include<iostream>
#include<string>
using namespace std;

ContBancar::ContBancar(string numarCont, float suma, string moneda) {
	this->numarCont = numarCont;
	this->suma = suma;
	this->moneda = moneda;
}

ContBancar::ContBancar(const ContBancar& c) {
	this->numarCont = c.numarCont;
	this->suma = c.suma;
	this->moneda = c.moneda;
}

ContBancar::ContBancar() {

}

ContBancar::~ContBancar() {
	this->numarCont = "Nedefinit";
	this->suma = -1;
	this->moneda = "Nedefinit";
}

void ContBancar::setNumarCont(string numarCont) {
	this->numarCont = numarCont;
}

void ContBancar::setSuma(float suma) {
	this->suma = suma;
}

void ContBancar::setMoneda(string moneda) {
	this->moneda = moneda;
}

string ContBancar::getNumarCont() {
	return this->numarCont;
}

float ContBancar::getSuma() {
	return this->suma;
}

string ContBancar::getMoneda() {
	return this->moneda;
}

void ContBancar::transfer(ContBancar& contDest, float suma) {
	this->suma -= suma;
	contDest.suma += suma;
}

float ContBancar::getSumaTotala() {
	return this->suma + getDobanda();
}

float ContBancar::getDobanda() {
	if (moneda == "RON")
		if (this->suma < 500)
			return this->suma * 0.3;
		else
			return this->suma * 0.8;
	else if (moneda == "EUR")
		return this->suma * 0.1;
	cout << "Moneda invalida";
}

void ContBancar::extragere(float suma) {
	if (suma > this->suma)
		cout << "Nu aveti destui bani" << endl;
	else
		this->suma -= suma;
}

void ContBancar::depunere(float suma) {
	this->suma += suma;
}

void ContBancar::afisareDateCont() {
	cout << "Cont: " << this->numarCont << " " << this->suma << " " << this->moneda << endl;
}