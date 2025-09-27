// This pointer
#include<iostream>
using namespace std;
class Item{
    private:
    int a, b;

    public:
    void setData(int x, int y){
        this->a = x;   // this pointer -> ,refers to the current object
        this->b = y;
    }
    void showData(){
        cout << "a = " << a << ", b = " << b << endl;
    }
    Item greater(Item obj){
        if(a+b> obj.a+obj.b)
        return *this;
        else
        return obj;
    }
};

int main(){  
    Item i1, i2, i3;
    i1.setData(5, 10);
    i2.setData(20, 30);
    i3 = i1.greater(i2); // using this pointer to call greater function
    cout << endl;
    return 0;
}