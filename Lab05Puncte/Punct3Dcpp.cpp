#include"Puncte.h"
#include<iostream>
using namespace std;

Punct3D::Punct3D(double x, double y, double z)
	:Punct2D::Punct2D(x, y ), z(z){}

Punct3D::Punct3D(const Punct3D& m)
	: Punct2D::Punct2D(m), z(m.z) {}

Punct3D::~Punct3D() {
	Punct2D::~Punct2D();
	z = -1;
}

Punct3D& Punct3D::operator=(const Punct3D& punct) {
	Punct2D::operator=(punct);
	this->z = punct.z;
	return *this;
}
Punct3D Punct3D::operator+(const Punct3D& punct) const {
	Punct2D::operator+(punct);
	Punct3D temp;
	temp = this->z + punct.z;
	return temp;
}
Punct3D Punct3D::operator-(const Punct3D& punct) const {
	Punct2D::operator-(punct);
	Punct3D temp;
	temp = this->z - punct.z;
	return temp;
}
Punct3D Punct3D::operator*(const Punct3D& punct) const {
	Punct2D::operator*(punct);
	Punct3D temp;
	temp = this->z * punct.z;
	return temp;
}
Punct3D Punct3D::operator/(const Punct3D& punct) const {
	Punct2D::operator/(punct);
	Punct3D temp;
	temp = this->z / punct.z;
	return temp;
}
Punct3D& Punct3D::operator+=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z += punct.z;
	return *this;
}
Punct3D& Punct3D::operator-=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z -= punct.z;
	return *this;
}
Punct3D& Punct3D::operator*=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z *= punct.z;
	return *this;
}
Punct3D& Punct3D::operator/=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z /= punct.z;
	return *this;
}
bool Punct3D::operator<(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) < Punct3D::operator<(punct)));
}
bool Punct3D::operator<=(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) <= Punct3D::operator<=(punct)));
}
bool Punct3D::operator>(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) > Punct3D::operator>(punct)));
}
bool Punct3D::operator>=(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) >= Punct3D::operator>=(punct)));
}
bool Punct3D::operator==(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) == Punct3D::operator==(punct)));
}
bool Punct3D::operator!=(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) != Punct3D::operator!=(punct)));
}
Punct3D& Punct3D::operator++() {
	Punct2D::operator++();
	this->z++;
	return *this;
}
Punct3D Punct3D::operator++(int dummy) {
	Punct2D::operator++(dummy);
	Punct3D init = *this;
	this->z++;
	return init;
}
Punct3D& Punct3D::operator--() {
	Punct2D::operator--();
	this->z--;
	return *this;
}
Punct3D Punct3D::operator--(int dummy) {
	Punct2D::operator--(dummy);
	Punct3D init = *this;
	this->z--;
	return init;
}
ostream& Punct3D::operator<<(ostream& os) const {
	Punct2D::operator<<(os);
	os << "z = " << this->z << endl;
	return os;
}
istream& Punct3D::operator>>(istream& is) {
	Punct2D::operator>>(is);
	cout << "Dati z\n";
	is >> this->z;
	return is;
}
double distanta3(const Punct3D& punct, const Punct3D& punct2) {
	return (sqrt(pow((punct.x - punct2.x), 2) + pow((punct.y - punct2.y), 2) + pow((punct.z - punct2.z), 2)));
}