#include "Triunghi.h"
#include<cmath>
#include<iostream>
using namespace std;
Triunghi::Triunghi(double laturaA, double laturaB, double laturaC)
	: laturaA(laturaA), laturaB(laturaB), laturaC(laturaC) {}

Triunghi::Triunghi(const Triunghi& t)
	: laturaA(t.laturaA), laturaB(t.laturaB), laturaC(t.laturaC) {}

Triunghi::~Triunghi() {
	laturaA = -1;
	laturaB = -1;
	laturaC = -1;
}

double Triunghi::arie() {
	double s = (laturaA + laturaB + laturaC) / 2;
	cout << s<<endl;
	cout << s * (s - laturaA) * (s - laturaB) * (s - laturaC) << endl;
	return sqrt(s * (s - laturaA) * (s - laturaB) * (s - laturaC));
}

double Triunghi::perimetru() {
	return laturaA + laturaB + laturaC;
}