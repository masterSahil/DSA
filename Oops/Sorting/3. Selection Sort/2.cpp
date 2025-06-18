#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the Array Size: ";
    cin >> n;

    int arr[n];

    cout << "Enter Array Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    // Selection Sort
    // step 1: suppose i index is always minimum
    // step 2: excluding min all are unsorted
    // step 3: find min in unsorted and swap

    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)  
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;  
    }

    cout << endl << "Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}