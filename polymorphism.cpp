#include<bits/stdc++.h>
using namespace std;
//compiletime polym.
class Student{ //constructor overloading
    public:
    string name;

    Student(){
          cout<<"non-para. construct."<<endl;
    }
    Student(string name){
        this->name = name;
        cout<<"para constructor"<<endl;
    }

};

class Print{ //function overloading
    public:
    void show(int x){
        cout<<"int : "<<x<<endl;
    }
    void show(char ch){
        cout<<"char : "<<ch<<endl;
    }


};

int main(){
    //depending on the contecxt constructors are called accordingly.
    //constructor overloading
    Student s1;
    Student s2("ramu");
    //function overloading
    Print p1;
    p1.show(264);
    p1.show('u');
    //operator overloading
    //assignment operator
    //not only assigns integer to integer variable
    //it can be overloaded to assign a string to string variable
    int x=10;
    string a="uhbb";
    int y=x;
    string b=a;
    //study operator overloading
}