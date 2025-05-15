#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i;

    vector<int> v = {5, 7, 2, 4, 9};
    int n = v.size();

    for(i=0; i<=n-1; i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl << "Reversed Vector: " << endl;

    for(i=n-1; i>=0; i--)
    {
        cout << v.at(i) << " ";
    }
}