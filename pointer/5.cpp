#include<iostream>
using namespace std;

// Passing an Array

void addition(int n[])
{
    int i, sum=0;
    for(i=0; i<=4; i++)
    {
        sum += n[i];
    }
    cout<<"Sum of Array is: "<<sum<<endl;
}

int main()
{
    int a[5] = {12, 45, 78, 23, 49};
    addition(a);
}