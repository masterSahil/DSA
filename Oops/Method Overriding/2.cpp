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
        }
};

int main()
{
    India obj;
    Pak obj2;

    obj.wearing();
    obj2.wearing();
}