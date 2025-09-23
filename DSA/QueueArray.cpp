#include <iostream>
#include<stdio.h>
using namespace std;
#define INVALID_QUEUE_STATE -1

class queue{
    private:
      int capacity;
      int front, rear;
      int *ptr;
    public:
      queue(int);
      void insert(int data);
      bool isFull();
};
queue::queue(int cap){
    capacity = cap;
    front = -1;
    rear = -1;
    if(cap>0)
    ptr = new int[cap];
    else 
    ptr = NULL;
}

void queue::insert(int data){
    if(capacity == 0){
        throw INVALID_QUEUE_STATE;
    }
}

bool isFull(){
    
}