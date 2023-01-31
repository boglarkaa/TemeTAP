#pragma once
#ifndef _FILMACTOR_H_
#define _FILMACTOR_H_
#include<iostream>
#include<string>
using namespace std;
class Actor;
class Film {
private:
	string titlu;
	float buget;
	int nrActori;
	Actor** actori;
public:
	Film(string titlu= "Nedefinit", float buget= -1, int nrActori= -1, Actor** actori = NULL);
	Film(const Film&);
	~Film();
	string getTitlu() { return this->titlu; };
	float getBuget() { return this->buget; };
	int getNrActori() { return this->nrActori; };
	Actor** getActori() { return this->actori; };
	void setTitlu(string titlu) { this->titlu = titlu; };
	void setBuget(float buget) { this->buget = buget; };
	void setNrActori(int nrActori) { this->nrActori = nrActori; };
	void setActori(Actor** actori) { this->actori = actori; };
	void printFilm();
	friend void sortareBuget(Film**, int);
	friend int comparaBuget(const Film&, const Film&);
	friend void sortareNrActori(Film**, int);
	friend int comparaNrActori(const Film&, const Film&);
	friend void actoriComuni(const Film&, const Film&);
};

class Actor {
private:
	string nume;
	string prenume;
	string personaj;
public:
	static int nrInstante;
	Actor(string = "Nedefinit", string = "Nedefinit", string = "Nedefinit");
	Actor(const Actor&);
	~Actor();
	string getNume() { return this->nume; };
	string getPrenume() { return this->prenume; };
	string getPersonaj() { return this->personaj; };
	void setNume(string nume) { this->nume = nume; };
	void setPrenume(string prenume) { this->prenume = prenume; };
	void setPersonaj(string personaj) { this->personaj = personaj; };
	void printActor();
	//friend class Film;
};

#endif // !_FILMACTOR_H_
