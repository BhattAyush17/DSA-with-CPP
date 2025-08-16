#include<stdio.h>
#include <iostream>
using namespace std;

class DynArray {
private:
    int capacity;
    int lastIndex;
    int* arr;
    protected:
    void doubleArray();
    void halfArray();
public:
    DynArray();
    DynArray(DynArray&);
    void createArray(int);
    void insert(int, int);
    void append(int);
    int getItem(int);
    bool isEmpty();
    bool isFull();
    void del(int);
    void edit(int, int);
    ~DynArray();
};
DynArray::DynArray() {
    arr = NULL;  // pointer to the array
}

void DynArray::createArray(int cap) {
    capacity = cap;
    lastIndex = -1;
    if (arr != NULL)
        delete[] arr;
    arr = new int[capacity];
}

void DynArray::append(int data) {
    if (!isFull()) {
        lastIndex++;
        arr[lastIndex] = data;
    } else
        cout << "Array is full" << endl;
}

bool DynArray::isFull() {
    return lastIndex == capacity - 1;
}

bool DynArray::isEmpty() {
    return lastIndex == -1;
}

void DynArray::insert(int index, int data) {
    if (index < 0 || index > lastIndex + 1) {
        cout << "Invalid index" << endl;
        return;
    }
    if (isFull()) {
        cout << "Array is full" << endl;
        return;
    }
    for (int i = lastIndex; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = data;
    lastIndex++;
}

int DynArray::getItem(int index) {
    if (index < 0 || index > lastIndex)
        return -1;
    return arr[index];
}

DynArray::DynArray(DynArray &other) {
    capacity = other.capacity;
    lastIndex = other.lastIndex;
    arr = new int[capacity];
    for (int i = 0; i <= lastIndex; i++) {
        arr[i] = other.arr[i];
    }
}

void DynArray::del(int index) {
    int i;
    try {
        if (index < 0 || index > lastIndex) {
            throw 1;
        }
        for (int i = index; i < lastIndex; i++) {
            arr[i] = arr[i + 1];
    }
    lastIndex--;
    if (capacity > 1 && lastIndex + 1 <= capacity / 2) {
        halfArray();
    }
}
catch (int e) {
    if (e == 1)
        cout << "Invalid index" << endl;
    return;
}
}

void DynArray::edit(int index, int newdata) {
    if (index < 0 || index > lastIndex) {
        cout << "Invalid index" << endl;
        return;
    }
    arr[index] = newdata;
}

DynArray::~DynArray() {
    delete[] arr;
}

void DynArray:: doubleArray(){

    int *temp;
    temp = new int[capacity * 2];
    for(int i = 0; i <= lastIndex; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;   // delete the first arr
    arr = temp;
    capacity *= 2; // double the size
}


void DynArray::halfArray(){

    int *temp;
    temp = new int[capacity / 2];
    for(int i = 0; i <= lastIndex; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    capacity /= 2; // half the size
}

