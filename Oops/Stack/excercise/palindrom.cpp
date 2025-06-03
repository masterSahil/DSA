#include<iostream>
#include<string.h>
using namespace std;
#define MAX 100

class Stack{
    public:
        int top;
        int capacity;
        int *arr;
        int size;

    Stack(int n)
    {
        this->top = -1;
        this->capacity = n;
        this->arr = new int(n);
        this->size = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int elem)
    {
        top++;
        arr[top] = elem;
        size++;
    }

    void display()
    {
        for(int i=size-1; i>=0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    bool isPalindrome(string str)
    {
        for(int i=top, j=0; i>=0, j<str.size(); i--, j++)
        {
            if (str[i] == str[j])
            {
                return true;
            }
            else{
                return false;
            }
        }
    }
};

int main()
{
    string str;

    cout << "Enter any String: ";
    cin >> str;

    int size = str.size();

    Stack stack(size);

    for(int i=0; i<size; i++)
    {
        stack.push(str[i]);
    }

    bool isPalindrome = stack.isPalindrome(str);

    if (isPalindrome == true)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is not Palindrome";
    }
    
    
}