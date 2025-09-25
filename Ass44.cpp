#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};
class DLL
{
    private:
       node *start;
    public:
    DLL(); // constructor declaration
    void insertAtStart(int); 

};

DLL::DLL(){
    start = NULL;
    
}
void DLL::insertAtStart(int data) {
    node *temp = new node;
    temp->prev = NULL;
    temp->item = data;
    temp->next = start;
    if (start != NULL) {
        start->prev = temp;
    }
    start = temp;
}

void DLL::insertAtLast(int data){
    node *temp=new node;
   
    temp->item = data;
    temp->next=NULL;
    if(start == NULL)
        start = temp;
    else {
        node *current = start;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
        temp->prev = current;
    }
}