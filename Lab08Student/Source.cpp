#include"Student.h"
#include<iostream>
#include<fstream>
#include<string>
#include<set>
using namespace std;

int main(){
	set<Student> studenti;
	set<Student>::iterator it;

	set<Student, ComparaNume> studNume;
	set<Student, ComparaNume>::iterator it2;

	set<Student, ComparaNota> studNota;
	set<Student, ComparaNota>::iterator it3;

	ifstream readFile("readfile.txt");
	ofstream writeFile("writefile.txt");

	string CNP, nume;
	float notaLab, notaEx;
	unsigned nrAbs, nrStudenti;

	readFile >> nrStudenti;
	for(unsigned i=0; i<nrStudenti; ++i){
		readFile >> CNP >> nume >> notaLab >> notaEx >> nrAbs;
		Student s(CNP, nume, notaLab, notaEx, nrAbs);
		studenti.insert(s);
		studNume.insert(s);
		studNota.insert(s);
	}

	for (it = studenti.begin(); it != studenti.end(); ++it) {
		writeFile << it->CNP << " " << it->nume << " " << it->notaLab << " " << it->notaEx << " " << it->nrAbs << endl;
	}

	cout << "Studenti sortati dupa nume\n";
	for (it2 = studNume.begin(); it2 != studNume.end(); ++it2) {
		cout << it2->CNP << " " << it2->nume << " " << it2->notaLab << " " << it2->notaEx << " " << it2->nrAbs << endl;
	}
	cout << endl;

	cout << "Studenti sortati dupa nota\n";
	for (it3 = studNota.begin(); it3 != studNota.end(); ++it3) {
		cout << it3->CNP << " " << it3->nume << " " << it3->notaLab << " " << it3->notaEx << " " << it3->nrAbs << endl;
	}
	cout << endl;

	unsigned limInf;
	cout << "Introduceti limita inferioara ";
	cin >> limInf;
	unsigned limSup;
	cout << "Introduceti limita superioara ";
	cin >> limSup;

	cout << "Studentii cu nota intre " << limInf << " si " << limSup << " sunt\n";
	for (it = studenti.begin(); it != studenti.end(); ++it) {
		if (it->notaLab >= limInf && it->notaLab <= limSup) {
			cout << it->nume << endl;
		}
	}

	cout << "\nStudentii cu mai putin de 11 absente sunt\n";
	for (it = studenti.begin(); it != studenti.end(); ++it) {
		if (it->nrAbs<11) {
			cout << it->nume << endl;
		}
	}


	Student cautat;
	cautat.operator>>(cin);
	it = studenti.find(cautat);

	if (it != studenti.end())
		cout << "A fost gasit";

	readFile.close();
	writeFile.close();
	return 0;
}