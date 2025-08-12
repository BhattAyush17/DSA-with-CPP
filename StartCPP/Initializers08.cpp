#include <iostream>
using namespace std;

class Complex {
    private:
    int a, b;  /*instance variables*/

public:
Complex() : a(0), b(0)  /*initializer_list*/
{}
Complex(int x) : a(x), b(0)
{ a=x; b=0; }  

Complex()
{a=0; b=0;} /*Default constructor*/
// ~Complex(){};  Destructor
Complex(int a,int b):a(a),b(b)  
{}
// and based on the prameter in obj it will automatically call the constructor
Complex(int x, int y) {
   a = x;
   b = y;
}

void setData(int,int);
void showData();
Complex add(Complex);
};

    void Complex:: setData(int x, int y) {
        a = x;
        b = y;
    }


void Complex::showData() {
    cout << "\na " << a << " b " << b;
}
Complex Complex::add(Complex C){
   Complex temp;
   temp.a= a+C.a;
   temp.b=b+C.b;
   return temp;

}
  
int main(){
    Complex c1(1,2), c2(3,4), c3(5,6); /*while using constructor args or values should be passed in object*/
    Complex c4=c1;
    c3=c1.add(c2);
    c3.showData();
    cout<<endl;
    return 0;
}


