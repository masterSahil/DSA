#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int capacity;
        int count;
        int *arr;

    public:
        Stack(int n)
        {
            this->top = -1;
            this->capacity = n;
            this->count = 0;
            this->arr = new int[n];
        }

        ~Stack()
        {
            delete[] arr;
        }

        void push()
        {
            if (count == capacity)
            {
                cout << "Stack is Overflow" << endl;
                return;
            }
            
            this->top++;
            int elem;

            cout << "Enter Element: ";
            cin >> elem;

            arr[this->top] = elem;
            this->count++;
            cout << "Push Operation Successfully" << endl; 
        }

        void pop()
        {
            if (top == -1)
            {
                cout << "Stack is Underflow" << endl;
                return;
            }
            
            top--;
            count--;
            cout << "Pop Operation Successfully ... " << endl;
        }

        void peek()
        {
            if (top == -1)
            {
                cout << "Stack is Underflow" << endl;
                return;
            }
            
            cout << "Peek is: " << arr[top] << endl;
        }

        void isEmpty()
        {
            if (top == -1)
            {
                cout << "Stack is Empty ..." << endl;
            }
            else{
                cout << "Stack is not Empty ... " << endl;
            }
        }

        void isFull()
        {
            if (top == capacity - 1)
            {
                cout << "Stack is Full ..." << endl; 
            }
            else
            {
                cout << "Stack is not Full ..." << endl;
            }
        }

        void display()
        {
            if (top == -1)
            {
                cout << "Stack is Empty" << endl;
            }
            
            for(int i=top; i>=0; i--)
            {
                cout << arr[i] << endl;
            }
            cout << endl;
        }

        void size()
        {
            cout << "Size of Stack is: " << count << endl;
        }
};

void info()
{
    cout << "Press 1 for Push" << endl;
    cout << "Press 2 for Pop" << endl;
    cout << "Press 3 for Peek" << endl;
    cout << "Press 4 for Display" << endl;
    cout << "Press 5 for isEmpty" << endl;
    cout << "Press 6 for isFull" << endl;
    cout << "Press 7 for Size" << endl;
    cout << "Press 0 for Exit" << endl;
}

int main()
{
    int choice;
    Stack stacks(5);

    do
    {
        info();

        cout << "Please Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            stacks.push();
            break;

        case 2:
            stacks.pop();
            break;

        case 3:
            stacks.peek();
            break;

        case 4:
            stacks.display();
            break;

        case 5:
            stacks.isEmpty();
            break;

        case 6:
            stacks.isFull();
            break;

        case 7:
            stacks.size();
            break;

        case 0:
            cout << "Exited Successfully ..." << endl;
            break;
        
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (choice != 0);
    
}