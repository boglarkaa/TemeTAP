#include "Stack.h"
#include<iostream>
using namespace std;

ListStack::ListStack(Node* top): top(top) {
}

ListStack::ListStack(const ListStack& a)
    : top(a.top){}

ListStack::~ListStack() {
    top = NULL;
}

ListStack& ListStack::operator=(const ListStack& a) {
    this->top = a.top;
    return *this;
}

bool ListStack::isEmpty() {
    if (top == NULL)
        return true;
    return false;
}

int ListStack::peek() {
    if (!isEmpty())
        return top->info;
}
int ListStack::pop() {
    Node* node;
    if (!isEmpty())
    {
        node = top;
        top = top->successor;
        return node->info;
    }
}
void ListStack::push(int element) {
    Node* node=new Node(element);
    node->info = element;
    node->successor = top;
    top = node;

}
void ListStack::print() {
    cout << "Stiva este: ";
    Node* temp=top;
    while (temp != NULL) {
        cout << temp->info<<" ";
        temp = temp->successor;
    }
    cout << endl;
}