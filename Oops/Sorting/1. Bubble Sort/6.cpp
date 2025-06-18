#include<iostream>
using namespace std;

class Bubble_Sort{
    private:
        int size;
        int *arr;
        bool isInputDone;

    public:
        Bubble_Sort(int n)
        {
            this->size = n;
            this->arr = new int[n];
            this->isInputDone = false;
        }

        ~Bubble_Sort()
        {
            delete[] arr;
        }

        void input();
        void display();
        void sorted1();
        void sorted2();
        bool isInput() { return isInputDone; }
};

void info();

int main()
{
    int n, choice;

    cout << "Enter the Size of Array: ";
    cin >> n;

    Bubble_Sort sorting(n);

    do {
        info();
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sorting.input();
            break;

        case 2:
            if (!sorting.isInput()) {
                cout << "Please input array elements first!\n";
            } else {
                sorting.sorted1();
                cout << "Array sorted in Ascending order.\n";
            }
            break;

        case 3:
            if (!sorting.isInput()) {
                cout << "Please input array elements first!\n";
            } else {
                sorting.sorted2();
                cout << "Array sorted in Descending order.\n";
            }
            break;

        case 4:
            if (!sorting.isInput()) {
                cout << "Please input array elements first!\n";
            } else {
                cout << "Array elements: ";
                sorting.display();
            }
            break;
        
        case 0:
            cout << "Exited Successfully ..." << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
        }

        cout << "----------------------------------------" << endl;

    } while (choice != 0);
}

void info()
{
    cout << "\n------ MENU ------" << endl;
    cout << "Press 1 for Input Elements" << endl;
    cout << "Press 2 for Sorting in Ascending" << endl;
    cout << "Press 3 for Sorting in Descending" << endl;
    cout << "Press 4 for Display" << endl;
    cout << "Press 0 for Exit" << endl;
}

void Bubble_Sort::input()
{
    cout << "Enter The Elements of Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }
    isInputDone = true;
}

void Bubble_Sort::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

void Bubble_Sort::sorted1()
{
    int pass = 1;
    while (pass < size)
    {
        for (int i = 0; i < size - 1; i++)
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

void Bubble_Sort::sorted2()
{
    int pass = 1;
    while (pass < size)
    {
        for (int i = 0; i < size - 1; i++) 
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
}
