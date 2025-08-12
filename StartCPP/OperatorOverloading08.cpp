#include <iostream>
using namespace std;

class Complex {
    private:
    int a, b;

public:
void setData(int,int);
void showData();
Complex operator+(Complex);
// OVERLOADING WITH - operator
Complex operator -(Complex);
Complex operator-(); // Overloading unary minus
};
    void Complex:: setData(int x, int y) {
        a = x;
        b = y;
    }


void Complex::showData() {
    cout << "\na " << a << " b " << b;
}
Complex Complex::operator+(Complex C){
   Complex temp;
   temp.a= a+C.a;
   temp.b=b+C.b;
   return temp;

}
Complex Complex:: operator-(Complex C){// OVERLOADING WITH - operator
   Complex temp;
   temp.a= a-C.a;
   temp.b=b-C.b;
   return temp;

}
Complex Complex::operator-(){ // Overloading unary minus
   Complex temp;
   temp.a = -a;
   temp.b = -b;
   return temp;
}
   
int main(){
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3=c1+c2    ; // using operator overloading
   // c3=operator+(c2); above one and this re just same
   c3=c1-c2; // using operator overloading for - operator
   c3.showData();
   c3=-c1; // using operator overloading for unary minus or c3=c1.operator-();
   c3.showData();
   cout<<endl;
    c3.showData();
    cout<<endl;
    return 0;
}



