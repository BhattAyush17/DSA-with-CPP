#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};

class CDLL{
    private:
    node *start;
    public:
    CDLL(); // default constructor
    CDLL(CDLL &); // copy constructor
    ~CDLL(); // destructor
    CDLL & operator=(CDLL &); // copy assignment operator
    void insertAtStart(int data);
    void insertAtEnd(int data);
    node * search(int data);
    void insertAfter(node *temp, int data);
    void deleteFirst();
    void deleteLast();
    void delnode(int data);

};

CDLL &CDLL :: operator=(CDLL &d){
    if(this==&d) return *this;
    while(start) deleteFirst();
    node *temp ;
    if(d.start==NULL){
        start=NULL;
    }
    else{
        temp=d.start;
        do{
            insertAtEnd(temp->item);
            temp=temp->next;
        }while(temp!=d.start);
    }
    return *this;
}

CDLL::CDLL(){ // default constructor
    start = NULL;
}
CDLL::CDLL(CDLL &d){  // copy constructor
    start = NULL;
    node *temp = d.start;
    if(temp != NULL){
        do{
            insertAtStart(temp->item);
            temp = temp->next;
        }while(temp != d.start);
    }
}

CDLL::~CDLL(){ // destructor
   while(start)
   deleteFirst();
} 
// Removed duplicate copy-assignment operator (implementation already defined earlier)

void CDLL::insertAtStart(int data){
    node *n = new node;
    n->item = data;
    if(start == NULL){
        start = n;
        n->next = n;
        n->prev = n;
    }else{
        node *last = start->prev;
        n->next = start;
        n->prev = last;
        last->next = n;
        start->prev = n;
        start = n;
    }
}
void CDLL::insertAtEnd(int data){
    node *t = new node;
    t->item = data;
    if(start == NULL){
        start = t;
        t->next = t;
        t->prev = t;
    }
    else{
        t->prev = start->prev;
        t->next = start;
        start->prev->next = t;
        start->prev = t;
    }
}
node * CDLL::search(int data){
    node *temp = start;
    if(temp == NULL) 
    return NULL;
    do{
        if(temp->item == data) 
        return temp;
        temp = temp->next;
    }
    while(temp != start);
    return NULL;
}
void CDLL::insertAfter(node *temp, int data){
    if(temp==NULL){
        insertAtStart(data);
    }
    else{
        node *n = new node;
        n->item = data;
        n->next = temp->next;
        n->prev = temp;
        temp->next->prev = n;
        temp->next = n;
    }
}
void CDLL::deleteFirst(){
    if(start == NULL) return;
    if(start->next == start){
        delete start;
        start = NULL;
    }
    else{
        node *last = start->prev;
        last->next = start->next;
        start->next->prev = last;
        delete start;
        start = last->next;
    }
}
void CDLL::deleteLast(){
    if(start == NULL) return;
    if(start->next == start){
        delete start;
        start = NULL;
    }
    else{
        node *last = start->prev;
        last->prev->next = start;
        start->prev = last->prev;
        delete last;
    }
}

void CDLL :: delnode(node *temp){
    if(start == NULL || temp==NULL){
        cout<<"Deletion cannot be performed";
        return;
    }
    else{
    }
    if(start->next == start && start==temp){
        delete temp;
        start = NULL;
    }
    else{
        if(start == temp){
           deleteFirst();
        }
        else{
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }
}