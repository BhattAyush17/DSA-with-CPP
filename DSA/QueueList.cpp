#include<iostream>
#include<stdio.h>
using namespace std;
#define EMPTY_LIST -1
#define INVALID_QUEUE_STATE -2

struct node {
    int data;
    node* next;
};

class Queue {
private:
    node* fr;
    node* rr;

public:
    Queue();
    ~Queue();
    void insert(int data);
    int getrear();
    bool isEmpty();
    int getfront();
    void del();
    Queue(Queue&);
    ~Queue();

    
};

Queue :: ~Queue(){
    node *temp;
    while(fr!=NULL){
       del();
    }
}

Queue::Queue(){
    fr = NULL;
    rr=NULL;
}

void Queue::insert(int data) {
 
}

int Queue :: getfront(){
    if(fr==NULL){
        return EMPTY_LIST;
    } else {
        return fr->data;
    }
}

int Queue :: getrear(){
    if(rr==NULL){
        return EMPTY_LIST;
    } else {
        return rr->data;
    }
}

void Queue :: del(){
    if(fr==NULL){
        throw EMPTY_LIST;
    }if(fr==rr){
        delete fr;
        fr=NULL;
        rr=NULL;
    }else{
        node *t = fr;
        fr=fr->next;
        delete t;
    }
}

Queue :: Queue(const Queue &q){
    if(q.front == NULL){
        front 
    }
}
}