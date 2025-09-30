// Contents of SinglyLinkedList.cpp
#include <iostream>
#include <stdio.h>
using namespace std;

struct node {
    int item;
    node *next;
};

class ssl {
private:
    node *start;

public:
    ssl(); // constructor declaration
    ssl(ssl&); // copy constructor
    void insertAtStart(int);
    void insertAtEnd(int);
    void insertAfter(node*, int);
    node* search(int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(node*);
    ssl& operator=(const ssl&);
    ~ssl();
};

// constructor definition
ssl::ssl() {
    start = NULL;
}

// deep copy
ssl::ssl(ssl &list) {
    node *temp; 
    temp =list.start;
    start=Null;
   while(temp){
    insertAtlast

   } 
}

ssl::ssl(ssl &other) {
    start = NULL;
    node *temp = other.start;
    while (temp != NULL) {
        insertAtEnd(temp->item);
        temp = temp->next;
    }
}

// insert at start of a node
void ssl::insertAtStart(int data) {
    node *temp = new node; // statement to create a new node
    temp->item = data;
    temp->next = start;
    start = temp;
}

// insert at end of a node
void ssl::insertAtEnd(int data) {
    node *temp = new node;
    temp->item = data;
    temp->next = NULL;

    if (start == NULL) {
        start = temp;
    } else {
        node *n = start;
        while (n->next != NULL)
            n = n->next;
        n->next = temp;
    }
}

node* ssl::search(int data) {
    node *temp = start;
    while (temp) {
        if (temp->item == data) {
            return temp;
        }
        temp = temp->next; // move to the next node
    }
    return NULL; // return NULL if not found
}

// Insertion after a particular node
void ssl::insertAfter(node* prev_node, int data) {
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }

    node* new_node = new node;
    new_node->item = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Deleting the first node
void ssl::deleteFirst() {
  if(start == NULL){
    cout << "List is empty, nothing to delete.";
    return;
  }
  if(start->next == NULL) {
    delete start;
    start = NULL;
  
  }
  else {
    node *temp = start;
    while(temp->next->next!=NULL)
      temp = temp->next;
    delete temp->next;
    temp->next = NULL;
  }

  // Deleting a particular node
  void ssl::deleteNode(node* temp) {
   node *r;
   try{
    if(start == NULL || temp == NULL) {
        throw 1; // throw an exception if the list is empty or node to delete is NULL
    }
    if(start == temp)
    deleteFirst();
  } else {
      r=start;
      while(r->next!=temp)
      r=r->next;
      r->next=temp->next;
      delete temp;
  }
  catch(int e){
  }
  ssl::~ssl(){
    while(start) {
        node *temp = start;
        start = start->next;
        delete temp;
    }
  }
}
}
ssl::ssl(ssl &list){
    node *tempp;
    temp=list.start;
    start=NULL;
    while(temp){
        insertAtEnd(temp->item);
        temp=temp->next;
    }
}

ssl& ssl: operator=(ssl &list){
    node  *temp;
    temp =list.start;
    while(start)
    deleteFirst(); // clear the current list

    while(temp){
        insertAtEnd(temp->item);
        temp=temp->next;
    }
    return *this;
}
