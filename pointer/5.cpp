// wap to get the sum of array element with udf

#include<iostream>
using namespace std;

// Passing an Array
// Printing an Array Elements with UDF


// n is a name of array with null size, to give size in it is optional, it can automatiaclly get the actuall size it, if it is empty
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