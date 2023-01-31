#pragma once
#ifndef _FRACTIE_H
#define _FRACTIE_H
#include <iostream>
using namespace std;
class Fractie {
private:
	int numarator;
	int numitor;

public:
	Fractie();
	Fractie(int numarator);
	Fractie(int numarator, int numitor);
	Fractie(const Fractie&);
	~Fractie();
	int getNumitor();
	int getNumarator();
	void setNumitor(int numitor);
	void setNumarator(int numarator);
	int cmmmc(Fractie f1, Fractie f2);
	double adunare(Fractie f1, Fractie f2);
	double scadere(Fractie f1, Fractie f2);
	double inmultire(Fractie f1, Fractie f2);
	double impartire(Fractie f1, Fractie f2);
	int static cmmdc(int a, int b);
	void simplifica();
	void reciproc();
	bool egal(const Fractie&);
	void print();
};
#endif // !INCLUDE_FRACTIE_H
