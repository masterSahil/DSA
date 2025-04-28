#include<iostream>
#include<string.h>
using namespace std;

class Car{

    public: 
        char model[50];
        char color[50];
        char brand[50];
        int year;
};

int main()
{
    Car car1, car2;

    cout<<"===== Car 1 ====="<<endl;

    cout<<"Car1 Color: "; cin>>car1.color;
    cout<<"Car1 Brand: "; cin>>car1.brand;
    cout<<"Car1 Model: "; cin>>car1.model;
    cout<<"Car1 Year: "; cin>>car1.year;

    cout<<"===== Car 2 ====="<<endl;

    cout<<"Car2 Color: "; cin>>car2.color;
    cout<<"Car2 Brand: "; cin>>car2.brand;
    cout<<"Car2 Model: "; cin>>car2.model;
    cout<<"Car2 Year: "; cin>>car2.year;    

    cout << "Color: " << car1.color <<"\t"
         << "Brand: " << car1.brand <<"\t"
         << "Model: " << car1.model <<"\t"
         << "Year: " << car1.year <<endl;


    cout << "Color: " << car2.color <<"\t"
         << "Brand: " << car2.brand <<"\t"
         << "Model: " << car2.model <<"\t" 
         << "Year: " << car2.year <<endl;

}