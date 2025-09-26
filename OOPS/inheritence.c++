#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Default constructor
    Person() {}

    // Parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
public:
    int rollno;

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

int main() {
    // Object creation
    Student s1;

    // Assign values
    s1.name = "Manu";
    s1.age = 21;
    s1.rollno = 101;

    // Print info
    s1.getInfo();

    return 0;
}
