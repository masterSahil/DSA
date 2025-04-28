#include<iostream>
using namespace std;

class Car{
    private:
        char color[50];
        char brand[50];
        char model[50];
        int year;
    
    public: 
        void setter()
        {
            cout<<"color: "; cin>>this->color;
            cout<<"brand: "; cin>>this->brand;
            cout<<"model: "; cin>>this->model;
            cout<<"year: ";  cin>>this->year;
        }

        void getter()
        {
            cout << "color: "   << this->color
                 << ", brand: " << this->brand
                 << ", model: " << this->model
                 << ", year: "  << this->year << endl;
        }
};

int main()
{
    int i, n;

    cout<<"Number of Cars: ";
    cin>>n;

    Car cars[n];

    for(i=0; i<n; i++)
    {
        cars[i].setter();
    }

    cout<<"==========="<<endl;

    for(i=0; i<n; i++)
    {
        cars[i].getter();
    }
}