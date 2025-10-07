// Queue using array
//  queue(int);
//       void insert(int data);
//       bool isFull();
//       int getFront();
//       int getBack();
//       bool isEmpty();
//       void del();
//       ~queue();
//       int count ();
//       queue(const queue &q);
//       queue & operator=(const queue &q);

#include <stdio.h>
#include <iostream>
using namespace std;

#define INVALID_QUEUE_STATE -1
#define EMPTY_QUEUE -2

class queue {
private:
    int capacity;
    int fr, rr;
    int *ptr;

public:
    queue(int cap);
    void insert(int data);
    ~queue();
    bool isEmpty();
    bool isFull();
    int getFront();
    int getBack();
    queue(const queue &q);
    queue &operator=(const queue &q);
};

// constructor
queue::queue(int cap) {
    capacity = cap;
    fr = -1;
    rr = -1;
    if (cap > 0)
        ptr = new int[cap];
    else
        ptr = NULL;
}

// insert element
void queue::insert(int data) {
    if (ptr == NULL || capacity == 0) {
        throw INVALID_QUEUE_STATE;
    }
    if (isFull()) {
        cout << "Queue overflow!" << endl;
        return;
    }
    if (fr == -1) {
        fr = 0;
    }
    rr++;
    ptr[rr] = data;
}

// destructor
queue::~queue() {
    delete[] ptr;
}

// copy constructor
queue::queue(const queue &q) {
    capacity = q.capacity;
    fr = q.fr;
    rr = q.rr;
    ptr = new int[capacity];
    for (int i = 0; i < capacity; i++)
        ptr[i] = q.ptr[i];
}

// assignment operator
queue &queue::operator=(const queue &q) {
    if (this != &q) {
        delete[] ptr;
        capacity = q.capacity;
        fr = q.fr;
        rr = q.rr;
        ptr = new int[capacity];
        for (int i = 0; i < capacity; i++)
            ptr[i] = q.ptr[i];
    }
    return *this;
}

// check if empty
bool queue::isEmpty() {
    return (fr == -1 || fr > rr);
}

// check if full
bool queue::isFull() {
    return (rr == capacity - 1);
}

// get front element
int queue::getFront() {
    if (isEmpty()) {
        throw EMPTY_QUEUE;
    }
    return ptr[fr];
}

// get back element
int queue::getBack() {
    if (isEmpty()) {
        throw EMPTY_QUEUE;
    }
    return ptr[rr];
}
