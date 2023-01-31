#include"Dreapta.h"
#include<iostream>
using namespace std;

Punct centruDeGreutate(Punct** p, int nrPuncte) {
	float sumaX = 0, sumaY=0;
	float medieX = 0, medieY = 0;
	for (int i = 0; i < nrPuncte; ++i) {
		sumaX += p[i]->getX();
		sumaY += p[i]->getY();
	}
	medieX = sumaX / nrPuncte;
	medieY = sumaY / nrPuncte;
	Punct punct(medieX, medieY);
	return punct;
}

int main() {
	Dreapta d;

	int nrPuncte;
	cout << "Dati nr puncte" << endl;
	cin >> nrPuncte;

	Punct** puncte = new Punct * ();
	int x, y;
	for (int i = 0; i < nrPuncte; i++) {
		cout << "X & Y = " << endl;
		cin >> x >> y;
		puncte[i] = new Punct(x, y);
	}

	cout << distanta(*puncte[1], *puncte[0]) << endl;
	cout << centruDeGreutate(puncte, nrPuncte).getX() << " " << centruDeGreutate(puncte, nrPuncte).getY() << endl;
}