#include<iostream>
using namespace std;

void input(int arr[], int n)
{
    cout << "Enter The Elements of Array: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }
}   

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

void sorted(int arr[], int n)
{
    int pass = 1;
    while (pass < n)
    {
        for(int i=0; i<n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = temp;
            }
        }
        pass++;
    }
}

int main()
{
    int n;

    cout << "Enter the Size of Array: ";
    cin >> n;

    int arr[n];

    input(arr, n);

    cout << "Original Array: " << endl;
    display(arr, n);

    sorted(arr, n);
    
    cout << "Sorted Array: " << endl;
    display(arr, n);
}