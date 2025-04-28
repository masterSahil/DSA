#include<iostream>
using namespace std;

class A{
    public:
        void dis()
        {
            cout<<"Hello Everyone"<<endl;
        }
};

class B : public A{
    // here, dis() function automatically Inherite from Class A
};

int main()
{
    B obj;

    obj.dis();
}