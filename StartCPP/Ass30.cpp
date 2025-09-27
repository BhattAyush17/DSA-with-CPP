#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// This function correctly prints n rows of Pascal's Triangle.
void pascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

// Correction: The original function incorrectly returned false for the number 1.
// An initial check for 1 has been added to fix this logical error.
bool isFibo(int num){
    if (num == 1) {
        return true;
    }

    int a=1, b=1, s=0;

    while(s < num){
        s = a + b;
        if(num == s)
            return true;
        a = b;
        b = s;
    }
    return false;
}

// This function correctly swaps two integers using call-by-reference.
void swapCallByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}



int main() {
   int x = 10, y = 20;
   pascalTriangle(5);
   cout << "x: " << x << ", y: " << y << endl;
    return 0;
}