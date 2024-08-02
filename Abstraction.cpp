#include <bits/stdc++.h>
using namespace std;

class Shape{ //wherever we find pure virtual functions it automatically becomes a abstract class
    virtual void draw() = 0;//pure virtual function
    //it's meaning is this function should be implemented in all its derived classes
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};

int main(){

    Circle c;
    c.draw();

    return 0;
}