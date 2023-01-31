#pragma once
#ifndef _STACK_H
#include<iostream>
using namespace std;
class AbstractStack {
public:
	virtual void push(int) = 0;
	virtual int pop() = 0;
	virtual int peek() = 0;
	virtual bool isEmpty() = 0;
	virtual void print() = 0;
};

class ArrayStack : public AbstractStack{
private:
	int* vector;
	int top;
	int max;
public:
	ArrayStack(int max=100);
	ArrayStack(const ArrayStack&);
	~ArrayStack();
	ArrayStack& operator= (const ArrayStack&);
	void push(int) override;
	int pop()override;
	int peek() override;
	bool isEmpty() override;
	bool isFull();
	void print() override;
};


class ListStack : public AbstractStack {
public:
	class Node {
	public:
		int info;
		Node* successor;
	public:
		Node(int info = 0, Node* succ = NULL) :info(info), successor(succ) { }
	};
private:
	Node* top;
public:
	ListStack(Node* top=NULL);
	ListStack(const ListStack&);
	~ListStack();
	ListStack& operator= (const ListStack&);
	void push(int) override;
	int pop()override;
	int peek() override;
	bool isEmpty() override;
	void print();
};

#endif
