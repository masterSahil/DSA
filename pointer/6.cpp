#include<iostream>
using namespace std;

void addition(int *n1, int *n2)
{
    cout<<"Sum is: "<< *n1 + *n2 << endl;
}

int main()
{
    int a = 5, b = 3;
    addition(&a, &b);
}