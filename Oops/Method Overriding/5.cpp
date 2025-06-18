#include<iostream>
using namespace std;

class India
{
    public:
        virtual void wearing()
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
    India *obj;

    India o1;
    Pak o2;

    obj = &o1; // assining India(parent obj) to pointer obj

    obj->wearing();

    obj = &o2; // assining Pak(child obj) to pointer obj
    obj->wearing();
}