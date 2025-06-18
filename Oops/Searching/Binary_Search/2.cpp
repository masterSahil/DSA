#include<iostream>
using namespace std;

class BinarySearch{
    private: 
        int *arr;
        int size;

    public:
        BinarySearch(int size)
        {
            this->size = size;
            this->arr = new int[this->size];
        }

        ~BinarySearch()
        {
            delete[] arr;
        }

        void input();
        void display();
        void sorting();
        int searching(int, int, int);
};



int main()
{
    int n;

    cout << "Please Enter the Size of Array: ";
    cin >> n;

    BinarySearch bs(n);

    bs.input();
    
    cout << "Original Array is: " << endl;
    bs.display();

    bs.sorting();

    cout << "Sorted Array is: " << endl;
    bs.display();

    int target;

    cout << "Please Enter the Target: ";
    cin >> target;

    int founded_index = bs.searching( 0, n-1, target);

    if (founded_index == -1)
    {
        cout << "Your Target " << target << " not founded in array";
    }
    else{
        cout << "Your Target " << target << " Founded at " << founded_index << " position" << endl;
    }
}

void BinarySearch::input()
{
    cout << "Please Enter the Array Elements: " << endl;
    for(int i=0; i<this->size; i++)
    {
        cout << "Arr["<<i<<"]: ";
        cin >> this->arr[i];
    }
}

void BinarySearch::display()
{
    for(int i=0; i<this->size; i++)
    {
        cout << this->arr[i] << " ";
    }
    cout << endl;
}

void BinarySearch::sorting()
{
    int pass = 1;

    while (pass < this->size)
    {
        for(int i=0; i<this->size - 1; i++)
        {
            if (this->arr[i] > this->arr[i+1])
            {
                int temp = this->arr[i];
                this->arr[i] = this->arr[i+1];
                this->arr[i+1] = temp;
            }
        }
        pass++;
    }
    
}

int BinarySearch::searching(int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    
    int mid = (low + high) / 2;

    if (target == this->arr[mid])
    {
        return mid;
    }
    else if (target < this->arr[mid])
    {
        return searching(low, mid-1, target);
    }
    else {
        return searching(mid+1, high, target);
    }
}
