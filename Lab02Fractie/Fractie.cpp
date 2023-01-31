#include"Fractie.h"
#include<iostream>
using namespace std;
Fractie::Fractie() {
	this->numarator = 0;
	this->numitor = 1;
}
Fractie::Fractie(int numarator) {
	this->numarator = numarator;
	this->numitor = 1;
}

Fractie::Fractie(int numarator, int numitor) :
	numitor(numitor), numarator(numarator) {}

Fractie::Fractie(const Fractie& o) {
	this->numitor = o.numitor;
	this->numarator = o.numarator;
}

Fractie::~Fractie() {
	this->numarator = 0;
	this->numitor = 1;
}

int Fractie::getNumarator() {
	return this->numarator;
}

int Fractie::getNumitor() {
	return this->numitor;
}

void Fractie::setNumarator(int numarator) {
	this->numarator = numarator;
}

void Fractie::setNumitor(int numitor) {
	this->numitor = numitor;
}

int Fractie::cmmmc(Fractie f1, Fractie f2) {
	int numitor1 = f1.numitor;
	int numitor2 = f2.numitor;
	while (numitor1 != numitor2) {
		if (numitor1 > numitor2) {
			numitor1 = numitor1 - numitor2;
		}
		else {
			numitor2 = numitor2 - numitor1;
		}
	}
	return (f1.numitor * f2.numitor) / numitor1;
}

double Fractie::adunare(Fractie f1, Fractie f2) {
	f1.numarator = cmmmc(f1, f2) / f1.numitor;
	f2.numarator = cmmmc(f1, f2) / f2.numitor;
	return ((f1.numarator + f2.numarator) / (double) cmmmc(f1, f2));
}

double Fractie::scadere(Fractie f1, Fractie f2) {
	f1.numarator = cmmmc(f1, f2) / f1.numitor;
	f2.numarator = cmmmc(f1, f2) / f2.numitor;
	return ((f1.numarator - f2.numarator) / (double)cmmmc(f1, f2));
}

double Fractie::inmultire(Fractie f1, Fractie f2) {
	return ((f1.numarator * f2.numarator) /(double) (f1.numitor * f2.numitor));
}

double Fractie::impartire(Fractie f1, Fractie f2) {
	Fractie temp = f2;
	int aux = temp.numitor;
	temp.numitor = temp.numarator;
	temp.numarator = aux;
	return ((f1.numarator * temp.numarator) /(double) (f1.numitor * temp.numitor));
}

int Fractie::cmmdc(int a, int  b) {
	while (b!=0) {
		int rest = a % b;
		a = b;
		b = rest;
	}
	return a;
}

void Fractie::simplifica() {
	int d = cmmdc(this->numarator, this->numitor);
	this->numitor = this->numitor / d;
	this->numarator = this->numarator / d;
}

void Fractie::reciproc() {
	int temp = this->numitor;
	this->numitor = this->numarator;
	this->numarator = temp;
}

bool Fractie::egal(const Fractie& f) {
	if (this->numitor == f.numitor && this->numarator==f.numarator) {
		return true;
	}
	return false;
}

void Fractie::print() {
	cout << " " << this->numarator << " / " << this->numitor << endl;
}