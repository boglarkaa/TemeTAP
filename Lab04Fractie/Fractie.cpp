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

int Fractie::cmmmc(const Fractie& f1, const Fractie& f2) {
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

Fractie& Fractie::operator=(const Fractie& o) {
	this->numarator = o.numarator;
	this->numitor = o.numitor;
	return *this;
}
/*
Fractie Fractie::operator+(const Fractie& f) const{
	Fractie rezultat;
	rezultat.numarator = rezultat.cmmmc(*this, f) / this->numitor + rezultat.cmmmc(*this, f) / f.numitor;
	rezultat.numitor = (double)rezultat.cmmmc(*this, f);
	return rezultat;
}
Fractie Fractie::operator-(const Fractie& f) const {
	Fractie rezultat;
	rezultat.numarator = rezultat.cmmmc(*this, f) / this->numitor - rezultat.cmmmc(*this, f) / f.numitor;
	rezultat.numitor = (double)rezultat.cmmmc(*this, f);
	return rezultat;
}

Fractie Fractie::operator*(const Fractie& f) const {
	Fractie rezultat;
	rezultat.numarator = this->numarator * f.numarator;
	rezultat.numitor = this->numitor * f.numitor;
	return rezultat;
}

Fractie Fractie::operator/(const Fractie& f) const {
	Fractie temp = f;
	int aux = temp.numitor;
	temp.numitor = temp.numarator;
	temp.numarator = aux;
	Fractie rezultat;
	rezultat.numarator = this->numarator * temp.numarator;
	rezultat.numitor = this->numitor * temp.numitor;
	return rezultat;
}
*/
/*
bool  Fractie::operator!=(const Fractie& f) const {
	return !(this->numarator / this->numitor != f.numarator / f.numitor);
}
bool  Fractie::operator<(const Fractie& f) const {
	return (this->numarator / this->numitor < f.numarator / f.numitor);

}
bool  Fractie::operator>(const Fractie& f) const {
	return (this->numarator / this->numitor > f.numarator / f.numitor);

}
bool  Fractie::operator<=(const Fractie& f) const {
	return (this->numarator / this->numitor <= f.numarator / f.numitor);

}
bool  Fractie::operator>=(const Fractie& f) const {
	return (this->numarator / this->numitor >= f.numarator / f.numitor);

}
bool  Fractie::operator==(const Fractie& f) const {
	return (this->numarator / this->numitor == f.numarator / f.numitor);

}
*/
Fractie& Fractie::operator+=(const Fractie& f) {
	this->numarator = this->cmmmc(*this, f) / this->numitor + this->cmmmc(*this, f) / f.numitor;
	this->numitor = (double)this->cmmmc(*this, f);
	return *this;
}

Fractie& Fractie::operator-=(const Fractie& f) {
	this->numarator = this->cmmmc(*this, f) / this->numitor - this->cmmmc(*this, f) / f.numitor;
	this->numitor = (double)this->cmmmc(*this, f);
	return *this;
}
Fractie& Fractie::operator*=(const Fractie& f) {
	this->numarator = this->numarator * f.numarator;
	this->numitor = this->numitor * f.numitor;
	return *this;
}
Fractie& Fractie::operator/=(const Fractie& f) {
	Fractie temp = f;
	int aux = temp.numitor;
	temp.numitor = temp.numarator;
	temp.numarator = aux;
	this->numarator = this->numarator * temp.numarator;
	this->numitor = this->numitor * temp.numitor;
	return *this;
}

Fractie& Fractie::operator++() {
	this->numarator += this->numitor;
	return *this;
}
Fractie  Fractie::operator++(int dummy) {
	Fractie old = *this;
	this->numarator += this->numitor;
	return old;
}
Fractie& Fractie::operator--() {
	this->numarator -= this->numitor;
	return *this;
}
Fractie  Fractie::operator--(int dummy) {
	Fractie old = *this;
	this->numarator -= this->numitor;
	return old;
}
/*
ostream& Fractie::operator<<(ostream& o) const {
	o << this->numarator << " / " << this->numitor << endl;
	return o;
}
istream& Fractie::operator>>(istream& i) {
	cout << "Dati valoare pentru numarator" << endl;
	i >> this->numarator;
	cout << "Dati valoare pentru numitor" << endl;
	i >> this->numitor;
	return i;
}
*/
Fractie::operator double() {
	return (double)this->numarator / this->numitor;
 }

/*
double Fractie::scadere(Fractie f1, Fractie f2) {
	f1.numarator = cmmmc(f1, f2) / f1.numitor;
	f2.numarator = cmmmc(f1, f2) / f2.numitor;
	return ((f1.numarator - f2.numarator) / (double)cmmmc(f1, f2));
}

double Fractie::inmultire(Fractie f1, Fractie f2) {
	return ((f1.numarator * f2.numarator) / (double)(f1.numitor * f2.numitor));
}

double Fractie::impartire(Fractie f1, Fractie f2) {
	Fractie temp = f2;
	int aux = temp.numitor;
	temp.numitor = temp.numarator;
	temp.numarator = aux;
	return ((f1.numarator * temp.numarator) / (double)(f1.numitor * temp.numitor));
}
*/
int Fractie::cmmdc(int a, int  b) {
	while (b != 0) {
		int rest = a % b;
		a = b;
		b = rest;
	}
	return a;
}
Fractie operator+(const Fractie& f1, const Fractie& f2) {
	Fractie rezultat;
	rezultat.numarator = rezultat.cmmmc(f1, 2) / f1.numitor + rezultat.cmmmc(f1, f2) / f2.numitor;
	rezultat.numitor = (double)rezultat.cmmmc(f1, f2);
	return rezultat;
}
Fractie operator-(const Fractie& f1, const Fractie& f2) {
	Fractie rezultat;
	rezultat.numarator = rezultat.cmmmc(f1, 2) / f1.numitor - rezultat.cmmmc(f1, f2) / f2.numitor;
	rezultat.numitor = (double)rezultat.cmmmc(f1, f2);
	return rezultat;
}
Fractie operator*(const Fractie& f1, const Fractie& f2) {
	Fractie rezultat;
	rezultat.numarator = f1.numarator * f2.numarator;
	rezultat.numitor = f1.numitor * f2.numitor;
	return rezultat;
}
Fractie operator/(const Fractie& f1, const Fractie& f2) {
	Fractie temp = f2;
	int aux = temp.numitor;
	temp.numitor = temp.numarator;
	temp.numarator = aux;
	Fractie rezultat;
	rezultat.numarator = f1.numarator * f2.numarator;
	rezultat.numitor = f1.numitor * f2.numitor;
	return rezultat;
}

bool operator!=(const Fractie& f1, const Fractie& f2) {
	return !(f1.numarator / f1.numitor != f2.numarator / f2.numitor);
}

bool operator==(const Fractie& f1, const Fractie& f2) {
	return (f1.numarator / f1.numitor == f2.numarator / f2.numitor);
}

bool operator<=(const Fractie& f1, const Fractie& f2) {
	return (f1.numarator / f1.numitor <= f2.numarator / f2.numitor);
}

bool operator>=(const Fractie& f1, const Fractie& f2) {
	return (f1.numarator / f1.numitor >= f2.numarator / f2.numitor);
}

bool operator<(const Fractie& f1, const Fractie& f2) {
	return (f1.numarator / f1.numitor < f2.numarator / f2.numitor);
}

bool operator>(const Fractie& f1, const Fractie& f2) {
	return (f1.numarator / f1.numitor > f2.numarator / f2.numitor);
}

ostream& operator<<(ostream& o, const Fractie& f) {
	o << f.numarator <<" / " << f.numitor;
	return o;
}
istream& operator>>(istream& i, const Fractie& f) {
	cout << "Dati valoare pentru numarator" << endl;
	i >> f.numarator;
	cout << "Dati valoare pentru numitor" << endl;
	i >> f.numitor;
	return i;
 }