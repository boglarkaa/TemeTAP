#include "Triunghi.h"

Dreptunghic::Dreptunghic(double laturaA, double laturaB, double laturaC)
	: Triunghi(laturaA, laturaB, laturaC){}

Dreptunghic::Dreptunghic(const Dreptunghic& d)
	: Triunghi(d) {}

Dreptunghic::~Dreptunghic() {
	Triunghi::~Triunghi();
}

double Dreptunghic::arie() {
	if ((laturaA * laturaA + laturaB * laturaB) == laturaC * laturaC) {
		return laturaA * laturaB;
	}
	if ((laturaB * laturaB + laturaC * laturaC) == laturaA * laturaA) {
		return laturaC * laturaB;
	}
	if ((laturaA * laturaA + laturaC * laturaC) == laturaB* laturaB) {
		return laturaA * laturaC;
	}
}

double Dreptunghic::perimetru() {
	return Triunghi::perimetru();
}