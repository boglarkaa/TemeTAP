#pragma once
#ifndef _LSI_H_
#define _LSI_H_

class Node {
private:
	Node* succesor;
	int info;

public:
	Node(int);
	~Node();
	friend class Lsi;
};

class Lsi {
private:
	Node* list;
	
public :
	Lsi();
	~Lsi();
	void printList();
	void insertFirst(int);
	void insertEnd(int);
	void deleteFirst();
	void deleteEnd();
};

#endif // !_LSI_H_

