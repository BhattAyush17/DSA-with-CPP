#include<iostream>
using namespace std;

class Cuboid{
    private:
    int length, breadth, height:
    public:
    Cuboid(int l , int b, int h){
        length=l;
        breadth=b;
        height=h;
    }
};

class Customer{
    private:
    int custId;
    string name, email, mobile;
    public:{
        custId=1;
        name = "Anony";
        email = "anony@example.com";
        mobile = "1234567890";
    }
    Customer(int id, string n, string e, string m){
        custId=id;
        name=n;
        email=e;
        mobile=m;
    }
};

class Time{
    private:
    int hr, min, sec;
    public:
    Time(int h, int m, int s){
        hr=h;
        min=m;
        sec=s;
    }
};

class Book{
    private:
    int BookId;
    string title;
    float price;

    public:
    Book(int id, string t, float p){  /*parameterized constructor*/
        BookId=id;
        title=t;
        price=p;
    }
};
 class Complex{
    private:
    int a, b;
    public:
    COmplex(int x, int y){
        a=x;
        b=y;
    }
};
 void example(){
   Complex c[5] = {Complex(4,6), Complex(5,7), Complex(8,9), Complex(10,11), Complex(12,13)};   
   for(int i=0; i<5; i++){
       // Accessing complex numbers
   }
   return 0;
 }
for 
 class Number{
    private:
    int size;
    int *arr;
 public:
    Number(int size){
        this->size=size;
        arr=new int[size];
    }
    ~Number(){
        delete[] arr;
    }
};


