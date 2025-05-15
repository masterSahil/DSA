#include<iostream>
using namespace std;

int main()
{
    int size;
    int *arr;

    cout << "Enter Array Size: ";
    cin >> size;

    arr = new int[size];

    if (arr == NULL)
    {
        cout << "Memory Allocation is Failed ..." << endl;
        return 1; // excepting 0 will accept as false
    }
    else 
    {
        cout << "Memory Allocation is successfull ... " << endl;
    }

    delete[] arr; // dangling pointer
    arr = NULL;   // null pointer
    
    if (arr == NULL)
    {
        cout << "Memory DeAllocation is Successfull ..." << endl;
    }
    else 
    {
        cout << "Memory DeAllocation is Failed ... " << endl;
        return 1;
    }
}