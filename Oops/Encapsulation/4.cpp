#include<iostream>
#include<string.h>
using namespace std;

class Car{

    private: 
        char model[50];
        char color[50];
        char brand[50];
        int  year;

    public: 
        // setter
        void setData(char brand[], char model[], char color[], int year) 
        {
            strcpy(this->brand, brand);
            strcpy(this->model, model);
            strcpy(this->color, color);
            this->year = year;
        }

        // getter
        void getData() 
        {
            cout<<"Car Color: "<<this->color<<endl;
            cout<<"Car Brand: "<<this->brand<<endl;
            cout<<"Car Model: "<<this->model<<endl;
            cout<<"Car Year: " <<this->year<<endl;
        }
};


int main()
{
    Car car1, car2;

    car1.setData("Tata", "Altroz", "Blue", 2022);

    car2.setData("Maruti", "Alto 800", "White", 2010);
    
    cout<<"\nGetting Car1 Data: "<<endl;
    car1.getData();
    cout<<"\nGetting Car2 Data: "<<endl;
    car2.getData();

}