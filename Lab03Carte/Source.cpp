#include"Carte.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int Carte::nrInstante = 0;

int main() {
	int nrCarti;
	cout << "Nr cart: ";
	cin >> nrCarti;
	Carte** carti = new Carte * [nrCarti];
	string autor, titlu;
	unsigned isbn;
	float pret;

	//varianta lab 11
	ifstream readFile("date.txt");
	ofstream writeFile("rezultate.txt");
	for (int i = 0; i < nrCarti; i++) {
		readFile >> autor >> titlu >> isbn >> pret;
		carti[i] = new Carte(autor, titlu, isbn, pret);
	}

	//varianta lab 3
	/*
	for (int i = 0; i < nrCarti; i++) {
		cout << "Introduceti autor, titlu, isbn, pret: "<<endl;
		cin >> autor >> titlu >> isbn >> pret;
		carti[i]= new Carte(autor, titlu, isbn, pret);
	}
	*/

	cout << "Au fost create " << Carte::nrInstante << " carti"<<endl;
	cout << "Introduceti un autor:" << endl;
	cin >> autor;
	string a = carti[0]->getAutor();
	for (int i = 0; i < nrCarti; i++) {
		if (a.compare(autor) == 0) {
			//varianta lab3
		 	//carti[i]->toString();
			//varianta lab11
			writeFile << carti[i]->getAutor() << " " << carti[i]->getTitlu() << " " << carti[i]->getIsbn() << " " << carti[i]->getPret() << endl;
		}
	}
	return 0;
}