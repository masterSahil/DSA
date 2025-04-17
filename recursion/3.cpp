// Factorial Number by recursion

#include<iostream>
using namespace std;

int fact(int n){

    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int num;

    cout<<"Enter a Number: ";
    cin>>num;

    int ans = fact(num);
    cout<<"Factorial is: "<<ans;
}