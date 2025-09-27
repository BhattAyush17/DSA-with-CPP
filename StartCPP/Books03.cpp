#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

struct Book{

    int Bookid; 
    char title[50];
    float price;
};

struct Book inputBook();
void displayBook(struct Book b);
int main(){
    struct Book b1 = {1, "Hello",343.3}, b2 = {0, "", 0.0}, b3;
    strcpy(b2.title, "World");
    b2.Bookid = 2;
    b2.price = 123.4;
    b3 = inputBook();
    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
    return 0;
}

void displayBook(struct Book b)
{
    cout << "Book ID: " << b.Bookid << endl;
    cout << "Title: " << b.title << endl;
    cout << "Price: " << b.price << endl;
}

struct Book inputBook(){
    struct Book b;
    cout << "Enter Book ID: ";
    cin >> b.Bookid;
    cin.ignore(); // Clear the input buffer before reading a string
    cout << "Enter Title: ";
    cin.getline(b.title, 50);
    cout << "Enter Price: ";
    cin >> b.price;
    cin.ignore();
    return b;
}





