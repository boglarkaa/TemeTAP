#include "LSI.h"
#include "LSI.cpp"
#include<iostream>
using namespace std;
int main() {
	LSI<int> list;
	list.insertFirst(10);
	list.insertFirst(20);
	list.printList();
	list.insertEnd(30);
	list.deleteFirst();
	list.printList();

	LSI<char> charList;
	charList.insertFirst('a');
	charList.insertEnd('b');
	charList.printList();
}