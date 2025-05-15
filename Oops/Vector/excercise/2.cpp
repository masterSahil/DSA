#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    // vector<int> dummy = {0,0,0};
    vector<int> dummy(n, 0);

    vector<vector<int>> v(n, dummy);

    for(vector<int> elem : v)
    {
        for(int i : elem)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}