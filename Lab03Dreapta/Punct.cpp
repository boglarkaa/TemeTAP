#include"Dreapta.h"
#include<cmath>

unsigned Punct::contorSemiplanNeg = 0;
unsigned Punct::contorSemiplanPoz = 0;
unsigned Punct::contorDreapta = 0;
Dreapta Punct::d;

Punct::Punct(int x, int y) :
	x(x), y(y) {
	if (d.getM() * x + d.getN() == y)
		contorDreapta++;
	else if (d.getM() * x + d.getN() - y > 0)
		contorSemiplanPoz++;
	else
		contorSemiplanNeg++;
}

Punct::Punct(const Punct& p):
	x(p.x), y(p.y){}

Punct::~Punct() {
	x = -1;
	y = -1;
	if (d.getM() * x + d.getN() == y)
		contorDreapta--;
	else if (d.getM() * x + d.getN() - y > 0)
		contorSemiplanPoz--;
	else
		contorSemiplanNeg--;

}

float distanta( Punct p1,  Punct p2) {
	return sqrt(pow(p2.x - p1.x, 2) + (p2.y - p1.y, 2));
}