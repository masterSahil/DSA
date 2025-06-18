#include<iostream>
using namespace std;

void input(int [], int);
void display(int [], int);
void sorting(int [], int);
int searching(int [], int, int, int, int);

int main()
{
    int n;

    cout << "Please Enter the Size of Array: ";
    cin >> n;

    int array[n];

    input(array, n);
    
    cout << "Original Array is: " << endl;
    display(array, n);

    sorting(array, n);

    cout << "Sorted Array is: " << endl;
    display(array, n);

    int target;

    cout << "Please Enter the Target: ";
    cin >> target;

    int founded_index = searching(array, n, 0, n-1, target);

    if (founded_index == -1)
    {
        cout << "Your Target " << target << " not founded in array";
    }
    else{
        cout << "Your Target " << target << " Founded at " << founded_index << " position" << endl;
    }
}

void input(int arr[], int n)
{
    cout << "Please Enter the Array Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Arr["<<i<<"]: ";
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
    int pass = 1;

    while (pass < n)
    {
        for(int i=0; i<n - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        pass++;
    }
    
}

int searching(int arr[], int n, int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    
    int mid = (low + high) / 2;

    if (target == arr[mid])
    {
        return mid;
    }
    else if (target < arr[mid])
    {
        return searching(arr, n, low, mid-1, target);
    }
    else {
        return searching(arr, n, mid+1, high, target);
    }
}
