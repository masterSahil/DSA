#include<iostream>
using namespace std;

template <typename T>
T addition(T a, T b) // while returning from udf, T has to mention instead of void
{
    return a+b;
}

int main()
{
    cout << addition(12, 45) << endl;
    cout << addition(12.45, 45.24) << endl;
}