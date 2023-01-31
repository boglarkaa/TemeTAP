#include "Stack.h"
#include<iostream>
using namespace std;

int main() {

	ArrayStack as(50);
	as.push(10);
	as.push(39);
	as.print();
	as.pop();
	as.print();
	cout << as.peek() << endl;
	ListStack ls;
	ls.push(30);
	ls.push(47);
	ls.print();
	ls.pop();
	ls.print();
	cout << ls.peek() << endl;
	return 0;
}