
#pragma once //include fisierul doar o data
#ifndef STIVASTATICA_H_INCLUDED
#define STIVASTATICA_H_INCLUDED
using namespace std;
class Stack {//se declara clasa
public:
    virtual void push(int) = 0;//metoda pur virtuala <=> metoda abstracta
    virtual int pop() = 0;
    virtual int peek() = 0;
    virtual bool isempty() = 0;
    virtual bool isfull() = 0;
    virtual void print() = 0;

    class Stack_Overflow {};//supradepasire;
    class Stack_Underflow {};//subdepasire;

};
class Array_Stack :public Stack {
private:
    int* vector;
    int top;
    int max;
public:
    Array_Stack(int max = 100);
    Array_Stack(const Array_Stack&);//
    ~Array_Stack();//destructor
    virtual void push(int);
    virtual int pop();
    virtual int peek();
    virtual bool isempty();
    virtual bool isfull();
    virtual void print();
};

#endif // STIVASTATICA_H_INCLUDED
