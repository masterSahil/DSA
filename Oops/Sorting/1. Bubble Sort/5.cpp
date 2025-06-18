#include<iostream>
using namespace std;

class Bubble_Sort{
    private:
        int size;
        int *arr;

    public:
        Bubble_Sort(int n)
        {
            this->size = n;
            this->arr = new int[n];
        }

        ~Bubble_Sort()
        {
            delete[] arr;
        }

        void input();
        void display();
        void sorted();
};

int main()
{
    int n;

    cout << "Enter the Size of Array: ";
    cin >> n;

    Bubble_Sort sorting(n);

    sorting.input();

    cout << "Original Array: " << endl;
    sorting.display();

    sorting.sorted();
    
    cout << "Sorted Array: " << endl;
    sorting.display();
    
}

void Bubble_Sort::input()
{
    cout << "Enter The Elements of Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }
}

void Bubble_Sort::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

void Bubble_Sort::sorted()
{
    int pass = 1;
    while (pass < size)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
}