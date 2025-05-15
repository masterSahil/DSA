#include<iostream>
using namespace std;

template <typename T>
void addition(T a, T b) // here, addition parameter will get data type of passed value as arguement
{
    cout << a+b << endl;
}

int main()
{
    addition(27.46, 43.84);
}