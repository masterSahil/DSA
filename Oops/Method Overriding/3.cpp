#include<iostream>
using namespace std;

class India
{
    public:
        void wearing()
        {
            cout << "India: Dhoti-Kurta" << endl;
        }
};

class Pak : public India
{
    public:
        void wearing()
        {
            cout << "Pakistan: Pathani-Kurta" << endl;
            India obj;
            obj.wearing();
        }
};

int main()
{
    Pak obj2;

    obj2.wearing();
}