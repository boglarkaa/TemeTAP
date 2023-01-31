#pragma once
#ifndef _DREAPTA_H_
#define _DREAPTA_H_

class Dreapta {
private:
	int m, n;
	//friend class Punct;
public:
	Dreapta(int m = 1, int n = 0);
	Dreapta(const Dreapta&);
	~Dreapta();
	int getN() { return n; };
	int getM() { return m; };
	void setN(int n) { this->n = n; };
	void setM(int m) { this->m = m; };
};

class Punct {
private:
	int x, y;
	static Dreapta d;
	friend class Dreapta;
	static unsigned contorSemiplanPoz,
					contorSemiplanNeg,
					contorDreapta;
public:
	Punct(int x=0, int y=0);
	Punct(const Punct&);
	~Punct();
	int getX() { return x; };
	int getY() { return y; };
	friend float distanta(Punct p1, Punct p2);
};

#endif // !_DREAPTA_H_
