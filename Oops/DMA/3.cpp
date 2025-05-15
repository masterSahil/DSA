#include<iostream>
using namespace std;

int main()
{
    int *a = new int(6); // new operator creates heap memory

    cout << "Memory Address: " << a << endl;
    cout << "Memory Value: " << *a << endl;
}

/*
    Note:
    -----
            -> Static Memory created by Compiler Automatically
            ex. x= 7;

            -> Dynamic Memory created by Programmer Manually
            -> Variables Creates in Stack but it's values stores in Heap Memory

    // 3 Ways to Create Dynamic Memory in Heap

    1.
        int *a = new int;
        *a = 6;

    2.
        int *a = new int();
        *a = 6;

    3. 
        int *a = new int(6);

*/