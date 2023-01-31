#include "Triunghi.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	Isoscel i(5, 3, 5);
	cout << "\t\tArie\tPerimetru" << endl;
	cout << "Isoscel\t\t";
	cout << i.arie() << "\t" << i.perimetru() << endl;
	Echilateral e(3, 3, 3);
	cout << "Echilateral\t";
	cout << e.arie() << "\t" << e.perimetru() << endl;
	Dreptunghic d(3, 4, 5);
	cout << "Dreptunghic\t";
	cout << d.arie() << "\t" << d.perimetru() << endl;
	DreptunghicIsoscel di(1, 1, sqrt(2));
	cout << "DreptIsoscel\t";
	cout << di.arie() << "\t" << di.perimetru() << endl;
	return 0;

}