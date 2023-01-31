#pragma once
#ifndef _ANIMAL_H
#define _ANIMAL_H
#include<iostream>
#include<string>
using namespace std;

class Animal {
protected:
	string specie;
	int varsta;
public:
	Animal(int varsta=-1, string specie="");
	Animal(const Animal&);
	~Animal();
	virtual bool heterotrof() = 0;
	inline string getSpecie() const { return specie; };
	inline int getVarsta() const { return varsta; };
	inline void setSpecie(string specie) { this->specie = specie; };
	inline void setVarsta(int varsta) { this->varsta = varsta; };
};

class Mamifer :public Animal {
protected:
	double lungime;
public:
	Mamifer(int varsta=-1, string specie="", double lungime = -1);
	Mamifer(const Mamifer&);
	~Mamifer();
	inline void naste() { cout <<specie<< " naste" << endl; };
	inline double getLungime() { return lungime; };
	inline void setLungime(double lungime) { this->lungime = lungime; };
	bool heterotrof()override { return false; };
};

class Pasare :public Animal {
protected:
	int nrPene;
public:
	Pasare(int varsta=-1, string specie="", int nrPene = -1);
	Pasare(const Pasare&);
	~Pasare();
	inline void zboara() { cout << specie<<" zboara"<<endl; };
	inline int getNrPene() const { return nrPene; };
	inline void setNrPene(int nrPene) { this->nrPene = nrPene; };
	bool heterotrof()override { return false; };
};

class Ornitorinc :public Mamifer, public Pasare {
public:
	Ornitorinc(int varsta=-1, string specie="");
	Ornitorinc(const Ornitorinc&);
	~Ornitorinc();
	inline void amfibiu() { cout << "Ornitorincul este amfibiu" << endl; };
};

#endif
