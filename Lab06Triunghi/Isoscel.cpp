#include "Triunghi.h"
#include <cmath>
Isoscel::Isoscel(double laturaA, double laturaB, double laturaC)
	: Triunghi(laturaA, laturaB, laturaC) {}

Isoscel::Isoscel(const Isoscel& d)
	: Triunghi(d) {}

Isoscel::~Isoscel() {
	Triunghi::~Triunghi();
}

double Isoscel::arie() {
	return 0.5 * (sqrt(laturaA * laturaA - (laturaB * laturaB) / 4) * laturaB);
}

double Isoscel::perimetru() {
	return Triunghi::perimetru();
}