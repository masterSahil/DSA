#include<iostream>
using namespace std;

int main()
{
    int *a = new int(6); 

    cout << "Memory Address: " << a << endl;
    cout << "Memory Value: " << *a << endl;

    delete a;

    cout << "Memory Address: " << a << endl;
    cout << "Memory Value: " << *a << endl;

    a = new int[3];

    a[0] = 5;
    a[1] = 2;
    a[2] = 4;

    cout << "Memory Address: " << a << endl;
    cout << "Memory Value: " << *a << endl; // this returns 5 because now dangling pointer is pointing to base value 5

    delete[] a;

    // a is now become again a dangling pointer


    cout << "Memory Address: " << a << endl;
    cout << "Memory Value: " << *a << endl; // now it will return again a garbage value

    a = NULL;

    cout << "Memory Address: " << a << endl;

    // now a is null pointer and so now it returns nothing and memory get free
    // now a not reusable
}