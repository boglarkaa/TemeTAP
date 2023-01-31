#pragma once
#ifndef _PERSOANA_H
#define _PERSOANA_H
#include<iostream>
#include<string>
using namespace std;
class Persoana {
protected:
	int cnp;
	string nume;
public:
	Persoana(int cnp = 0, string nume = "");
	Persoana(const Persoana&);
	~Persoana();
	virtual string detalii() const = 0;
};

class Student :public Persoana {
private:
	string email;
	double nota;
public:
	Student(int cnp = 0, string nume = "", string email = "", double nota = -1);
	Student(const Student&);
	~Student();
	double getNota() { return nota; };
	string detalii() const override;
};

class Profesor :public Persoana {
private:
	string email;
	string materie;
public:
	Profesor(int cnp = 0, string nume = "", string email = "", string materie = "");
	Profesor(const Profesor&);
	~Profesor();
	string getMaterie() { return materie; };
	string detalii() const override;
};

class Angajat :public Persoana {
private:
	string email;
	string departament;
public:
	Angajat(int cnp = 0, string nume = "", string email = "", string departament = "");
	Angajat(const Angajat&);
	~Angajat();
	string getDepartament() { return departament; };
	string detalii() const override;
};
#endif