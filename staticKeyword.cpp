#include<bits/stdc++.h>
using namespace std;

void func(){
    int x=0;
    cout<<"x: "<<x<<endl;
    x++;
}
void func1(){
    static int x=0; //initialisation is done only once
    cout<<"x: "<<x<<endl;
    x++;
}
class A{
    public:
    //int x=0;
     int x=0;

    void incX(){
        x=x+1;
    }

};
class ABC {
    public:
    ABC(){
        cout<<"constructor"<<endl;
    }
    ~ABC(){
        cout<<"destructor"<<endl;
    }
};
int main(){
    
    // func();
    // func();
    // func();
    // func1();
    // func1();
    // func1();
    // A obj;
    // cout<<obj.x<<endl;
    // obj.incX();
    // cout<<obj.x<<endl;

    // A obj1;
    // obj.x=100;
    // obj1.x=200;
    // cout<<obj.x<<endl;
    // obj.incX();
    // cout<<obj1.x<<endl;
    if(true){
        static ABC obj;
    }
    cout<<"end of main fnx"<<endl;
    return 0;
}