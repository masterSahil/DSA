#include<iostream>
using namespace std;

class vehicle{
    public:
    void truck()
    {
        cout << "Empty truck is running ... " << endl;
    }

    void truck(int n)
    {
        cout << "truck is running with " << n << " passengers" << endl;
    }

    void truck(int n, int q)
    {
        cout << "truck is running with " << n << " passengers and " << q << " goods ..." << endl;
    }
};

int main()
{
    vehicle obj;

    obj.truck();
    obj.truck(10);
    obj.truck(10, 12);
}

// Static Polymorphism has 2 types
// compile time (static Polymorphism / static binding)
// run time (dynamic Polymorphism / dynamic binding)