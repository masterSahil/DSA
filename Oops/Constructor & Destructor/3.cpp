#include<iostream>
#include<string.h>
using namespace std;

class City{
    private:
        char name[50];
        int year;

    public:
        City(char name[50], int year)
        {
            strcpy(this->name, name);
            this->year = year;
        }

        void getData()
        {
            cout<<"Name: "<<this->name<<endl;
            cout<<"Year: "<<this->year<<endl;
        }
};

int main()
{
    City c1("surat", 2006);
    City c2("mathura", 2000);

    c1.getData();
    c2.getData();
}