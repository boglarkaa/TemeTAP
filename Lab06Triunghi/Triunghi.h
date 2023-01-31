#pragma once
#ifndef _TRIUNGHI_H
#define _TRIUNGHI_H

class Triunghi {
protected:
	double laturaA, laturaB, laturaC;
public:
	Triunghi(double laturaA = -1, double laturaB = -1, double laturaC = -1);
	Triunghi(const Triunghi&);
	~Triunghi();
	virtual double arie() = 0;
	virtual double perimetru() = 0;
};

class Dreptunghic :public Triunghi {
public:
	Dreptunghic(double laturaA = -1, double laturaB = -1, double laturaC = -1);
	Dreptunghic(const Dreptunghic&);
	~Dreptunghic();
	double arie() override;
	double perimetru() override;
};

class Isoscel :public Triunghi {
public:
	Isoscel(double laturaA = -1, double laturaB = -1, double laturaC = -1);
	Isoscel(const Isoscel&);
	~Isoscel();
	double arie() override;
	double perimetru() override;
};
class Echilateral :public Isoscel {
public:
	Echilateral(double laturaA = -1, double laturaB = -1, double laturaC = -1);
	Echilateral(const Echilateral&);
	~Echilateral();
	double arie() override;
	double perimetru() override;
};



class DreptunghicIsoscel :public Isoscel, public Dreptunghic {
public:
	DreptunghicIsoscel(double laturaA = -1, double laturaB = -1, double laturaC = -1);
	DreptunghicIsoscel(const DreptunghicIsoscel&);
	~DreptunghicIsoscel();
	double arie() override;
	double perimetru() override;
};
#endif