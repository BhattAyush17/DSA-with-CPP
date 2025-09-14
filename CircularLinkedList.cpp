#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int item;
    node *next;
};
class CLL{
    private:
    node *last;
    public:
    CLL();
    CLL(CLL &c); /*copy constructor*/
    CLL& operator=(const CLL &c); /*assignment operator*/
    void insertAtStart(int data);
    void insertAtEnd(int data);
    void search(int data);
    void insertAfter(int node*, data);
    void DeleteFirst();
    void DeleteLast();
    void delnode(node *t); /*deleting specific node*/
    ~CLL();
    CLL(const CLL &c); /*copy constructor*/
};
CLL::CLL(){
    last=NULL;
}
void CLL::insertAtStart(int data){
    node *n = new node;
    n->item=data;
    if(last==NULL){
       n->next=n;
       last=n;
    }
    else
    {
        n->next=last->next;
        last->next=n;
    }
}
void CLL::insertAtEnd(int data){
    node *n = new node;
    n->item=data;
    if(last==NULL){
        n->next=n;
        last=n;
      
    }else{
        n->next=last->next;
        last->next=n;
        last=n;
    }
}

node *CLL::search(int data)
 {
    node *t;
    if(last==NULL)
        return NULL;
    t=last->next;
    while(t!=last)
    {
        if(t->item==data)
            return t;
        t=t->next;
    }
    if(last->item==data)
        return last;
    else
    return NULL;
 }

CLL:: CLL(CLL &c){ /*copy constructor*/
    node *temp;
    if(c.last == NULL){
        last = NULL;
    }
    else{
        temp=c.last->next;
        while(temp!=c.last)
        {
            insertAtEnd(temp->item);
            temp=temp->next;
        }
        insertAtEnd(c.last->item);
    }
}
void CLL::operator=(const CLL &c) /*copy assignment operator*/
{
    while(last)
        DeleteFirst();

        node *temp;
        if(c.last==NULL)
            last=NULL;
        else{
            temp=c.last->next;
            while(temp!=c.last)
            {
                insertAtEnd(temp->item);
                temp=temp->next;
            }
            insertAtEnd(c.last->item);
        }
        return *this;
}

void CLL::insertAfter(node *t, int data)
 {
    node *n;
    if(t==NULL)
       insertAtEnd(data);
        else if(t->next==NULL)
        {
            cout<<"The given node is the last node";
            return;
        }
    n=new node;
    n->item=data;
    n->next=t->next;
    t->next=n;
 }
 void CLL::DeleteFirst()
 {
    node *t;
    if(last==NULL)
        return;
    if(last->next==last)
    {
        t=last;
        last=NULL;
        delete t;
    }
    else
    {
        t=last->next;
        last->next=t->next;
        delete t;
    }
 }
 void CLL::DeleteLast(){
    node *r, *s;
    if(last){
        r= last;
        if(r->next == r){
            last=NULL;
        }
        else{
            s=last->next;
            while(s->next!=last)
            {
                s=s->next;
            }
            s->next=last->next;
            delete last;
            last=s;
        }
    }
 }

 void CLL:: delnode(node *t){
node *temp;
    if(t==last){
        deleteLast();
        else if(t==last->next){
            DeleteFirst();
        }
        else{
            temp=last->next;
            while(temp->next!=t)
                temp=temp->next;
            temp->next=t->next;
            delete t;
        }
    }
 }
 CLL::~CLL(){ /*destructor*/
    while(last){
        DeleteFirst();
    }
 }
 CLL::CLL(CLL &c){   /*copy constructor*/
    last=NULL;
    node *temp=c.last->next;
    while(temp!=c.last)
    {
        insertAtEnd(temp->item);
        temp=temp->next;
    }
    insertAtEnd(c.last->item);n 
 }