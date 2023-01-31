#include "CoadaStatica.h"
#include<iostream>
using namespace std;
Array_Queue::Array_Queue(int max) {
	this->max = max;
	this->front = 0; 
	this->end = 0;
	this->vector = new int[max];
}

Array_Queue::Array_Queue(const Array_Queue& param) {
	this->max = param.max;
	this->front = param.front;
	this->end = param.end;
	for (int i = front; i < end; i++) {
		this->vector[i] = param.vector[i];
	}
}
Array_Queue::~Array_Queue() {
	this->front = 0;
	this->end = 0;
	this->max = 0;
	delete[] this->vector;
}

bool Array_Queue::isEmpty() {
	if (this->front == this->end)
		return true;
	return false;
}

bool Array_Queue::isFull() {
	if (this->end == this->max)
		return true;
	return false;
}

void Array_Queue::enqueue(int element) {
	if (isFull()) throw Queue_Overflow();
	else {
		this->vector[this->end] = element;
		this->end = this->end + 1;
	}

}

int Array_Queue::dequeue() {
	if (isEmpty()) throw Queue_Underflow();
	else {
		int el = this->vector[this->front];
		this->front = this->front + 1;
		return el;
	}
}

void Array_Queue::print() {
	cout << "Coada este: ";
	for (int i = front; i < end; i++) {
		cout << vector[i] << " ";
	}
	cout << "\n";
}
