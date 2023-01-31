#include "Animal.h"
#include <iostream>
using namespace std;

Pasare::Pasare(int varsta, string specie, int nrPene)
	:Animal::Animal(varsta, specie), nrPene(nrPene) {}

Pasare::Pasare(const Pasare& p)
	:Animal::Animal(p), nrPene(p.nrPene) {}

Pasare::~Pasare() {
	Animal::~Animal();
	nrPene = -1;
}