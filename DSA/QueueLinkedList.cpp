// Queue using singly Linked List
#include<iostream>
using namespace std;
#define EMPTY_LIST -1

struct node{
    int data;
    node* next;
};

class Queue{
    private:
    node* rear;
    node* front;
    public:
    Queue();
    void insert(int data);
    int getrear();
    int getfront();
    int delfront();
    ~Queue();
 

Queue ::Queue()
    {
        rear = NULL;
        front = NULL;
    }

    void insert(int data){
        node * temp = new node();
        temp->data =data;
        temp->next = NULL;
        if(rear== NULL){
            rear = temp;
            front = temp;

        }
    }
    int Queue:: getfront(){
        if(front == NULL){
            throw EMPTY_LIST;
        }else{
        return front->data;
        }

    }

    int Queue :: getrear(){
        if(rear ==  NULL){
            return EMPTY_LIST;
        }else{
            return rear->data;
        }
    }

    int Queue :: delfront(){
        if(front == NULL){
            throw EMPTY_LIST;
        }else{
            
        }
    }

};