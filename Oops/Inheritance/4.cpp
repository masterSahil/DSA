#include<iostream>
using namespace std;

// Here, Animal is Parent Class, Mammal and Aqua is Child Class

// 3. Hierarchical( 1-parent, min-2 child )

class Animal{
    public:
        void sound()
        {
            cout<<"Making an Sound"<<endl;
        }
};

class Mamal : public Animal{
    // Mammal will Inherit Animal 
};

class Aqua : public Animal{
    // Aqua will Inherit Animal
};


int main()
{
    Mamal obj;
    Aqua obj1;

    obj.sound();
    obj1.sound();
}