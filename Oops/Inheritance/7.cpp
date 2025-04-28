#include<iostream>
using namespace std;

class Instructor{
    public:
        void greet()
        {
            cout << "Hello Everyone" << endl;
        }
};

class Person1 : public Instructor {

};

class Person2 : public Instructor {

};

class Person3 : public Person1, public Person2 {

};



int main()
{
    Person3 obj;

    obj.Person1::greet(); // solved ambiguity error by membership label operator
}