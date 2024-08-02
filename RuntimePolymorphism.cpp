#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void getInfo(){
    cout<<"parent class"<<endl;
    }
    virtual void getInfo1(){
    cout<<"parent class"<<endl;
    }

};
class Child : public Parent{
    public:
    void getInfo(){
    cout<<"child class"<<endl;
    }
    void getInfo1(){
    cout<<"child class"<<endl;
    }

};


int main(){
   
    Child ch;
    ch.getInfo();
    ch.getInfo1();
     return 0;
}