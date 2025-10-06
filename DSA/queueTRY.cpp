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
    bool isEmpty();
    bool isFull();
    int getFront();
    int getBack();

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
        fr++;


    }
}
queue::~queue(){
    delete []ptr;
}

queue::queue(const queue &q){
    capacity = q.capacity;
    fr = q.fr;
    rr = q.rr;
    ptr = new int [capacity];
    for(int i=0; i<capacity; i++)
    ptr[i] = q.ptr[i];

    }

bool queue :: isEmpty(){
    return (fr == -1);
}
bool queue :: isFull(){
    return (rr == capacity - 1);
}

int queue :: getFront(){
    if(isEmpty()){
        throw INVALID_QUEUE_STATE;
    }
    return ptr[fr];
}

int queue :: getBack(){
    if(isEmpty()){
        throw INVALID_QUEUE_STATE;
    }
    return ptr[rr];
}
