#include<iostream>
using namespace std;

int main()
{
    int *a = new int(6); 

    cout << "Memory Address: " << a << endl;
    cout << "Memory Value: " << *a << endl;

    delete a;

    cout << "Memory Address: " << a << endl;
    cout << "Memory Value: " << *a << endl;
}

/*
    Note:
    -----
    
    -> while creating dynamic memory so we must remove heap memory by delete operator
    -> in Dynamic Memory value cannot be automatically removes while program is terminated
    -> we can use delete operator by 2 ways
        1. delete a;        2. delete(a);

    -> after deletion variable still remains, but the value from heap get removes
    -> so that's why address comes true but value gets garbage value in output after deletion
    -> after deleting a is dangling pointer

*/