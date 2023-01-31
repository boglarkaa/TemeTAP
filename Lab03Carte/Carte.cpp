#include "Carte.h"
#include<iostream>
using namespace std;

Carte::Carte(string autor = "Nedefinit", string titlu = "Nedefinit", unsigned isbn = -1, float pret = -1) :
	autor(autor), titlu(titlu), isbn(isbn), pret(pret) {
	Carte::nrInstante++;
}

Carte::Carte(const Carte& c) :
	autor(c.autor), titlu(c.titlu), isbn(c.isbn), pret(c.pret) {
	Carte::nrInstante++;
}

Carte::~Carte() {
	autor = "";
	titlu = "";
	isbn = -1;
	pret = -1;
	Carte::nrInstante--;
}

void Carte::toString() {
	cout << autor << " " << titlu << " " << isbn << " " << pret << endl;
}