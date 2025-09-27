#include<iostream>
using namespace std;

class Person {

    private:
    int age;
    char name[20];
    
    protected:
    void setAge(int a) {
        age = a;
    }

    public:
    int getAge() const {
        return age;
    }

}
class Employee : public Person {
    // Employee inherits Person publicly
private:
float salary;
public:
Employee() : Person(20,"Arun") // Constructor
{} 
void setSalary(float s) {
    salary = s;
}
float getSalary() const {
    return salary;
}
};

int main() {
    Person person;
    person.setAge(30);
    cout << "Age: " << person.getAge() << endl;

    Employee emp;
    emp.setAge(25);
    emp.setSalary(50000);
    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;

    return 0;
}
   