#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
        void  setData(int x, int y){

            a=x;
            b=y;
        }
    
        void showData() {
            std::cout << "Real: " << a << ", Imaginary: " << b << std::endl;
        }
        Complex operator +(Complex C){
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator -(Complex C){
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex operator*(Complex C){
            Complex temp;
            temp.a=a*C.a -b*C.b;
            temp.b=a*C.b+b*C.a;
            return temp;
        }
        bool operator==(const Complex& C) const{
            return a==C.a && b==C.b;
        }
};
class Time{

    private:
    int hours;
    int minutes;
    int seconds;
public:
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void showTime() {
        std::cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
    }
    
    bool operator >(Time T) {
        if (hours > T.hours )
            return true;
        else if (hours == T.hours && minutes > T.minutes)
            return true;
        else if (hours == T.hours && minutes == T.minutes && seconds > T.seconds)
            return true;
        else
            return false;
    }
    Time operator++() /*pre increment*/
    {
        seconds++;
        minutes += seconds / 60;
        hours += minutes / 60;
        seconds %= 60;
        minutes %= 60;
        return *this;
    }
    Time operator++(int) /*post increment*/
    // the post increment has a dummy int parameter to differentiate it from the pre increment operator
    {
        Time temp=*this;
        seconds++;
        minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
        return temp;
    }
    Time operator +(Time T){
        Time temp;
        temp.seconds = seconds + T.seconds;
        temp.minutes = minutes + T.minutes + temp.seconds / 60;
        temp.hours = hours + T.hours + temp.minutes / 60;
        temp.seconds %= 60;
        temp.minutes %= 60;
        return temp;
    }


};

class Matrix{
    private:
    int M[3][3];
class Matrix{
    private:
    int M[3][3];
    public:
    void inputMatrix(){
        cout<<"Enter the nine numbs for the operation:";
        for(int i=0;i<3;i++){
            for (int j=0; j<3;j++){
                cin>>M[i][j];
            }
        }
    }
    void printMat(){
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                cout<<M[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Matrix operator+(const Matrix& other) const{
        Matrix temp;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                temp.M[i][j]=M[i][j] + other.M[i][j];
            }
        }
        return temp;
    }
    Matrix operator-(const Matrix& other) const{
        Matrix temp;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                temp.M[i][j]=M[i][j] - other.M[i][j];
            }
        }
        return temp;
    }
    Matrix operator*(const Matrix& other) const{
        Matrix temp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int s = 0;
                for (int k = 0; k < 3; k++) {
                    s += this->M[i][k] * other.M[k][j];
                }
                temp.M[i][j] = s;
            }
        }
        return temp;
    }
};
    public:
    Numbers operator-(){
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
};


class fraction
{
    private:
    long num;
    long den;
    protected:
    long lcm(int x, int y){
        long max = (x > y) ? x : y;
        while (true) {
            if (max % x == 0 && max % y == 0) {
                return max;
            }
    long lcm(long x, long y){
        long max = (x > y) ? x : y;
        while (true) {
            if (max % x == 0 && max % y == 0) {
                return max;
            }
            max++;
        }
    }
}
        }
    }
    void showFraction() {
        std::cout << "Fraction: " << num << "/" << den << std::endl;
    }
    fraction operator+(fraction f) {
        fraction temp;
        long L = lcm(den, f.den);

    temp.num = (num * (L / den)) + (f.num * (L / f.den));
    temp.den = L;
    return temp;
    }

    fraction operator-(fraction f){
        fraction temp;
        long L = lcm(den, f.den);
        temp.num = (num * (L / den)) - (f.num * (L / f.den));
        temp.den = L;
    fraction operator-(fraction f){
        fraction temp;
        long L = lcm(den, f.den);
        temp.num = (num * (L / den)) - (f.num * (L / f.den));
        temp.den = L;
        return temp;
    }
    fraction operator*(fraction f){
        fraction temp;
        temp.num = num * f.num;
        temp.den = den * f.den;
        return temp;
    }
}
};

class Distance{
    private:
    int km, m, cm;
    public:
    void setdist(int k, int m, int c){
        km=k;
        m=m;
        cm=c;
    }
    void showdist(){
        cout<<"Distance: "<<km<<"km "<<m<<"m "<<cm<<"cm"<<endl;
    }
    Distance operator+(Distance D){
        Distance temp;
        temp.cm = cm+D.cm;
        temp.m = m+D.m + temp.cm/100;
        temp.km = km+D.km +temp.m/1000;
        temp.cm%=100;
        temp.m%=1000;
        return temp;
    }
    Distance operator--(){
        Distance temp = *this;
        if(cm>0)
        cm--;
        else
        {
            cm=99;
            if(m>0)
            {
                m--;
            }
            else
            {
                m=99;
                if(km>0)
                {
                    km--;
                }
            }
        }
       
        return temp;
    }
};

class Array{
    int *p;
    int size;
    public:
    Array(int s){
        size=s;
        p=new int[s];    
    }
    ~Array(){
        delete[] p;
    }
    int & operator[](int index){
        if(index>=size){
            cout<<"Index out of bounds"<<endl;
            throw out_of_range("Index out of bounds");
        }
        return p[index];
    }
};
