#include<iostream>
#include<string.h>
#include<exception>
using namespace std;

void f1() {
    // The code where any error can arise
    try{
    int a;
    char b; // Corrected type to char to allow character input
    cout << "Enter two numbers: ";
    cin >> a >> b;  
    if (b=='0') // Corrected comparison for character '0'
    {
        throw 1;    
    } 
    if(b== 'c'){ // Corrected comparison for character 'c'
        throw 'X'; /*char type exception*/ // Corrected to throw a char
    }
     if(b== 'f'){ // Corrected comparison for character 'f'
        throw 34.4f; /*char type exception*/ // Corrected to throw a float
     }
    cout << "Sum: " << a + b << endl;
}
catch(int e){ 
    cout << "Error occurred! Exception value: " << e << endl;
}
catch(const char c){ // Corrected to catch a single char
    cout << "Error occurred! Exception value: " << c << endl;
}
catch(float f){
    cout << "Error occurred! Exception value: " << f << endl;
}
catch(...){
    cout << "An unknown error occurred!" << endl;
}
cout<<"Program completed successfully." << endl;

}


// User Defined Exception class
class DivideZero : public exception {
public:
    const char* what() const throw() {
        return "Division by zero is not allowed!";
    }
};

// The function takes arguments to work with.
void f2(int a, int b) {
    try {
        if (b == 0) {
            // Throw by value - simple and safe.
            throw DivideZero();
        }
        int c = a / b;
        std::cout << "Result: " << c << std::endl;
    }
    // Catch by const reference - standard practice.
    catch (const DivideZero& ex) {
        // This part is correct and will now work as intended.
        std::cout << "Error: " << ex.what() << std::endl;
    }
    
}

int main(){
    f1();
    f2(100, 0); // arguments to demonstrate the exception
}