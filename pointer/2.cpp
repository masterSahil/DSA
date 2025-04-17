#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *p;
    int **q; // pointer of pointer q

    p = &a;
    q = &p;

    cout<<"Value of a is: "<< a << endl;
    cout<<"Value of a is: "<< *p << endl;
    cout<<"Value of a is: "<< **q << endl;
}