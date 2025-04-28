#include<iostream>
using namespace std;

// Pointer of Array

int main()
{
    int a[5] = {12, 45, 78, 23, 49};
    int *p[5]; // *p[0], *p[1] .... *p[4]
    int i;

    for(i=0; i<=4; i++)
    {
        p[i] = &a[i];
    }

    for(i=0; i<=4; i++)
    {
        cout<<"&a["<<i<<"]: " << p[i] << ", Value= " <<*p[i] <<endl;
    }
}