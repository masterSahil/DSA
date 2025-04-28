#include<iostream>
using namespace std;

class India{
    public:
        void politics()
        {
            cout << "India: Mahatma Gandhi" << endl;
        }
};

class Pak : public India{
    public:
        void politics()
        {
            cout << "Pak: Mohammad Jinnah" << endl;
            India::politics();
        }
};

int main()
{
    Pak aman;

    aman.politics();
}