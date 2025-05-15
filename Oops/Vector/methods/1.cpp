#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1; // empty vector

    vector<int> v2(5, 80); // initialized with default size and value

    cout << "Vector 2: \n";
    for(int elem : v2)
    {
        cout << elem << endl;
    }

    vector<int> v3{14, 34, 84, 45, 35};

    cout << "\nVector 3: \n";
    for(int elem : v3)
    {
        cout << elem << endl;
    }
}