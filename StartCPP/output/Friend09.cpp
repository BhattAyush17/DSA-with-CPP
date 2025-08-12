#include<iostream>
using namespace std;
class Item {
    private:
    int a,b;

    public: 
    void setData(int x, int y){
        a=x;
        b=y;
    }
    Item operator+(Item);
    Item operator-(Item);  
    friend Item operator+(Item obj);
    friend Item operator-(Item i);
    friend void f1(Item, Item);
    friend istream& operator>>(istream& , Item& ) 
    friend ostream& operator<<(ostream& , Item& )
    
};
Item operator+(Item k, Item i) {
    Item temp;
    temp.a=k.a + i.b;
    temp.b=k.b + i.a;
    return temp;
}
Item operator-(Item i){
    Item temp;
    temp.a=-i.a;  // references of objects i
    temp.b=-i.b;
    return temp;

}
Item operator+(Item obj1, Item obj2) {
    void f1(Item obj1, Item obj2){
         int c=obj1.a+obj1.b+obj2.a+obj2.b;
         cout << "Sum is: " << c << endl;
    }
} 
void f1(Item i1, Item i2) {
    int c = i1.a + i1.b + i2.a + i2.b; // references of objects i1 and i2
    cout << "Sum is: " << c << endl;
}

istream& operator>>(istream& din, Item& i) {
    din >> i.a >> i.b;
    return din;  /*din is reference var*/
}
 
 
ostream& operator<<(ostream& dout, Item i) {
    dout << "a: " << i.a << ", b: " << i.b;
    return dout;  /*dout is reference var*/
}
int main(){
    Item i1, i2, i3;
    i1.setData(5, 10);
    i2.setData(15, 20);
    cin>>i1;
    cout<<i1;
    i3=i1+i2;  /*i3=operator+(i1,i2)*/
    f1(i1, i2); // Calling the friend function
    f1(i3); // Calling the friend function
    cout<<endl;
    return 0;
}
