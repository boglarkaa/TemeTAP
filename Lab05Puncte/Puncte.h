#pragma once
#ifndef _PUNCTE_H
#define _PUNCTE_H
#include <iostream>
using namespace std;
class Punct2D {
protected:
	double x, y;
public:
	Punct2D(double x=0, double y=0);
	Punct2D(const Punct2D& p);
	~Punct2D();
	Punct2D& operator=(const Punct2D& p);
	Punct2D operator+(const Punct2D& p) const;
	Punct2D operator-(const Punct2D& p) const;
	Punct2D operator*(const Punct2D& p) const;
	Punct2D operator/(const Punct2D& p) const;

	Punct2D& operator+=(const Punct2D& p);
	Punct2D& operator-=(const Punct2D& p);
	Punct2D& operator*=(const Punct2D& p);
	Punct2D& operator/=(const Punct2D& p);

	double distanta2(const Punct2D& p);

	bool operator==(const Punct2D& p);
	bool operator!=(const Punct2D& p);
	bool operator<=(const Punct2D& p);
	bool operator>=(const Punct2D& p);
	bool operator<(const Punct2D& p);
	bool operator>(const Punct2D& p);

	ostream& operator<<(ostream& o) const;
	istream& operator>>(istream& i);

	Punct2D& operator++();
	Punct2D& operator++(int);
	Punct2D& operator--();
	Punct2D& operator--(int);

};

class Punct3D : public Punct2D{
private:
	double z;
public:
	Punct3D(double x = 0, double y = 0, double z=0);
	Punct3D(const Punct3D& p);
	~Punct3D();
	friend double distanta3(const Punct3D& punct1, const Punct3D& punct2);
	// Operatori 3D
	Punct3D& operator=(const Punct3D& punct);
	bool operator<(const Punct3D& punct) const;
	bool operator<=(const Punct3D& punct) const;
	bool operator>(const Punct3D& punct) const;
	bool operator>=(const Punct3D& punct) const;
	bool operator==(const Punct3D& punct) const;
	bool operator!=(const Punct3D& punct) const;
	Punct3D operator+(const Punct3D& punct) const;
	Punct3D operator-(const Punct3D& punct) const;
	Punct3D operator*(const Punct3D& punct) const;
	Punct3D operator/(const Punct3D& punct) const;
	Punct3D& operator+=(const Punct3D& punct);
	Punct3D& operator-=(const Punct3D& punct);
	Punct3D& operator*=(const Punct3D& punct);
	Punct3D& operator/=(const Punct3D& punct);
	Punct3D& operator++();
	Punct3D operator++(int dummy);
	Punct3D& operator--();
	Punct3D operator--(int dummy);
	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);
};
#endif // !_PUNCTE_H
