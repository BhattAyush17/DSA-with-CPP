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

void stack::reverse() {
    node *t;
    stack s1;
    while (top != NULL) {
        s1.push(peek());  // take top element from old stack
        pop();            // remove it from old stack
    }
    top = s1.top;         // make old stack point to reversed stack
    s1.top = NULL;        // prevent shared pointer issue
}


stack :: stack(const stack &s){
    node *temp;
    s.reverse(); // reverse to maintain order
    temp =s.top;
    while(temp){
        push(temp->item);
        temp = temp->next;
    }
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

int stack::peek(){
if(top==NULL){
    throw EMPTY_STACK;
}
return top->item;
}

void stack::pop(){
      node *r=top;
    if(top!=NULL){
      
        top=top->next;
        delete r;
    }

}