#include <iostream>
using namespace std;

class Circle{
    private:
    int radius;
    public:
    void setRadius(int r){
        radius = r;
    }
    int getRadius(){
        return radius;
    }
    float area(){
        return 3.14 * radius * radius;
    }
    float getCircumference(){
        return 2*3.14*radius;
    }
};


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
};
class Time{
    private:
     int hr , min , sec;
     public:
     void setTime(int x, int y, int z){
        hr=x;
        min=y;
        sec=z;
     }
     void showTime(){
         cout<<hr<<":"<<min<<":"<<sec<<endl;
     }
};
class Date{
    private:
    int D, M , Y;
    public:
    void setDate(int D, int M, int Y){
        this->D = D;
        this->M = M;
        this->Y = Y;
    }
    void showDate(){
        cout<<"\n"<<D<<"/"<<M<<"/"<<Y<<endl;
    }
    void showDateFormat(){
        cout<<"\n"<<D<<"/"<<M<<"/"<<Y<<endl;

    }
    void showDateFormat2(int D, int M, int Y){
        char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        cout<<"\n"<<D<<"/"<<months[M-1]<<"/"<<Y<<endl;

    }
    void DisplayDateFormat(){
        showDateFormat();
    }
};