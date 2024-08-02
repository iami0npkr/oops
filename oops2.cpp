#include <bits/stdc++.h>
using namespace std;

class Person
{

public:
    
    string name;
    int age;
    Person(){
        cout<<"Parent constructor called"<<endl;
    }
    Person(string name, int age)
    {   
        cout<<"Parent constructor called"<<endl;
        this->name = name;
        this->age = age;
    }
    ~Person(){
        cout<<"Parent destructor called"<<endl;
    }
};
 
class Student : public Person
{
    // name age roll no
    // but name age are previously defined in the person class
    // lets inherit person
public:

    
    int rollno;
    Student(string name,int age,int rollno) : Person(name,age){
        cout<<"child constructor called"<<endl;
        this->rollno=rollno;
    }

    void setInfo(string name,int age,int rollno){
        this->name=name;
        this->age=age;
        this->rollno=rollno;

    }
    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
    ~Student(){
        cout<<"child destructor called"<<endl;
    }
};

int main()
{
    Student s1("rahul",21,12345);
    // s1.name = "rahul kumar";
    // s1.age = 21;
    // s1.rollno = 12345;
   // s1.setInfo("hello",23,1234);
    s1.getInfo();
    return 0;
}