#include "Matrice.h"
#include<iostream>
using namespace std;

Matrice::Matrice(int nrLinii, int nrColoane)
	: nrLinii(nrLinii), nrColoane(nrColoane){
	elemente = new int*[nrLinii];
	for (int i = 0; i < nrLinii; ++i) {
		elemente[i] = new int[nrColoane];
	}
	int k = 0; 
	for (int i = 0; i < nrLinii; ++i)
		for (int j = 0; j < nrColoane; ++j)
			elemente[i][j] = k++;
}

Matrice::Matrice(const Matrice& m)
	: nrLinii(m.nrLinii), nrColoane(m.nrColoane), elemente(m.elemente) {}

Matrice::~Matrice() {
	for (int i = 0; i < nrLinii; ++i)
			delete[] elemente[i];
	delete[] elemente;
	nrLinii = -1;
	nrColoane = -1;
}

Matrice& Matrice::operator=(const Matrice& m) {
	this->nrLinii = m.nrLinii;
	this->nrColoane = m.nrColoane;
	elemente = new int* [nrLinii];
	for (int i = 0; i < nrLinii; ++i) {
		elemente[i] = new int[nrColoane];
	}
	for (int i = 0; i < nrLinii; ++i)
		for (int j = 0; j < nrColoane; ++j)
			this->elemente[i][j] = m.elemente[i][j];
	return *this;
}

Matrice Matrice::operator+(const Matrice& m) const {
	Matrice rezultat(m.nrLinii, m.nrColoane);
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			rezultat.elemente[i][j] = this->elemente[i][j] + m.elemente[i][j];
		}
	}
	return rezultat;
}
Matrice Matrice::operator-(const Matrice& m) const {
	Matrice rezultat(m.nrLinii, m.nrColoane);
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j)
			rezultat.elemente[i][j] = this->elemente[i][j] - m.elemente[i][j];
	}
	return rezultat;
}
Matrice Matrice::operator*(const Matrice& m) const {
	Matrice rezultat(m.nrLinii, m.nrColoane);
	for (int i = 0; i < nrLinii; i++) {
		for (int j = 0; j < nrColoane; j++) {
			rezultat.elemente[i][j] = 0;
			for (int k = 0; k < nrLinii; k++) {
				rezultat.elemente[i][j] += this->elemente[i][k] * m.elemente[k][j];
			}
		}
	}
	return rezultat;
}

Matrice& Matrice::operator+=(const Matrice& m) {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			this->elemente[i][j] +=  m.elemente[i][j];
		}
	}
	return *this;
}
Matrice& Matrice::operator-=(const Matrice& m) {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			this->elemente[i][j] -= m.elemente[i][j];
		}
	}
	return *this;

}
Matrice& Matrice::operator*=(const Matrice& m) {
	for (int i = 0; i < nrLinii; i++) {
		for (int j = 0; j < nrColoane; j++) {
			this->elemente[i][j] = 0;
			for (int k = 0; k < nrLinii; k++) {
				this->elemente[i][j] += this->elemente[i][k] * m.elemente[k][j];
			}
		}
	}
	return *this;
}

bool Matrice::operator!=(const Matrice& m)const {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			if (this->elemente[i][j] != m.elemente[i][j])
				return true;
		}
	}
	return false;
}

bool Matrice::operator==(const Matrice& m)const {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			if (this->elemente[i][j] != m.elemente[i][j])
				return false;
		}
	}
	return true;
}

Matrice& Matrice::operator++() {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			if (i == j)
				this->elemente[i][j]++;
		}
	}
	return *this;
}
Matrice& Matrice::operator++(int dummy) {
	Matrice old(nrLinii, nrColoane);
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			if (i == j)
				old.elemente[i][j] = this->elemente[i][j];
		}
	}
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			if (i == j)
				this->elemente[i][j]++;
		}
	}
	return old;
}

Matrice& Matrice::operator--() {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			if (i == j)
				this->elemente[i][j]--;
		}
	}
	return *this;
}
Matrice& Matrice::operator--(int dummy) {
	Matrice old(nrLinii, nrColoane);
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			old.elemente[i][j] = this->elemente[i][j];
		}
	}
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) {
			this->elemente[i][j]--;
		}
	}
	return old;
}

ostream& Matrice::operator<<(ostream& o) const {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j)
			o << this->elemente[i][j] << "\t";
		o << endl;
	}
	return o;
}
istream& Matrice::operator>>(istream& is) {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j)
			is >> this->elemente[i][j];
	}
	return is;
}

int* Matrice::operator[](int index) const {
	return elemente[index];
}
