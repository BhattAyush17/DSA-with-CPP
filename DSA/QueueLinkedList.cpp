// Queue using doubly Linked List
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};

class Queue{
    private:
    node* rear;
    node* front;
    public:
    Queue();
    void insert(int data);
 

Queue ::Queue()
    {
        rear = NULL;
        front = NULL;
    }

    void insert(int data){
        node * temp = new node();
        temp->data =data;
        temp->next = NULL;
        temp-> prev = NULL;
        if(rear== NULL){
            rear = temp;
            front = temp;

        }
    }
};