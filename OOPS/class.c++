#include<bits/stdc++.h>
using namespace std;

class Teacher{

private:
    double salary;    //protected data
public:
    string name;
    string dept;
    string subject;
    

    //methods //member function
    void changeDept(string newDept){
        dept = newDept;
    }
        //setter
    void setSalary(double s){
        salary = s;
    }
        //getter
    double getSalary(){
        return salary;
    }
};

class Student{
public:
    string name;
    int rollNo;
    int age;
};

int main(){
    Teacher t1;
    t1.name = "manu";
    t1.subject = "oops";
    t1.dept = "IT";
    t1.setSalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}