#include "Triunghi.h"
#include<iostream>
using namespace std;
DreptunghicIsoscel::DreptunghicIsoscel(double laturaA, double laturaB, double laturaC)
	: Dreptunghic(laturaA, laturaB, laturaC) {}

DreptunghicIsoscel::DreptunghicIsoscel(const DreptunghicIsoscel& d)
	: Dreptunghic(d) {}

DreptunghicIsoscel::~DreptunghicIsoscel() {
	Dreptunghic::~Dreptunghic();
}

double DreptunghicIsoscel::arie() {
	return Dreptunghic::arie();
}

double DreptunghicIsoscel::perimetru() {
	return Dreptunghic::perimetru();
}