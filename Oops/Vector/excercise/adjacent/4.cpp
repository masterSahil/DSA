#include<iostream>
#include<vector>
using namespace std;

vector<int> adjacent(vector<int> v)
{
    int i;
    vector<int> ans;
    for(i=1; i<v.size(); i++)
    {
        if ((v[i-1] > v[i]) && (v[i+1] > v[i]))
        {
            ans.push_back(v[i]);
        }
    }

    return ans;
}

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

    cout << "\nAdjacent Elements are: \n";
    vector<int> sv = adjacent(v);

    for(i=0; i<sv.size()-1; i++)
    {
        cout << sv.at(i) << " ";
    }
}