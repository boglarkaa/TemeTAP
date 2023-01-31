#include "LSI.h"
#include<iostream>
using namespace std;

Node::Node(int info):info(info), succesor(NULL) {}

Node::~Node() {
	this->info = -1;
	this->succesor = NULL;
}