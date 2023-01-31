#include"StivaStatica.h"
#include<iostream>
using namespace std;
Array_Stack::Array_Stack(int max) {//se definesc toate metodele clasei
    this->max = max;
    this->top = 0;
    this->vector = new int[max];
}
Array_Stack::Array_Stack(const Array_Stack& param) {
    this->max = param.max;
    this->top = param.top;
    this->vector = new int[max];
    for (int i = 0; i < top; ++i)
        this->vector[i] = param.vector[i];
}
Array_Stack::~Array_Stack() {
    this->top = 0;
    this->max = 0;
    delete[] this->vector;
}
bool Array_Stack::isempty() {
    if (this->top == 0)
        return true;
    return false;
}
bool Array_Stack::isfull() {
    if (this->top == this->max)
        return true;
    return false;
}
int Array_Stack::peek() {
    if (isempty()) throw Stack_Underflow();
    else return this->vector[this->top-1];
}
int Array_Stack::pop() {
    if (isempty())throw Stack_Underflow();
    else {
        this->top = this->top - 1;
        return this->vector[this->top];
    }
}
void Array_Stack::push(int element) {
    if (isfull()) throw Stack_Overflow();
    else {
        this->vector[this->top] = element;
        this->top = this->top + 1;
    }
}
void Array_Stack::print() {
    cout << "Stiva este: ";
    for (int i = 0; i < top; ++i) {
        cout << vector[i] << " ";
    }
    cout << "\n";
}
