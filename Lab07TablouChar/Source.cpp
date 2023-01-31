#include "Tablou.h"
#include "Tablou.cpp"
#include<iostream>
using namespace std;

int main() {
	/*
	Tablou<int> t(5);
	t.operator>>(cin);
	t.operator<<(cout);
	cout << t.operator[](3)<<endl;
	*/
	Tablou<char> c(5);
	c.operator>>(cin);
	c.operator<<(cout);

}