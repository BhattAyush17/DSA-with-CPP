#include <iostream>
#include<stdio.h>
using namespace std;
#define INVALID_QUEUE_STATE -1
#define UNDERFLOW -2
#define OVERFLOW -3

class queue{
    private:
      int capacity;
      int front, rear;
      int *ptr;
    public:
      queue(int);
      void insert(int data);
      bool isFull();
      int getFront();
      int getBack();
      bool isEmpty();
      void del();
      ~queue();
      int count ();
      queue(const queue &q);
      queue & operator=(const queue &q);
         
      
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

bool queue::isFull(){
    return (front==0 && rear ==capacity-1 || rear+1==front);

}

int queue :: getFront(){

    if(capacity ==0)
    throw INVALID_QUEUE_STATE;
       else
        return ptr[front];
    

}

int queue :: getBack(){
    if(capacity ==0)
    throw INVALID_QUEUE_STATE;
       else
        return ptr[rear];

}

bool queue :: isEmpty(){
    return (front == -1);
}

void queue :: del() {
    if (isEmpty()) {
        throw UNDERFLOW;
    }

    if (front == rear) {
        front = rear = -1;
    }
    else if (front == capacity - 1) {
        front = 0;
    }
    else {
        front++;
    }
}


queue :: ~queue(){
    delete []ptr;
}

int queue :: count(){
    if(front ==-1)
    return 0;
    if(rear>front)
    return rear-front+1;
    else if(front>rear)
    return capacity-front+rear+1;
    else
    return 1;
}

queue :: queue(const queue &q){
    capacity =q.capacity;
    front = q.front;
    rear = q.rear;

    

}

queue & queue::operator=(const queue &q){
    if(ptr)
    delete[]ptr;
    capacity =q.capacity;
    front=q.front;
    rear = q.rear;
    ptr=new int[capacity];
    for(int i=0; i<capacity; i++)
    ptr[i]=q.ptr[i];
    return *this;
}
