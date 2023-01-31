#include"CoadaStatica.h"
#include<iostream>
int main() {
	Array_Queue q;
	try {
		q.enqueue(10);
		q.enqueue(20);
		q.enqueue(30);
		q.print();
		q.dequeue();
		q.print();
	}
	catch (Array_Queue::Queue_Underflow e) {
		cout << "Coada goala";
	}
	return 0;
}