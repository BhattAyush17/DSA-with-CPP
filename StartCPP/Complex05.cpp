#include<iostream>
using namespace std;
class Complex {
     private:
           int a,b; // these can be accessed by creating an object of Complex class like Complex c1; c1.a = 5; c1.b = 10    and its a instance member  variable;
     public:
            void setData(int x, int y) {
         a = x;
         b = y;
     }
    void showData(){
        cout << "a = " << a << ", b = " << b << endl;
    }
    static void f1(){
        cout << "This is a function inside Complex class" << endl;
    }
};

int main(){
    Complex c1, c2;
    c1.setData(5, 10);
    c2.setData(20, 30);
    
    c1.showData();
    c2.showData();
    
    Complex::f1(); // calling static function using class name
    
    return 0;
}

// instance vs static
#include<iostream>
using namespace std;    
class Item {
    public:
        int a,b; // Instance variables
        static int k;   /*Static member var or class var*/
};
int Item::k = 0;  // Defining of static member variable outside the class 
int main(){
    Item i1 ,i2;
    i1.set_a(5);
    Item::k =10; // setting value of static member variable
    cout<<"k="<<Item::k<<endl; // accessing static member variable using class name
    cout<<i2.get_a(); // accessing instance member variable using public getter
    cout<<endl;
    return 0; 
}

// objects with static and instance members
#include<iostream>
using namespace std;    
class Item { 

    private:
    int a,b;    /*Instance variables*/
    static int k;   /*Static member var or class var*/


    public:
       void set_a(int x) { // Instance Method
        a = x;
    }
        void set_b(int y) {  // Instance Method
            b = y;
        }
        int get_a() { // Instance Method
            return a;
        }
        int get_b() { // Instance Method
            return b;
        }   
        void set_k(int x) { // Static Method
            k = x;
        }
        static void set_k(int m) {k=m;}// Static Method
        static int get_k() { // Static Method
            return k;
        }
};
int Item::k = 0;  // Defining of static member variable outside the class 
int main(){
    Item i1 ,i2;
    i1.set_a(5);
    i1.set_k(10); // setting value of static member variable using setter
    cout<<"k="<<i2.get_k()<<endl; // accessing static member variable using object
    cout<<i2.get_a()<<endl; // accessing instance member variable using object
    cout<<i2.get_b()<<endl; // accessing instance member variable using object
    cout<<i2.get_a()<<endl; // accessing instance member variable using object
    cout<<i2.get_b()<<endl; // accessing instance member variable using object
    cout<<endl;
    return 0;  
}