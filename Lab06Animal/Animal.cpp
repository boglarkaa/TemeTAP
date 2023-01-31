#include "Animal.h"
#include <iostream>
using namespace std;
Animal::Animal(int varsta, string specie)
	:varsta(varsta), specie(specie){}

Animal::Animal(const Animal& a)
	:varsta(a.varsta), specie(a.specie) {}

Animal::~Animal()
{
	varsta = -1;
	specie = "";
}

bool Animal::heterotrof() {
	if (!(is_base_of<Animal, Mamifer>::value && is_base_of<Animal, Pasare>::value))
	{
		return true;
	}
	return false;
}