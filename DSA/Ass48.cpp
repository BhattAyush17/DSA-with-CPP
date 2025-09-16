// Stack using LinkedList
#include <iostream>
#include<stdio.h>
using namespace std;
#define EMPTY_STACK -1


struct node{
    int item;
    node *next;
    
};

class stack{
    private:
    node *top;
    public:
    stack();
    void push(int x);
    int peek();
    int pop();
    ~stack();
    stack &operator=(stack &c); // assignment operator
    stack(stack &s); // copy constructor
    void reverse(); /*this is made to reverse the order of stack as used for using copy constructor,   becoz using it will push the first element at the last*/

};
stack::stack(){
    top=NULL;
}

stack &stack::operator=(stack &c){
    if(top!=NULL){
        while(top){
            pop();
        }
    }
    node *temp;
    c.reverse(); // reverse the original stack to maintain its order
    temp=c.top;
    while(temp){
        push(temp->item);
        temp=temp->next;  
    }   
    c.reverse(); // reverse the original stack to maintain its order
    return *this;
}





// this whole will reverse the order of elements in stack
stack::stack(stack &s){  /*copy constructor*/
    // node *t;
    // t=s.top;
    // while(t){
    //     push(t->item);
    //     t=t->next;
    // }

    // correct approach
    node *t;
    s.reverse(); // reverse the original stack to maintain its order
    t=s.top;
    while(t){
        push(t->item);
        t=t->next;  

    }
    s.reverse(); // reverse the original stack to maintain its order
    }

    void stack:: reverse(){  /*copy constructor ke liye banaya hai*/
        node *temp;
    stack s1;
    while(top){
        s1.push(peek());
        pop();
    }
    top = s1.top;
    s1.top=NULL; // Prevent destructor from deleting nodes
    }


void stack::push(int data){
    node *n = new node;
   n->item=data;
   n->next=top;
   top=n;
}

int stack::peek(){
   if(top==NULL){
    throw EMPTY_STACK;
   }
   return top->item;

}

int stack::pop(){
    if(top==NULL){
        throw EMPTY_STACK;
    }
    node *temp = top;
    int value = top->item; // get the value before deleting
    top = top->next;
    delete temp;
    return value; // return the popped value
}

stack::~stack(){
    while(top!=NULL){
        pop();
    }
    delete top;

}
