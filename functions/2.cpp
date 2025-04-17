// tsrn

#include<iostream>
using namespace std;

void add(int a, int b)
{
    cout<<"Sum is "<<a+b; 
}

int main()
{
    int num1, num2;

    cout<<"Enter num1: ";
    cin>>num1;

    cout<<"Enter num2: ";
    cin>>num2;

    add(num1, num2);
}