#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {3, 2, 5, 3, 7, 5, 8};
    
    cout << "Original Vector: " << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v.at(i) << "";
    }

    cout << "Adjacent Elements are: " << endl;
    for(int i=1; i<v.size(); i++)
    {
        if ((v[i-1] > v[i]) && (v[i+1] > v[i]))
        {
            cout << v[i] << " ";
        }
    }
}