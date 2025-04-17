// tnrs

#include<iostream>
using namespace std;

int add();

int main()
{
    int sum = add();
    cout<<"Sum is: "<<sum;
}

int add()
{
    int a=5, b=30;

    return a+b;
}