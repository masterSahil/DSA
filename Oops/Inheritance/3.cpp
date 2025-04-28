#include<iostream>
#include<string.h>
using namespace std;

// 2. Multilevel Inheritance
class A{
    public:
        char val[50] = "Hello";
};

class B : public A{
    public:
        int a = 10;
};

class C : public B{
    public:
        int b = 20;
};


int main()
{
    C obj;

    cout<<obj.val<<endl;
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
}