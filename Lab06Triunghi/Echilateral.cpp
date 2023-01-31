#include "Triunghi.h"
#include <cmath>
Echilateral::Echilateral(double laturaA, double laturaB, double laturaC)
	: Isoscel::Isoscel(laturaA, laturaB, laturaC) {}

Echilateral::Echilateral(const Echilateral& d)
	: Isoscel::Isoscel(d) {}

Echilateral::~Echilateral() {
	Isoscel::~Isoscel();
}

double Echilateral::arie() {
	return sqrt(3) / 4 * laturaA * laturaA;
}

double Echilateral::perimetru() {
	return Isoscel::perimetru();
}