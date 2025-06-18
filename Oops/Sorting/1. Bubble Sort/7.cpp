#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort Using vector
class BubbleSort
{
    vector<int> arr;

public:
    BubbleSort(int n)
    {
        arr.resize(n);
    }

    void input_arr();
    void display_arr();
    void ascend_order();
    void descend_order();
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    BubbleSort bs(n);

    bs.input_arr();

    cout << "Original Array: " << endl;
    bs.display_arr();

    bs.ascend_order();

    cout << "Sorted(Ascending)  Array: " << endl;
    bs.display_arr();

    bs.descend_order();

    cout << "Sorted(descending)  Array: " << endl;
    bs.display_arr();

    return 0;
}

void BubbleSort::input_arr()
{
    cout << "Enter the elements: ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
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