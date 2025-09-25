// ASSIGNMENT 48
#include <iostream>
#include <stdio.h>
using namespace std;
#define EMPTY_STACK -1

struct node{
    int item;
    node *next;
};

class stack {
    private:
    node *top;
public:
    stack();
    void push(int data);
    int peek();
    void pop();
    bool isEmpty();
    stack(const stack &s); // copy constructor
    ~stack();
    void reverse();
};

stack::~stack(){
    while(top)
        pop();  

}

void stack:: reverse(){
    node *t, 

}

stack :: stack(const stack &s){
    node *temp;
    temp
}


stack::stack(){
    top = NULL;
}

void stack:: push(int data){
    node *temp = new node;
    temp->item = data;
    temp->next = top;
    top = temp;
}