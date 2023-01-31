#include"Puncte.h"
#include<iostream>
#include<cmath>
using namespace std;

Punct2D::Punct2D(double x, double y)
	:x(x),y(y){}

Punct2D::Punct2D(const Punct2D& m)
	: x(m.x), y(m.y){}

Punct2D::~Punct2D() {
	x = -1;
	y = -1;
}

double Punct2D::distanta2(const Punct2D& p) {
	return sqrt((this->x - p.x) * (this->x - p.x) + (this->y - p.y) * (this->y - p.y));
}

Punct2D& Punct2D::operator=(const Punct2D& p) {
	this->x = p.x;
	this->y = p.y; 
	return *this;
}

Punct2D Punct2D::operator+(const Punct2D& p) const{
	return Punct2D(this->x + p.x, this->y + p.y);
}

Punct2D Punct2D::operator-(const Punct2D& p) const{
	return Punct2D(this->x - p.x, this->y - p.y);
}

Punct2D Punct2D::operator*(const Punct2D& p) const{
	return Punct2D(this->x * p.x, this->y * p.y);
}

Punct2D Punct2D::operator/(const Punct2D& p) const{
	return Punct2D(this->x / p.x, this->y / p.y);
}

Punct2D& Punct2D::operator+=(const Punct2D& p) {
	this->x += p.x;
	this->y += p.y;
	return *this;
}

Punct2D& Punct2D::operator-=(const Punct2D& p) {
	this->x -= p.x;
	this->y -= p.y;
	return *this;
}

Punct2D& Punct2D::operator*=(const Punct2D& p) {
	this->x *= p.x;
	this->y *= p.y;
	return *this;
}

Punct2D& Punct2D::operator/=(const Punct2D& p) {
	this->x /= p.x;
	this->y /= p.y;
	return *this;
}

bool Punct2D::operator!=(const Punct2D& p) {
	return (sqrt(this->x * this->x + this->y * this->y) != sqrt(p.x * p.x + p.y * p.y));
}

bool Punct2D::operator==(const Punct2D& p) {
	return (sqrt(this->x * this->x + this->y * this->y) == sqrt(p.x * p.x + p.y * p.y));

}
bool Punct2D::operator>(const Punct2D& p) {
	return (sqrt(this->x * this->x + this->y * this->y) > sqrt(p.x * p.x + p.y * p.y));

}
bool Punct2D::operator>=(const Punct2D& p) {
	return (sqrt(this->x * this->x + this->y * this->y) >= sqrt(p.x * p.x + p.y * p.y));

}
bool Punct2D::operator<(const Punct2D& p) {
	return (sqrt(this->x * this->x + this->y * this->y) < sqrt(p.x * p.x + p.y * p.y));

}
bool Punct2D::operator<=(const Punct2D& p) {
	return (sqrt(this->x * this->x + this->y * this->y) <= sqrt(p.x * p.x + p.y * p.y));

}

ostream& Punct2D::operator<<(ostream& o) const {
	o << "x = " << x << ", y = " << y << endl;
	return o;
}

istream& Punct2D::operator>>(istream& i) {
	cout << "Dati x\n";
	i >> x;
	cout << "Dati y\n";
	i >> y;
	return i;
}

Punct2D& Punct2D::operator++() {
	this->x ++;
	this->y ++;
	return *this;
}
Punct2D& Punct2D::operator++(int dummy) {
	Punct2D old = *this;
	this->x++;
	this->y++;
	return old;
}
Punct2D& Punct2D::operator--( ){
	this->x--;
	this->y--;
	return *this;
}
Punct2D& Punct2D::operator--(int dummy) {
	Punct2D old = *this;
	this->x--;
	this->y--;
	return old;
}