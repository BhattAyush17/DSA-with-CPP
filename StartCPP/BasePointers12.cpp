#include<iostream>
#include<cstring>
using namespace std;

class A{
    public:
       void f1(){
              cout << "Function f1 from class A" << endl;
       }
};
class B : public A {
    public:
       void f2(){
              cout << "Function f2 from class B" << endl;      
       }
};
int main(){
    A *p;
    B o2;
    p = &o2; // Base class pointer pointing to derived class object
    // so this will check o2 in class B , if found then it will call the function else it will check in class A and get Binded(Early Binding)
    p->f1(); // Calls A's f1  A due to Early Binding
    p->f2(); // Calls B's f2   B due to Early Binding
    // p->f2(); // This line would cause a compile-time error because f2() is not a member of A  
    cout<<endl;
    return 0;
}