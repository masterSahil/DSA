// tnrn
#include<iostream>
using namespace std;

// it is neccessory to declare udf function first while udf is defined below main function
// Declaring User Defined Function
void add();

int main()
{
    add();
}

// Defined UDF
void add() {
    int a=5, b=10;

    cout<<a+b;
}