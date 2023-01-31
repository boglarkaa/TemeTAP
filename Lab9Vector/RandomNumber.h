#pragma
#ifndef _RANDOMNUMBER_H
#define _RANDOMNUMBER_H
#include <cstdlib>
class RandomNumber {
	int limsup, liminf;
public:
	RandomNumber(int liminf, int limsup)
		:liminf(liminf), limsup(limsup){}
	int operator() () {
		return (rand() % (limsup - liminf + 1) + liminf);
	}
};

#endif // !_RANDOMNUMBER_H
