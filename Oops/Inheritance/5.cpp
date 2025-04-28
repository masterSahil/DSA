#include<iostream>
using namespace std;

// 4. Multiple Inheritance (2 or more child, 1 parent)

class College{
    public:
        void learnPython()
        {
            cout << "Learning Python" << endl;
        }
};

class Tution{
    public:
        void learnJS()
        {
            cout << "Learning JS" << endl;
        }
};

class Student : public Tution, public College {
    // Student will Inherit College and Tution
};

int main()
{
    Student obj;

    obj.learnPython();
    obj.learnJS();
}