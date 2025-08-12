#include<stdio.h>
#include <iostream>
using namespace std;

class Array{
    private:
         int capacity;
         int lastIndex;
         int *arr; // pointer to the array
    public:
    Array();
    void createArray(int);
    void insert(int ,int);
    void append(int);
    int getItem(int);
    bool isEmpty();
    bool isFull();
    void del(int);
    void edit(int, int);
    int count();
    int getCapacity();

};
Array::Array(){
    arr=NULL;  // pointer to the array
}
void Array:: createArray(int cap){
    capacity = cap;
    lastIndex = -1;
    if(arr!=NULL)
        delete[] arr; // free previously allocated memory if any
    arr = new int[capacity]; // memory leak
}
