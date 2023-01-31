#include "FilmActor.h"
#include<iostream>
#include<string>
using namespace std;

Film::Film(string titlu, float buget, int nrActori ,Actor** actori):
	titlu(titlu), buget(buget), nrActori(nrActori), actori(actori){}

Film::Film(const Film& f): titlu(f.titlu), buget(f.buget), nrActori(f.nrActori), actori(f.actori){}

Film::~Film(){
	this->titlu = "Nedefinit";
	this->buget = -1;
	this->nrActori = -1;
	delete[] actori;
}

void Film::printFilm() {
	cout << "Titlu, buget, numar actori: ";
	cout << this->titlu << ", " << this->buget << ", " << this->nrActori << endl;
	cout << "Actori" << endl;
	for (int i = 0; i < nrActori; ++i) {
		this->actori[i]->printActor();
	}
}

int comparaBuget(const Film& f1, const Film& f2) {
	if (f1.buget > f2.buget)
		return 1;
	else if (f1.buget < f2.buget)
		return -1;
	return 0;
}

void sortareBuget(Film** film, int nrFilme) {
	for (int i = 0; i < nrFilme; ++i) {
		for(int j=i+1; j<nrFilme; ++j)
			if (comparaBuget(*film[i], *film[j])) {
				Film* aux = film[i];
				film[i] = film[j];
				film[j] = aux;
			}
	}
}

int comparaNrActori(const Film& f1, const Film& f2) {
	if (f1.nrActori > f2.nrActori)
		return 1;
	else if (f1.nrActori < f2.nrActori)
		return -1;
	return 0;
}

void sortareNrActori(Film** film, int nrFilme) {
	for (int i = 0; i < nrFilme; ++i) {
		for (int j = i + 1; j < nrFilme; ++j)
			if (comparaNrActori(*film[i], *film[j])) {
				Film* aux = film[i];
				film[i] = film[j];
				film[j] = aux;
			}
	}
}

void actoriComuni(const Film& f1, const Film& f2) {

	ofstream resultFile("results.txt");
	cout << "\nActorii comuni din filmul " << f1.titlu << " si " << f2.titlu << " sunt:" << endl;
	for (int i = 0; i < f1.nrActori; ++i) {
		for (int j = 0; j < f2.nrActori; ++j) {
			if(f1.actori[i]->getNume().compare(f2.actori[j]->getNume())
				&& (f1.actori[i]->getPrenume().compare(f2.actori[j]->getPrenume()))) {
				cout << f1.actori[i]->getNume() << " " << f1.actori[i]->getPrenume()<<endl;
			}
		}
	}
}