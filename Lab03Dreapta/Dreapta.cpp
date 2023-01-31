#include"Dreapta.h"

Dreapta::Dreapta(int m, int n) :
	m(m), n(n){}

Dreapta::Dreapta(const Dreapta& d):
	m(d.m), n(d.n){}

Dreapta::~Dreapta() {
	m = -1;
	n = -1;
}

