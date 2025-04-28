#include<iostream>
using namespace std;

// 4. Hybrid Inheritance
class Arti_Mam{ 
    public:
        void ask()
        {
            cout<<"Kuchh Padh Lo"<<endl;
        }
};

class Sahil : virtual public Arti_Mam{
    // Sahil inherits from Arti_Mam
};

class Moksh : virtual public Arti_Mam{
    // Moksh inherits from Arti_Mam
};

class Nihal : public Moksh, public Sahil{
    // Nihal inherits from both Moksh and Sahil (Hybrid Inheritance)
};


int main()
{
    Nihal get;

    get.ask();
}