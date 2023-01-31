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
	int cmmmc(const Fractie& f1, const Fractie& f2);
	Fractie& operator=(const Fractie& o);

	/*
	Fractie operator+(const Fractie& f1) const;
	Fractie operator-(const Fractie& f1) const;
	Fractie operator*(const Fractie& f1) const;
	Fractie operator/(const Fractie& f1) const;
	*/

	/*
	bool operator!=(const Fractie& f) const;
	bool operator<(const Fractie& f) const;
	bool operator>(const Fractie& f) const;
	bool operator<=(const Fractie& f) const;
	bool operator>=(const Fractie& f) const;
	bool operator==(const Fractie& f) const;
	*/

	Fractie& operator+=(const Fractie& f);
	Fractie& operator-=(const Fractie& f);
	Fractie& operator*=(const Fractie& f);
	Fractie& operator/=(const Fractie& f);

	Fractie& operator++();
	Fractie operator++(int dummy);
	Fractie& operator--();
	Fractie operator--(int dummy);

	/*
	ostream& operator<<(ostream& o) const;
	istream& operator>>(istream& i);
	*/

	operator double();


	int static cmmdc(int a, int b);


	//void simplifica();
	//void reciproc();
	//bool egal(const Fractie&);
	//void print();

	friend Fractie operator+(const Fractie& f1, const Fractie& f2) ;
	friend Fractie operator-(const Fractie& f1, const Fractie& f2) ;
	friend Fractie operator*(const Fractie& f1, const Fractie& f2) ;
	friend Fractie operator/(const Fractie& f1, const Fractie& f2) ;

	friend bool operator!=(const Fractie& f1, const Fractie& f2);
	friend bool operator==(const Fractie& f1, const Fractie& f2);
	friend bool operator>=(const Fractie& f1, const Fractie& f2);
	friend bool operator<=(const Fractie& f1, const Fractie& f2);
	friend bool operator>(const Fractie& f1, const Fractie& f2);
	friend bool operator<(const Fractie& f1, const Fractie& f2);

	friend ostream& operator<<(ostream& o, const Fractie& f);
	friend istream& operator>>(istream& i, const Fractie& f);
};
#endif // !INCLUDE_FRACTIE_H
