#include<iostream>
using namespace std;

// Array of Pointer
// Scale Pointer

int main()
{
    int a[5] = { 12, 45, 78, 23, 49};

    int *p;
    int i;

    p = &a[0];

    for(i=0; i<=4; i++)
    {
        cout<<"&a[" << i << "]: " << p+i << ", value= " << *(p+i) << endl;
    }
}