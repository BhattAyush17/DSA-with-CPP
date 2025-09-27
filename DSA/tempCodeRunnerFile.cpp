#include <iostream>
using namespace std;

class Complex{
    private:
    int real,imag;
    public:
    void setComplex(int x, int y){
        real =x;
        imag =y;
    }
    void showComp(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
}