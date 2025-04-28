#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
        int grid;
        char name[50];
        int age;
        char course[50];
        static char school[50];
    
    public: 
        void setter()
        {
            cout<<"grid: ";   cin>>this->grid;
            cout<<"name: ";   cin>>this->name;
            cout<<"age: ";    cin>>this->age;
            cout<<"course: "; cin>>this->course;
        }

        void getter()
        {
            cout << "grid: "      << this->grid
                 << ", name: "    << this->name
                 << ", age: "     << this->age
                 << ", course: "  << this->course
                 << ", school: "  << this->school << endl;
        }

        static void changeSchool()
        {
            strcpy(Student::school, "PQR");
        }
};

char Student::school[50] = "XYZ";

int main()
{
    int i, n;

    cout<<"Number of Students: ";
    cin>>n;

    Student students[n];

    for(i=0; i<n; i++)
    {
        students[i].setter();
    }

    cout<<"==========="<<endl;

    Student::changeSchool();
     
    for(i=0; i<n; i++)
    {
        students[i].getter();
    }

}