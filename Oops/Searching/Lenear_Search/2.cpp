#include<iostream>
#include<vector>
using namespace std;

class Searching{
    private:
        vector<int> search;
    public:
        Searching(int n)
        {
            search.resize(n);
        }

        void input(int n);
        void display();
        void searching();
};

int main()
{
    int n;
    cout << "Please Enter Array Size: ";
    cin >> n;

    Searching search(n);

    search.input(n);

    search.display();

    search.searching(); 
}

void Searching::input(int n)
{
    cout << "Enter the Array Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Array["<<i<<"]: ";
        cin >> search[i];
    }
}

void Searching::display()
{
    cout << "Array is: ";
    for(int elem : search)
    {
        cout << elem << " ";
    }
    cout << endl;
}

void Searching::searching()
{
    int target;

    cout << "Please Enter the Target Element: ";
    cin >> target;

    int i=-1;
    for(int elem : search)
    {
        if (elem == target)
        {
            cout << "target " << target << " founded at " << i << endl;
        }
        i++;
    }
    cout << "Target " << target << " Not Found";
    
}   
