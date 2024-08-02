#include <bits/stdc++.h>
using namespace std;

// access modifiers
// private,public,protected
// private : default data& methods accessible inside class
// public: : data&methods accessible to  everyone
// protected: data&methods accessible inside class & to its derived class

class Teacher
{
    // properties/attributes/members
private:
    double salary;

public:
    // non-parameterised
    Teacher()
    {
        dept = "Computer Science"; // initialised with this value
        cout << "Hi,I am constructor\n";
    }
    // parameterised
    Teacher(string name, string d, string s, double sal)
    {
        this->name = name;
        dept = d;
        subject = s;
        salary = sal;
    }
    string name;
    string dept;
    string subject;

    // copy Constructor

    Teacher(Teacher &orgObj)
    { // pass by reference
        // shallow copy
        cout << "I am custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

public:
    // methods/memberfunctions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void setSalary(int s)
    {
        salary = s;
    }
    // getter
    double getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << "name :" << name << endl;
        cout << "department :" << dept << endl;
        cout << "subject :" << subject << endl;
        cout << "salary: " << salary << endl;
    }
};

class Student
{
    // properties/attributes/members
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        //this->cgpa = cgpa;
        // cgpaPtr = new double;
        // *cgpaPtr = cgpa;
        cgpaPtr=&cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

class Account
{

private:
    double balance;
    string password; // data hiding

public:
    string accountId;
    string username;
};

int main()
{

    // Teacher t1("Pranay", "ComputerScience", "C++", 300000); // constructor call

    // t1.getInfo();

    // Teacher t2(t1); // default copy constructor was called

    // t2.getInfo();

    //     t1.name="pranay";
    //    // t1.dept="electrical";
    //     t1.subject="Programming";
    //     t1.setSalary(300000);
    //     cout<<t1.name<<endl;
    //     cout<<t1.getSalary()<<endl;
    //     cout<<t1.dept<<endl;

    Student s1("rahul kumar", 8.9);
    Student s2(s1); //"neha kumar"
    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    s1.name="ram";
    s1.getInfo(); 
    s2.getInfo();
    return 0;
}
