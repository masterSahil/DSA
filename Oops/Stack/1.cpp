#include<iostream>
using namespace std;

class Stack{
    public:
        int top;
        int capacity;
        int size;
        int *arr;

    Stack(int n)
    {
        this->arr = new int[n];
        this->capacity = n;
        this->top = -1;
        this->size = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push()
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        
        this->top++;

        int elem;

        cout << "Enter New Elem: ";
        cin >> elem;

        arr[top] = elem;
        this->size++;
        cout << "Push Operation Successfully ... " << endl;
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        
        this->top--;
        this->size--;
        cout << "Pop Operation Successfull ..." << endl;
    }

    void peek()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        
        cout << "Top Element is " << arr[top] << endl;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty ..." << endl;
            return;
        }
        
        for(int i=top; i>=0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    void empty()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty ... " << endl;
        }
        else
        {
            cout << "Stack is not empty ..." << endl;
        }
    }

    void isFull()
    {
        if (this->top  == capacity -1)
        {
            cout << "Stack is full ..." << endl;
        }
        else
        {
            cout << "Stack is not full ..." << endl;
        }
    }

    void length()
    {
        cout << "Stack Size is: " << this->size << endl;
    }
};

void desclaimer()
{
    cout << "Press 1 for push an Element" << endl;
    cout << "Press 2 for pop an Element" << endl;
    cout << "Press 3 for peak an Element" << endl;
    cout << "Press 4 for display an Element" << endl;
    cout << "Press 5 to check if a stack is empty or not" << endl;
    cout << "Press 6 to check if a stack is full or not" << endl;
    cout << "Press 7 to check the size of a stack" << endl;
    cout << "Press 0 to Exit" << endl;
}

int main()
{
    int choice;
    Stack s1(5);

    do
    {
        desclaimer();

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s1.push();
            break;

        case 2:
            s1.pop();
            break;

        case 3:
            s1.peek();
            break;

        case 4:
            s1.display();
            break;

        case 5:
            s1.empty();
            break;

        case 6:
            s1.isFull();
            break;

        case 7:
            s1.length();
            break;

        case 0:
            cout << "Exit Successfully ..." << endl;
            break;
        
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (choice != 0);
    
}