#include<iostream>
using namespace std;

class City{
    private:
        char name[50];
        int year;

    public:
        // constructor as setter
        City()
        {
            cout<<"Name: ";
            cin>>name;

            cout<<"Year: ";
            cin>>year;
        }
        // getter
        void getData()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Year: "<<year<<endl;
        }
};

int main()
{
    City c1, c2;

    c1.getData();
    c2.getData();
}