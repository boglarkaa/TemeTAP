#include "Banca.h"
#include<iostream>
#include<string>
using namespace std;
int main() {

	//conturi client1
	ContBancar** c1 = new ContBancar * [2];
	c1[0] = new ContBancar("Cont01", 100.0, "RON");
	c1[1] = new ContBancar("Cont02", 350.0, "EUR");

	//conturi client2
	ContBancar** c2 = new ContBancar * [2];
	c2[0] = new ContBancar("Cont01", 250.0, "RON");
	c2[1] = new ContBancar("Cont02", 670.0, "RON");

	//vector clienti
	Client** client = new Client * [2];
	client[0] = new Client("Nume1", "Prenume1", "adresa1", 2, c1);
	client[1] = new Client("Nume2", "Prenume2", "adresa2", 2, c2);

	//banca
	Banca* b = new Banca("Banca", 2, client);

	b->afisareDateBanca();
	cout << endl;

	//operatii
	cout << "\t\tInainte\t\tDupa" << endl;

	cout << "Depunere: \t" << c1[0]->getSuma() << " ";
	c1[0]->depunere(100);
	cout << "\t\t" << c1[0]->getSuma() << endl;

	cout << "Extragere: \t" << c1[1]->getSuma() << " ";
	c1[1]->extragere(100);
	cout << "\t\t" << c1[1]->getSuma() << endl;

	ContBancar* temp(c2[1]);
	int aux = c2[1]->getSuma(); //salv pentru afisare
	cout << "Transfer (s): \t" << c1[0]->getSuma() << " ";
	c1[0]->transfer(*temp, 100);
	c2[1] = temp;
	cout << "\t\t" << c1[0]->getSuma() << endl;
	cout << "Transfer (d): \t" << aux << " ";
	cout << "\t\t" << c2[1]->getSuma() << endl << endl;

	cout << "Dobanda: " << c2[0]->getDobanda() << " pentru " << c2[0]->getSuma() << " RON" << endl;
	cout << "Suma totala: " << c2[0]->getSumaTotala() << " pentru " << c2[0]->getSuma() << " RON cu 0.3% dobanda" << endl;
	cout << endl;

	cout << "Dobanda: " << c1[1]->getDobanda() << " pentru " << c1[1]->getSuma() << " EUR" << endl;
	cout << "Suma totala: " << c1[1]->getSumaTotala() << " pentru " << c1[1]->getSuma() << " EUR cu 0.1% dobanda" << endl;
	cout << endl;

	//pentru a update-a datele din conturi
	client[0]->setCont(c1);
	client[1]->setCont(c2);

	//reafisare dupa operatii
	b->afisareDateBanca();

	return 0;
}