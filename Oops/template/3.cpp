#include<iostream>
using namespace std;

template <typename T, typename T2>
void addition(T a, T2 b) 
{
    cout << a + b << endl;
}

int main()
{
    addition(13, 67.35);
    addition(33, 43.19);
}