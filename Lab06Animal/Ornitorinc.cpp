#include "Animal.h"
#include <iostream>
using namespace std;

Ornitorinc::Ornitorinc(int varsta, string specie)
:Mamifer(varsta, specie), Pasare(varsta, specie){}

Ornitorinc::Ornitorinc(const Ornitorinc& o)
	:Mamifer(o), Pasare(o){}

Ornitorinc::~Ornitorinc() {
	Mamifer::~Mamifer();
	Pasare::~Pasare();
}