#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size, i;

    cout << "Enter the size of Vector: ";
    cin >> size;

    vector<int> v(size);
    vector<int> ans;

    cout << "Enter Vector Elements: " << endl;
    for(i=0; i<v.size(); i++)
    {
        cout << "vector [" << i << "]: ";
        cin >> v[i];
    }

    cout << "Original Vector: " << endl;
    for(i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\nAdjacent of Vector Elements: " << endl;
    for(i=1; i<v.size()-1; i++)
    {
        if ((v[i-1] > v[i]) && (v[i+1] > v[i]))
        {
            ans.push_back(v[i]);
        }
    }

    for(i=0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}