#pragma once
#ifndef COADASTATICA_H_INCLUDED
#define COADASTATICA_H_INCLUDED

using namespace std;
class Queue {
public:
	virtual void enqueue(int) = 0;
	virtual int dequeue() = 0;
	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;
	virtual void print() = 0;

	class Queue_Overflow {};
	class Queue_Underflow{};

};
class Array_Queue :public Queue {
private:
	int* vector;
	int front;
	int end;
	int max;
public:
	Array_Queue(int max = 100);
	Array_Queue(const Array_Queue&);
	~Array_Queue();
	virtual void enqueue(int);
	virtual int dequeue();
	virtual bool isEmpty();
	virtual bool isFull();
	virtual void print();
};
#endif