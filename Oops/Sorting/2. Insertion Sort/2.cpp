#include<iostream>
using namespace std;

void input(int [], int);
void display(int [], int);
void sorting(int [], int);

int main()
{
    int n;

    cout << "Please Enter the Size: ";
    cin >> n;

    int arr[n];

    cout << "Please Enter the Elements: " << endl;
    input(arr, n);

    cout << "Original Array: ";
    display(arr, n);

    sorting(arr, n);

    cout << "Sorted Array: ";
    display(arr, n);

}

void input(int arr[], int n)
{
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
    cout << endl;
}

void sorting(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];

        int j;
        for(j=i-1; j>=0 && key < arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }

}