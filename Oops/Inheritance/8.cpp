#include<iostream>
using namespace std;

// method overloading
class Vehicle{
    public: 
        void truck()
        {
            cout<<"Truck is Running empty ... "<<endl;
        }
        void truck(int n)
        {
            cout<<"Truck is Running with "<< n << " pessangers ..." <<endl;
        }
        void truck(int n1, int n2)
        {
            cout<<"Truck is Running with "<< n1 << " pessangers with " << n2 << "kg of goods ..." <<endl;
        }
};

int main()
{
    Vehicle obj;

    obj.truck();
    obj.truck(12);
    obj.truck(8, 1200);
}