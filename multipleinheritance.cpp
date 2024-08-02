#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
};
class Teacher{
    public:
    string subject;
    double salary;
};
class TA :public Student,public Teacher{

};

int main(){
    TA t1;
    t1.name="tonystark";
    t1.subject = "engineering";
     cout<<t1.name<<" "<<t1.subject<<endl;

}
