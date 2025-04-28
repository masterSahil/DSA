#include<iostream>
using namespace std;

// 1.Single Inheritance
class A{
    public:
        int x=5;
};

// A is Parent Class B is child class
// Class B is Inherit of Class A
class B : public A {
    public:
        int y=8;
};

int main()
{
    B obj;

    cout<< obj.y << endl;    
    cout<< obj.x << endl;    
}