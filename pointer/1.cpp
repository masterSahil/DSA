#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int b=8;
    int *p;
    int *q;

    p = &a;  // assigning address of a to p 
    q = &b;

    cout<<"Value of a is: "<< *p <<endl; //here printing pointer of p means value of p
    cout<<"Address of a is: "<< p <<endl;
    cout<<"Value of b is: "<< *q <<endl;
    cout<<"Address of q is: "<< q <<endl;


    // correct
    // int a = 5;
    // int *p = &a;

    // cout<<*p;
}