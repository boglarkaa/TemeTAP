#include "Stack.h"
#include<iostream>
using namespace std;

ArrayStack::ArrayStack(int max) : top(0), max(max) {
	this->vector = new int [max];
	/*for (int i = 0; i < max; ++i)
		vector[i] = new int;*/
}

ArrayStack::ArrayStack(const ArrayStack& a)
	: max(a.max), top(a.top), vector(a.vector) {}

ArrayStack::~ArrayStack() {
	max = -1;
	top = -1;
	delete[] vector;
}

ArrayStack& ArrayStack::operator=(const ArrayStack& a) {
	this->max = a.max;
	this->top = a.top;
	this->vector = a.vector;
    return *this;
}

bool ArrayStack::isEmpty() {
    if (this->top == 0)
        return true;
    return false;
}
bool ArrayStack::isFull() {
    if (this->top == this->max)
        return true;
    return false;
}
int ArrayStack::peek() {
    if (!isEmpty())
    return this->vector[this->top - 1];
}
int ArrayStack::pop() {
    if (!isEmpty())
    {
        this->top = this->top - 1;
        return this->vector[this->top];
    }
}
void ArrayStack::push(int element) {
    if (!isFull())
    {
        this->vector[this->top] = element;
        this->top = this->top + 1;
    }
}
void ArrayStack::print() {
    cout << "Stiva este: ";
    for (int i = 0; i < top; ++i) {
        cout << vector[i] << " ";
    }
    cout << "\n";
}