#include<iostream>
using namespace std;

// swapping with 3rd Variable

int main()
{
    int a, b, c;

    a = 5;
    b = 3;

    c = a;
    a = b;
    b = c;

    cout<<"Value of A is: "<< a <<endl;
    cout<<"Value of B is: "<< b <<endl;
}