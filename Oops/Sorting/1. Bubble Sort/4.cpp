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

        void input()
        {
            cout << "Enter The Elements of Array: " << endl;
            for (int i = 0; i < size; i++)
            {
                cout << "Array[" << i << "]: ";
                cin >> arr[i];
            }
        }

        void display()
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl << endl;
        }

        void sorted()
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