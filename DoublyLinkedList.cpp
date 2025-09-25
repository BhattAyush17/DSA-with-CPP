#include<iostream>
#include<stdio.h>
using namespace std;

struct node {
    node *prev;
    int item;
    node *next;
};

class DLL {
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
}; // <-- Missing semicolon after class

// constructor definition
DLL::DLL() {
    start = NULL;
}

void DLL::insertAtStart(int data) {
    node *temp = new node;
    temp->prev = NULL;
    temp->item = data;
    temp->next = start;
    if (start != NULL) {
        start->prev = temp; // putting the new node(temp) at start's prev
    }
    start = temp;
}

void DLL::insertAtEnd(int data) {
    node *n1 = new node;
    n1->item = data;
    n1->next = NULL;

    if (start == NULL) {
        n1->prev = NULL;
        start = n1;
    } else {
        node *t = start; // <-- missing variable declaration
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = n1;
        n1->prev = t;
    }
}

node* DLL::search(int data) {
    node *temp = start;
    while (temp) {
        if (temp->item == data) {
            return temp;
        }
        temp = temp->next; // move to the next node
    }
    return NULL; // return NULL if not found
}

void DLL::deletefirst() { // <-- was missing DLL:: scope
    node *r;
    if (start != NULL) {
        r = start;
        start = r->next;
        if (start != NULL) // <-- avoid NULL->prev access
            start->prev = NULL;
        delete r;
    }
}

// remove incorrect duplicate deleteLast
void DLL::deleteLast() {
    if (start == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    if (start->next == NULL) {
        delete start;
        start = NULL;
    } else {
        node *t = start;
        while (t->next != NULL) {
            t = t->next;
        }
        t->prev->next = NULL;
        delete t;
    }
}

void DLL::deleteNode(int data) {
    if (start == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node *t = search(data); // <-- missing search call

    if (t == NULL) {
        cout << "Node not found" << endl;
        return;
    }

    if (t == start) {
        deletefirst();
    } else if (t->next == NULL) { // last node
        deleteLast();
    } else {
        t->next->prev = t->prev;
        t->prev->next = t->next;
        delete t;
    }
}
