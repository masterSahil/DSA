#include<iostream>
#include<string.h>
using namespace std;

class Car {
    private:
        char brand[50];
        char model[50];
        int year;
        float price;

    public:
        // setter
        void setData() 
        {
            cout<<"Car Brand: ";
            cin>>brand;
        
            cout<<"Car Model: ";
            cin>>model;
        
            cout<<"Car Year: ";
            cin>>year;
        
            cout<<"Car Price: ";
            cin>>price;
        }

        // getter
        void getData()
        {
            cout<<"Car Brand: " << brand 
            <<", Car Model: " << model 
            <<", Car Year: " << year
            <<", Car Price: " << price << endl;
        }
};

int main() 
{
    Car car1;

    car1.setData();
    car1.getData();
   
}