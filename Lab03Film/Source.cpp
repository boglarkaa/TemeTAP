#include "FilmActor.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int Actor::nrInstante = 0;

int main() {

	ifstream myFile("filmeSiActori.txt");
	ofstream resultFile("results.txt");
	int nrFilme;
	myFile >> nrFilme;
	string titlu, nume, prenume, personaj;
	int nrActori;
	float buget;
	Film** film = new Film * [nrFilme];
	Actor** actori = new Actor*;
	//varianta lab11
	for (int i = 0; i < nrFilme; ++i) {
		myFile >> titlu >> buget >> nrActori;
		film[i] = new Film(titlu, buget, nrActori);
		actori = new Actor * [nrActori];
		for (int j = 0; j < nrActori; ++j) {
			myFile >> nume >> prenume >> personaj;
			actori[j] = new Actor(nume, prenume, personaj);
		}
		film[i]->setActori(actori);
	}
	resultFile << "Lista originala:\n" << endl;
	for (int i = 0; i < nrFilme; ++i) {
		resultFile << "Titlu, buget, numar actori: ";
		resultFile << film[i]->getTitlu() << ", " << film[i]->getBuget() << ", " << film[i]->getNrActori() << endl;
		resultFile << "Actori" << endl;
		for (int j = 0; j < nrActori; ++j) {
			resultFile << "Nume, prenume, personaj: ";
			resultFile << actori[j]->getNume() << ", " << actori[j]->getPrenume() << ", " << actori[j]->getPersonaj() << endl;
		}
	}
	resultFile << "\nSortare in functie de buget\n" << endl;
	sortareBuget(film, nrFilme);
	for (int i = 0; i < nrFilme; ++i) {
		resultFile << "Titlu, buget, numar actori: ";
		resultFile << film[i]->getTitlu() << ", " << film[i]->getBuget() << ", " << film[i]->getNrActori() << endl;
		resultFile << "Actori" << endl;
		for (int j = 0; j < nrActori; ++j) {
			resultFile << "Nume, prenume, personaj: ";
			resultFile << actori[j]->getNume() << ", " << actori[j]->getPrenume() << ", " << actori[j]->getPersonaj() << endl;
		}
	}
	resultFile << "\nSortare in functie de numar actori\n" << endl;
	sortareNrActori(film, nrFilme);
	for (int i = 0; i < nrFilme; ++i) {
		resultFile << "Titlu, buget, numar actori: ";
		resultFile << film[i]->getTitlu() << ", " << film[i]->getBuget() << ", " << film[i]->getNrActori() << endl;
		resultFile << "Actori" << endl;
		for (int j = 0; j < nrActori; ++j) {
			resultFile << "Nume, prenume, personaj: ";
			resultFile << actori[j]->getNume() << ", " << actori[j]->getPrenume() << ", " << actori[j]->getPersonaj() << endl;
		}
	}
	actoriComuni(*film[0], *film[1]);
	resultFile << "\nNumarul de actori creati: " << Actor::nrInstante << endl;
	return 0;
}