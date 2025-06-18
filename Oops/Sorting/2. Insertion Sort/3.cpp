#include<iostream>
using namespace std;

class Sorting{
    public:
        int *arr;
        int size;

        Sorting(int size)
        {
            this->size = size;
            this->arr = new int[size];
        }

        ~Sorting()
        {
            delete[] arr;
        }

        void input();
        void display();
        void sorting();
};

int main()
{
    int n;

    cout << "Please Enter the Size: ";
    cin >> n;

    Sorting sort(n);

    cout << "Please Enter the Elements: " << endl;
    sort.input();

    cout << "Original Array: ";
    sort.display();

    sort.sorting();

    cout << "Sorted Array: ";
    sort.display();

}

void Sorting::input()
{
    for(int i=0; i<size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }
}
void Sorting::display()
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Sorting::sorting()
{
    for(int i=1; i<size; i++)
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