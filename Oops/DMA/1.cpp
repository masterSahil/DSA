#include<iostream>
using namespace std;

// 2 types of Memory
// 1.Static 2.Dynamic
// DisAdvantages of Static/Stack Memory

int main()
{
    int arr[3] = {1, 2, 3}; // once memory assigned of three so we can only add 3 elements
    
    int arr1[5] = {1, 2}; // if we have created array with 5 elem so 3 memory block will waste

    int arr2[3] = {1, 2, 3, 4, 5}; // we can not store more elem then difined size, bcoz
                                   // there is no way to extend memory once defined
    
}