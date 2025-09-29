// insert at front
// insert at back
// delete at front
// delete at back
// front
// back
// Constructor
// Destructor
// Copy constructor
// copy assignment operator

#include<stdio.h>
#include<iostream>
using namespace std;


class DequeNode{
    public:
    int data;
    DequeNode* next;
    DequeNode* prev;

    DequeNode(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    class Deque{
        private:
        DequeNode* front;
        DequeNode* back;
        int size;

        public:
        Deque(){
            front = NULL;
            back = NULL;
            size = 0;
        }

        ~Deque(){
            while(size > 0){
                deleteFront();
            }
        }

        Deque(const Deque& other){
            front = NULL;
            back = NULL;
            size = 0;
            DequeNode* current = other.front;
            while(current != NULL){
                insertBack(current->data);
                current = current->next;
            }
        }

        Deque& operator=(const Deque& other){
            if(this != &other){
                while(size > 0){
                    deleteFront();
                }
                DequeNode* current = other.front;
                while(current != NULL){
                    insertBack(current->data);
                    current = current->next;
                }
            }
            return *this;
        }

        void insertFront(int data){
            DequeNode* newNode = new DequeNode(data);
            if(size == 0){
                front = newNode;
                back = newNode;
            } else {
                newNode->next = front;
                front->prev = newNode;
                front = newNode;
            }
            size++;
        }

        void insertBack(int data){
            DequeNode* newNode = new DequeNode(data);
            if(size == 0){
                front = newNode;
                back = newNode;
            } else {
                newNode->prev = back;
                back->next = newNode;
                back = newNode;
            }
            size++;
        }

        void deleteFront(){
            if(size == 0){
                cout << "Deque is empty" << endl;
                return;
            }
            DequeNode* temp = front;
            front = front->next;
            if(front != NULL){
                front->prev = NULL;
            } else {
                back = NULL; // If the deque becomes empty
            }
            delete temp;
            size--;
        }

        void deleteBack(){
            if(size == 0){
                cout << "Deque is empty" << endl;
                return;
            }
            DequeNode* temp = back;
            back = back->prev;
            if(back != NULL){
                back->next = NULL;
            } else {
                front = NULL; // If the deque becomes empty
            }
            delete temp;
            size--;
        }

        int getFront(){
            if(size == 0){
                cout << "Deque is empty" << endl;
                return -1; // Meaningful value indicating empty deque
            }
            return front->data;
        }

        int getBack(){
            if(size == 0){
                cout << "Deque is empty" << endl;
                return -1; // Meaningful value indicating empty deque
            }
            return back->data;
        }

        int getSize(){
            return size;
        }
    
    };
};