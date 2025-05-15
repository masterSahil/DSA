#include<iostream>
using namespace std;

/*
    Stack
    -----

    1. main() stack frame created along with a and b variables while compiling main() func
    2. sum() stack frame created along with x and y variables while compiling sum() func
    3. sum() stack frame destroy while compiling main() func again
    3. main() stack frame destroy while entire program terminated

*/

int sum(int x, int y)
{
    return x+y;
}

int main()
{
    int a=24, b=6;
    cout << sum(a, b) << endl;
}