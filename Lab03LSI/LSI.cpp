#include"LSI.h"
#include<iostream>
using namespace std;

Lsi::Lsi() {
	this->list = NULL;
}

Lsi::~Lsi() {
	this->list = NULL;
}

void Lsi::insertFirst(int newInfo) {
	Node* node = new Node(newInfo);
	if (this->list == NULL)
		this->list = node;
	else {
		node->succesor = this->list;
		node->info = newInfo;
		this->list = node;
	}
}

void Lsi::insertEnd(int newInfo) {
	if (this->list == NULL) {
		this->list = new Node(newInfo);
	}
	else {
		Node* tmp = this->list;
		while (tmp->succesor != NULL) {
			tmp = tmp->succesor;
		}
		Node* lastNode = tmp;
		Node* newNode = new Node(newInfo);
		lastNode->succesor = newNode;
	}
}

void Lsi::deleteFirst() {
	if (this->list == NULL)
		cout << "Empty list" << endl;
	else {
		Node* save = this->list;
		this->list = this->list->succesor;
		delete save;
	}
}

void Lsi::deleteEnd() {
	if (this->list == NULL)
		cout << "Empty list" << endl;
	else {
		Node* tmp = this->list;
		while (tmp->succesor->succesor != NULL) {
			tmp = tmp->succesor;
		}
		Node* last = tmp;
		Node* save = last->succesor;
		last->succesor = NULL;
		delete(save);
	}
}

void Lsi::printList() {
	Node* temp = this->list;
	while (temp != NULL) {
		cout << temp->info << " ";
		temp = temp->succesor;
	}
	cout << endl;
}