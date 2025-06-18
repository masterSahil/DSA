#include <iostream>
#include <vector>
using namespace std;

// Menu Driven using vector
class BubbleSort
{
    vector<int> arr;
    bool isInputDone;

public:
    BubbleSort(int n)
    {
        arr.resize(n);
        this->isInputDone = false;
    }

    void input_arr();
    void display_arr();
    void ascend_order();
    void descend_order();
    bool isInput() { return isInputDone; }
};
void mainMenu();
int main()
{
    int n, choice;
    cout << "Enter the size of the array: ";
    cin >> n;

    BubbleSort bs(n);

    do
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            bs.input_arr();
            break;

        case 2:
            if (!bs.isInput())
            {
                cout << "Please input array elements first\n";
            }
            else
            {
                bs.ascend_order();
                cout << "Array sorted in Ascending Order\n";
            }
            break;

        case 3:
            if (!bs.isInput())
            {
                cout << "Please input array elements first\n";
            }
            else
            {
                bs.descend_order();
                cout << "Array sorted in Descending Order\n";
            }
            break;

        case 4:
            if (!bs.isInput())
            {
                cout << "Please input array elements first \n";
            }
            else
            {
                cout << "Array elements: ";
                bs.display_arr();
            }
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}

void mainMenu()
{
    cout << "\n-----------MENU-----------" << endl
         << "Press 1 for Input Elements" << endl
         << "Press 2 for Sorting Elements in Ascending Order" << endl
         << "Press 3 for Sorting Elements in Descending Order" << endl
         << "Press 4 for Display" << endl
         << "Press 0 for Exit" << endl
         << "Enter your choice: ";
}

void BubbleSort::input_arr()
{
    cout << "Enter the elements: " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    isInputDone = true;
    cout << endl;
}

void BubbleSort::display_arr()
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort::ascend_order()
{
    int pass = 1;
    while (pass < arr.size())
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        pass++;
    }
}

void BubbleSort::descend_order()
{
    int pass = 1;
    while (pass < arr.size())
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        pass++;
    }
}