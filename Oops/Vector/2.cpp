#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i;

    vector<int> numbers1;
    vector<int> numbers2(5);                          // int a[5];
    vector<int> numbers3(5, 11);                      // int a[5] = { 11, 11, 11, 11, 11 };
    vector<int> numbers4{12, 34, 45, 64, 73};         // int a[5] = { 12, 34, 45, 64, 73 }
    vector<int> numbers5 = { 12, 34, 45, 64, 73 };    // int a[5] = { 12, 34, 45, 64, 73 }  

    numbers5.push_back(99);
    numbers5.push_back(34);

    for(i=0; i<numbers5.size(); i++)
    {
        cout << numbers5[i] << endl;
    }

}

/*
// Methods of Vector

    1.  push_back()
    2.  pop_back()
    3.  insert()
    4.  erase()
    5.  clear()
    6.  size()
    7.  empty()
    8.  at()
    9.  front()
    10. back()
    11. begin()
    12. end()
*/