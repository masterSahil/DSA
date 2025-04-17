// tsrs

#include<iostream>
using namespace std;

int add(int a, int b);

int main()
{
    int a, b;

    cout<<"Please Enter the A: ";
    cin>>a;

    cout<<"Please Enter the B: ";
    cin>>b;

    int ans = add(a, b); //here a and b are passing as a arguements
    cout<<"Sum of A: "<<a<< " and B: "<<b<<" is: "<<ans<<endl;
}

int add(int x, int y) // here x and y are passing as a parameters
{
    return x+y;
}