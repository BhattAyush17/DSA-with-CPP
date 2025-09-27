//   ASSIGNMENT  48
#include<iostream>
#include<stdio.h>
using namespace std;

const int STACK_IS_EMPTY = -1;  // constant to indicate empty stack error

class Stack { 
private:
    int capacity;   // maximum size of stack
    int top;        // index of top element
    int *arr;       // dynamic array for stack elements
public:
    Stack(int size);      // constructor
    ~Stack();             // destructor
    void createStack(int size);  
    void push(int data);  
    bool isFull();        
    bool isEmpty();       
    int peek();           
    void pop(); 
    Stack(const Stack &s);   
    Stack & operator=(const Stack &s);  // assignment operator
};

// function to create stack of given size
void Stack::createStack(int size) {
    capacity = size;
    top = -1;                     // initially stack is empty
    arr = new int[capacity];      // dynamically allocate array
}


Stack::Stack(int size) {
    createStack(size);
}


Stack::~Stack() {
    delete[] arr;
    arr = nullptr;
}

Stack::Stack(const Stack &s) { // copy constructor
    capacity = s.capacity;
    top = s.top;
    arr = new int[capacity];
    for (int i = 0; i <= top; i++) {
        arr[i] = s.arr[i];
    }
}

// (removed invalid duplicate operator= that referenced non-existent list functions)

void Stack::push(int data) {
    if (isFull()) {
        cout << "Stack is full. Cannot push " << data << endl;
        return;
    }
    arr[++top] = data;
}

bool Stack::isFull() {
    return (top == capacity - 1);
}

// check top element without removing
int Stack::peek() {
    if (isEmpty())
        throw STACK_IS_EMPTY;  // throw error if empty
    return arr[top];
}

bool Stack::isEmpty() {
    return (top == -1);
}


void Stack::pop() {
    if (isEmpty()) {
        throw STACK_IS_EMPTY;  // throw error if empty
    }
    top--;
}

Stack& Stack::operator=(const Stack &s)
{
    if(arr!=NULL) {
        delete[] arr; // free existing memory
        capacity=s.capacity;
        top=s.top;
        arr=new int[capacity];
        for(int i=0;i<=top;i++)
        {
            arr[i]=s.arr[i];
        }
        return *this;
    }

    return *this;
}Stack& Stack::operator=(const Stack &s)
{
    if (this == &s)
        return *this;

    delete[] arr; // free existing memory (safe even if arr is nullptr)
    capacity = s.capacity;
    top = s.top;
    arr = new int[capacity];
    for (int i = 0; i <= top; ++i) {
        arr[i] = s.arr[i];
    }
    return *this;
}
