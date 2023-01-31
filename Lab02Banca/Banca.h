#pragma once
#ifndef _BANCA_H
#define _BANCA_H
using namespace std;
#include <iostream>
#include<string>

class Operatiuni {
public:
	float virtual getSumaTotala() = 0;
	float virtual getDobanda() = 0;
	void virtual depunere(float suma) = 0;
	void virtual extragere(float suma) = 0;
};

class ContBancar : public Operatiuni {
private:
	string numarCont;
	float suma;
	string moneda;

public:
	ContBancar(string numarCont, float suma, string moneda);
	ContBancar(const ContBancar& c);
	ContBancar();
	~ContBancar();
	void setNumarCont(string numarCont);
	void setSuma(float suma);
	void setMoneda(string moneda);
	string getNumarCont();
	float getSuma();
	string getMoneda();
	void transfer(ContBancar& contDest, float suma);
	float getSumaTotala();
	float getDobanda();
	void depunere(float suma);
	void extragere(float suma);
	void afisareDateCont();
};

class Client {
private:
	string nume;
	string prenume;
	string adresa;
	unsigned nrConturi;
	ContBancar** conturi;

public:
	Client(string nume, string prenume, string adr, unsigned nrCont, ContBancar** conturi);
	Client(const Client& c);
	Client();
	~Client();
	void setNume(string nume);
	void setPrenume(string prenume);
	void setAdresa(string adresa);
	void setNrConturi(unsigned nrConturi);
	void setCont(ContBancar** cont);
	string getNume();
	string getPrenume();
	string getAdresa();
	unsigned getNrConturi();
	void afisareDateClient();
};
class Banca {
private:
	string codBanca;
	unsigned nrClienti;
	Client** clienti;

public:
	Banca(string codBanca, unsigned nrClienti, Client** clienti);
	Banca(const Banca& b);
	Banca();
	~Banca();
	void setCodBanca(string codBanca);
	void setNrClienti(unsigned nrClienti);
	string getCodBanca();
	unsigned getNrClienti();
	void afisareDateBanca();
};

#endif // !_BANCA_H

