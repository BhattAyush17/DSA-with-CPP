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
    Array(Array &);
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
    ~Array() { delete[] arr; } // Destructor to free memory

};
Array::Array(){
    arr=NULL;  // pointer to the array
}
void Array:: createArray(int cap){
    capacity = cap;
    lastIndex = -1;
    if(arr!=NULL)
        delete[] arr; // free previously allocated memory if any
    arr = new int[capacity]; // newly created array
}

void Array::append(int data){
    if(!isFull()){ 
        lastIndex++;
        arr[lastIndex] = data;  
    }
    else
    cout<<"Array is full"<<endl;
}

bool Array::isFull(){
    return lastIndex == capacity - 1;
}

bool Array::isEmpty(){
    return lastIndex == -1;
}

void Array::insert(int index, int data){
   int i;
   try{
    if(index<0 || index>lastIndex+1)
        throw 1;
        if(isFull()){
            throw 2;
            for(i=lastIndex; i>=index; i--){
                arr[i+1] = arr[i]; // shift elements to the right
            }
           
        }

   }
   catch(int e){
       if(e == 1)
           cout<<"Invalid index"<<endl;
       else if(e == 2)
           cout<<"Array is full"<<endl;
       return;
   }
}

int Array::getItem(int index){
    if(index<0 || index>lastIndex)
        return -1; // invalid index
    return arr[index];
} 

Array::Array(Array &arr){
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;
    this->arr = new int[capacity];
    for(int i=0; i<=lastIndex; i++){ 
        this->arr[i] = arr.arr[i]; // copy elements
    }
}

void Array::del(int index){
    try{
    if(index<0 || index>lastIndex)
        throw 1;
    }
    catch(int e){
        if(e == 1)
            cout<<"Invalid index"<<endl;
        return;
    }
    for(int i=index; i<lastIndex; i++){
        arr[i] = arr[i+1]; // shift elements to the left
    }
    lastIndex--;
}
 
void Array::edit(int index, int newdata){
    try{
    if(index<0 || index>lastIndex)
        throw 1;
    }
   catch(int e){
       if(e == 1)
           cout<<"Invalid index"<<endl;
       return;
   }
   arr[index] = newdata;
} 
Array::~Array() {
    delete[] arr;
}