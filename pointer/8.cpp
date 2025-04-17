#include<iostream>
using namespace std;

// swapping without 3rd Variable

int main()
{
    int a = 10, b = 15;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"Value of A is: "<< a <<endl;
    cout<<"Value of B is: "<< b <<endl;
}