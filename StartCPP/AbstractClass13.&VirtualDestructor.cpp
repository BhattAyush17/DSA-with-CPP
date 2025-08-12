#include<iostream>
#include<string.h>
using namespace std;

class Test{
    private:
    int a,b;
    public:
       virtual void f1()=0 ; /*This is main and the min. requirement for being an abstract class*/
       void f2(){
              cout << "Function f2 from class A" << endl;
       }
};
class DummyTest: public Test {
    public:
       void f1(){     /*Here the func is over ridden , from the base class(virtual void f1()=0;)*/
              cout << "Function f1 from class DummyTest" << endl;      
       }
};

int main(){
    Test *obj = new DummyTest();
    obj.f1();
    obj->f1();
    obj->f2();
    obj->f2();
    delete obj;
}

// VIRTUAL DESTRUCTOR
class Base {
public:                     
       virtual ~Base() { // Virtual destructor
              cout << "Base destructor called" << endl;
       }
       };                          
class Derived : public Base {
public:
       ~Derived() { // Destructor
              cout << "Derived destructor called" << endl;
       }
};
int main() {
    Base *b = new Derived(); // Base class pointer to derived class object
    delete b; // Calls the derived class destructor first, then the base class destructor
    return 0;
}
