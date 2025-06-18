#include<iostream>
using namespace std;

class LenearSort{
    private:
        int size;
        int *arr;

    public:
        LenearSort(int size)
        {
            this->size = size;
            this->arr = new int[this->size];
        }

        ~LenearSort()
        {
            delete[] arr;
        }

        void input();
        void display();
        int searching();
};

int main()
{
    int n;

    cout << "Please Enter the Size: ";
    cin >> n;

    LenearSort LS(n);

    LS.input();

    LS.display();

    int founded_index = LS.searching();

    if (founded_index == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else{
        cout << "Element Found at Index " << founded_index << endl;
    }
    
}

void LenearSort::input()
{
    cout << "Please Enter the Array Elements: " << endl;
    for (int i=0; i<this->size; i++)
    {
        cout << "Arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void LenearSort::display()
{
    cout << "Array Elements are: ";
    for (int i=0; i<this->size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int LenearSort::searching()
{
    int target;

    cout << "Please Enter the Target Element: ";
    cin >> target;

    for (int i=0; i<this->size; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}
