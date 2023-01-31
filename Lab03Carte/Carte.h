#pragma once
#ifndef _CARTE_H_
#define _CARTE_H_

#include<string>
#include<iostream>
using namespace std;

class Carte {
private:
	string autor;
	string titlu;
	unsigned isbn;
	float pret;
public:
	static int nrInstante;
	Carte(string autor, string titlu, unsigned isbn, float pret);
	Carte(const Carte&);
	~Carte();
	const string getAutor() { return autor; };
	const string getTitlu() { return titlu; };
	unsigned getIsbn() { return isbn; };
	float getPret() { return pret; };
	void setAutor(string autor) { this->autor = autor; };
	void setTitlu(string titlu) { this->titlu = titlu; };
	void setIsbn(unsigned isbn) { this->isbn = isbn; };
	void setPret(float pret) { this->pret = pret; };
	void toString();
};

#endif // !_CARTE_H_

