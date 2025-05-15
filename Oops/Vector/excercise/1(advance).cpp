#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};

    cout << "Original Vector: " << endl;
    for(int elem : v)
    {
        cout << elem << " ";
    }

    int n=v.size();

    vector<int> rv(v.size());

    cout << endl << "Reversed Vector: " << endl;
    for(int i=0; i<v.size(); i++)
    {
        rv.at(i) = v[n-1];
        n--;
    }

    for(int i=0; i<rv.size(); i++)
    {
        cout << rv[i] << " ";
    }
}