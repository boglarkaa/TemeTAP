#include "Persoana.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	//Persoana persoana;
	Student student(1234, "Charlie", "mail", 10);
	Profesor profesor(123, "Fred", "mail", "Mate");
	Angajat angajat(12, "George", "mail", "Info");
	cout << student.detalii();
	cout << profesor.detalii();
	cout << angajat.detalii();

	return 0;
}