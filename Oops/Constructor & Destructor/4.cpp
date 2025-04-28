#include<iostream>
using namespace std;

class Car{
    public:
    Car()
    {
        cout<<"Hello" << endl;
    }
    Car(int a)
    {
        cout<<"Value of A is: "<< a << endl;
    }
    ~Car()
    {
        cout<<"I am Destructor"<<endl;
    }
};

int main()
{
    Car();
    Car(38);
}