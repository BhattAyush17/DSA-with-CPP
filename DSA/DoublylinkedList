#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};

class DLL{
    private:
    node *start;
    public:
    DLL(); // constructor declaration
    void insertAtStart(int data);
    void insertAtEnd(int data);
    node* search(int data);
    void deletefirst();
    void deleteLast();
    void deleteNode(int data);
}
DLL::DLL(){
    start = NULL;
}
void DLL::insertAtStart(int data){
    node *temp = new node;
    temp->prev = NULL;
    temp->item = data;
    temp->next = start;
    if (start != NULL) {
        start->prev = temp; // putting the new node(temp) at start's prev
    }
    start = temp;
}
void DLL::insertAtEnd(int data){
   node *n1 = new node;
  
   n1->item =data ;
   n1->next =NULL ;
   if(start==NULL){
       n1->prev=NULL;
         start=n1;
   }else{
   while(t->next!=NULL){
       t=t->next;
   }
   t->next=n1;
   n1->prev=t;
}
}
node* DLL::search(int data){
    node *temp = start;
    while(temp){
        if(temp->item == data){
            return temp;
        }
        temp = temp->next; // move to the next node
    }
    return NULL; // return NULL if not found
}
void deletefirst(){
node *r;
if(start!=NULL){
    r=start;
    start=r->next;
    start->prev=NULL;
    delete r;
}
}
 
void DLL::deleteLast(){
    node *s;
    if( start != NULL){
        s=start;
        start=start->next;
        start->prev=NULL;
        delete s;
    }
}
void DLL::deleteLast(){
    node *t;
    t=start;
    if(start==NULL){
cout<<"List is empty"<<endl;
        return;
    }
    else{
        if(start->next==NULL){
           
            delete start;
            start=NULL;
        }else{
            t=start;
        while(t->next!=NULL){
            t=t->next;
        }
        t->prev->next=NULL;
        delete t;
    }
}
void DLL::deleteNode(int data){
    if(start==NULL)
    cout<<"List is empty"<<endl;
    else if(start==t){
        deletefirst();
        else if (start==t)
        deleteLast();
        else{
            t->next->prev=t->prev;
            t->prev->next=t->next;
            delete t;
        }
    }
}
