#include<iostream>
using namespace std;

class City{
    private:
        char name[50];
        int year;

    public:
        // default constructor -> constructor never has return type like void or int
        City()
        {   
            cout<<"Welcome to the City ... "<<endl;
        }
};

int main()
{
    City c1;    
}