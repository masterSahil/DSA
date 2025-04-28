#include<iostream>
#include<string.h>
using namespace std;

class Car{

    // by default private
    public: // Access Specifier/Modifier  // Visibility Specifier/Modifier
        char model[50];
        char color[50];
        char brand[50];
        int year;
};

int main()
{
    Car car1, car2;
    
    strcpy(car1.color, "White");
    strcpy(car1.brand, "Tata");
    strcpy(car1.model, "Punch");
    car1.year = 2015;

    strcpy(car2.color, "Black");
    strcpy(car2.brand, "Mahindra");
    strcpy(car2.model, "Scorpio N");
    car2.year = 2022;

    cout << "\tColor: " << car1.color
         << "\tBrand: " << car1.brand
         << "\tModel: " << car1.model 
         << "\tYear: " << car1.year <<endl;


    cout << "\tColor: " << car2.color
         << "\tBrand: " << car2.brand
         << "\tModel: " << car2.model 
         << "\tYear: " << car2.year <<endl;

}