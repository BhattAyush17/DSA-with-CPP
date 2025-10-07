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
    Queue(const Queue&);
    Queue & operator=(const Queue &q);
    int count();

    
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
  fr = rr = NULL;
  node *t = q.fr;
  while(t!=NULL){
    insert(t->data);
    t=t->next;
  }
}

Queue &Queue:: operator =(const Queue &q){
    while(fr!=NULL){
       del();
    }
  node *t = q.fr;
  while(t!=NULL){
    insert(t->data);
    t=t->next;
  }
}
int Queue :: count(){
    int c=0;
    node *t = fr;
    while(t!=NULL){
        c++;
        t=t->next;
    }
    return c;
}
