#include<iostream>
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
};

int main()
{
    Stack stack(MAX);

    int num;

    cout << "Enter any number: ";
    cin >> num;

    while (num != 0)
    {
        stack.push(num % 2);
        num = num / 2;
    }

    stack.display();
    
}