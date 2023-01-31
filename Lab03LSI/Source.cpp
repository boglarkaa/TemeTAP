#include"LSI.h"
#include<iostream>
using namespace std;

int main() {

	Lsi list;
	list.insertFirst(10);
	list.insertFirst(20);
	list.insertFirst(30);
	cout << "Lista initiala\n";
	list.printList();
	list.insertEnd(50);
	cout << "Lista dupa adaugarea unui element pe ultima pozitie\n";
	list.printList();
	list.deleteFirst();
	cout << "Lista dupa stergerea primului element\n";
	list.printList();
	list.insertFirst(40);
	cout << "Lista dupa inserarea unui element pe prima pozitie\n";
	list.printList();
	list.deleteEnd();
	cout << "Lista dupa stergerea ultimului element\n";
	list.printList();

	return 0;
}