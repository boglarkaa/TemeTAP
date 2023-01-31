#include "Animal.h"
#include <iostream>
using namespace std;

Mamifer::Mamifer(int varsta, string specie, double lungime)
	:Animal::Animal(varsta, specie), lungime(lungime){}

Mamifer::Mamifer(const Mamifer& m)
	:Animal::Animal(m), lungime(m.lungime) {}

Mamifer::~Mamifer() {
	Animal::~Animal();
	lungime = -1;
}