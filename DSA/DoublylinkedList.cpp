#include <iostream>
#include <stdio.h>
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
    void deleteFirst();
    void deleteLast();
    void deleteNode(int data);
};

// constructor definition
DLL::DLL() {
    start = NULL;
}

// insert at start
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

// insert at end
void DLL::insertAtEnd(int data) {
    node *n1 = new node;
    n1->item = data;
    n1->next = NULL;

    if (start == NULL) {
        n1->prev = NULL;
        start = n1;
    } else {
        node *t = start;
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = n1;
        n1->prev = t;
    }
}

// search a node
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

// delete first node
void DLL::deleteFirst() {
    if (start != NULL) {
        node *r = start;
        start = r->next;
        if (start != NULL)
            start->prev = NULL;
        delete r;
    } else {
        cout << "List is empty" << endl;
    }
}

// delete last node
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
        while (t->next != NULL)
            t = t->next;
        t->prev->next = NULL;
        delete t;
    }
}

// delete a particular node by value
void DLL::deleteNode(int data) {
    if (start == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node *t = search(data);
    if (t == NULL) {
        cout << "Node not found" << endl;
        return;
    }

    if (t == start)
        deleteFirst();
    else if (t->next == NULL)
        deleteLast();
    else {
        t->next->prev = t->prev;
        t->prev->next = t->next;
        delete t;
    }
}
