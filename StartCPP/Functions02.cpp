// INLINE
#include <iostream>
using namespace std;
// using inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    // At compile time, this might become: int result = 5 + 3;
    int result = add(5, 3);
    cout << "The result is: " << result << endl;
    return 0;

}


// Two functions can have same name but different args
// And this is called function overloading
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b; 
}
int add(int a, int b, int c) {
    return a + b + c;
}

int main() { 
    int result1 = add(5, 3);
    cout << "The result of adding two numbers is: " << result1 << endl;

    int result2 = add(5, 3, 2);
    cout << "The result of adding three numbers is: " << result2 << endl;

    return 0;

}


 
 
 