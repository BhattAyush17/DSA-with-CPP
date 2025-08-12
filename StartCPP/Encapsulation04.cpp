#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Book{
    private:

    int bookid;
    char title[50];
    float price;
    public:

    void displayBook() {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
   
    void inputBook(){
        cout << "Enter Book ID: ";
        cin >> bookid;
        cin.ignore(); // Clear the input buffer before reading a string
        cout << "Enter Title: ";
        cin.getline(title, 50);
        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();
    }
};

int main() {
    Book b1, b2;
    Book b3;
    b3.inputBook();
    b3.displayBook();
    return 0;
}
