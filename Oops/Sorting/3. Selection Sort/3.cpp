#include<iostream>
using namespace std;

class Selection{
    public:
        int size;
        int *arr;

        Selection(int size)
        {
            this->size = size;
            this->arr = new int[size]; 
        }
        
        ~Selection()
        {
            delete arr;
        }

        void input();
        void display();
        void sort();
};

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;

    Selection sort(n);

    sort.input();

    cout << "Original Array: ";
    sort.display();

    sort.sort();

    cout << endl << "Sorted Array: ";
    sort.display();
}

void Selection::input()
{
    cout << "Enter Array Elements: " << endl;
    for(int i=0; i<this->size; i++)
    {
        cout << "Arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void Selection::display()
{
    for(int i=0; i<this->size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Selection::sort()
{
    for(int i=0; i<size-1; i++)
    {
        int min = i;
        for(int j=i+1; j<size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}