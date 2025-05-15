#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1; 

    v1.push_back(25); // pushes at the last
    v1.push_back(76);
    v1.push_back(18);

    cout << "First Index Value: " << v1.front() << endl; // returns the first index value
    cout << "Middle Index Value: " << v1.at(1) << endl; // returns the value of at certain index
    cout << "Last Index Value: " << v1.back() << endl; // returns the last index value
    
    v1.insert(v1.begin() + 1, 100);
    for(int elem : v1)
    {
        cout << elem << " ";
    }
    cout << endl;
    cout << "size after insert: " << v1.size() << endl;
    

    v1.insert(v1.end() - 1, 100);
    for(int elem : v1)
    {
        cout << elem << " ";
    }
    cout << endl;
    cout << "size after insert: " << v1.size() << endl;

    v1.pop_back(); // removes an element from the last
    v1.clear(); // clear entire vector

    cout << "size after clear: " << v1.size() << endl; // returns the size of vector
    cout << "is Empty: " << v1.empty() << endl; // returns the bool value 0 or 1 (0 for false || 1 for true)

    
}