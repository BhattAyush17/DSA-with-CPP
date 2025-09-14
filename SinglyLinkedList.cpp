#include<iostream>
#include<stdio.h>
using namespace std;

class ssl{
    private:
    node *start;
    public:
    ssl(){
        void insertAtStart(int);
        void insertAtEnd(int);
        void insertAfter(node*, int);
        node* search(int);
    };
    ssl::ssl(){
        start = NULL;
    }
    void ssl::insertAtStart(int data){
        node *newNode = new node;
        newNode->data = data;
        newNode->next = start;
        start = newNode;
    }
}