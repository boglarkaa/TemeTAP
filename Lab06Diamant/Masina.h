#pragma once
#ifndef _MASINA_H
#define _MASINA_H

#include <string>
#include <iostream>
using namespace std;

class Masina {
protected:
	string alimentare;
public:
	Masina(string alimentare="motorina") : alimentare(alimentare) {};
	~Masina() { alimentare = ""; };
	string getAlimentare() {return alimentare;};
	void setAlimentare(string alimentare) { this->alimentare = alimentare; };
};

class CuBenzina: virtual public Masina {
public:
	CuBenzina(string alimentare = "benzina") : Masina(alimentare) {}
	~CuBenzina() { Masina::~Masina(); };
	string getAlimentare()  { return alimentare; };
};

class Electric :virtual public Masina {
public:
	Electric(string alimentare = "electricitate") : Masina(alimentare) {}
	~Electric() { Masina::~Masina(); };
	string getAlimentare()  { return alimentare; };
};

class Hybrid :public CuBenzina {
public:
	Hybrid(string alimentare = "hybrid") :CuBenzina("alimentare"), Masina(alimentare) {}
	~Hybrid() { CuBenzina::~CuBenzina();  };
	string getAlimentare() { return alimentare; };
};
#endif // !_MASINA_H
