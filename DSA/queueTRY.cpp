// Queue using array
//  queue(int);
//       void insert(int data);
//       bool isFull();
//       int getFront();
//       int getBack();
//       bool isEmpty();
//       void del();
//       ~queue();
//       int count ();
//       queue(const queue &q);
//       queue & operator=(const queue &q);

#include<stdio.h>
#include<iostream>
using namespace std;

#define INVALID_QUEUE_STATE -1

class queue{
    private:
    int capacity;
    int fr , rr;
    int *ptr;
    public:
    queue(int cap);
    void insert(int data);
    ~queue();

};

queue :: queue(int cap){
    capacity = cap;
    fr = -1;
    rr =-1;
    if(cap>0){
        ptr = new int[cap];
    }
        else{
            ptr = NULL;
        }
}

void queue :: insert(int data){
    if(capacity ==0|| rr == -1|| fr == -1){
        throw INVALID_QUEUE_STATE;
    }else{
        ptr[rr+] = data;
        rr+;
        pr++;


    }
}
queue::~queue(){
    delete []ptr;
}
