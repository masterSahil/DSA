#include<iostream>
using namespace std;

class Queue{
    private: 
        int *arr;
        int capacity;
        int count;
        int rear;
        int front;

    public:
        Queue(int capacity)
        {
            this->capacity = capacity;
            this->arr = new int[this->capacity];
            this->front = -1;
            this->rear = -1;
            this->count = 0;
        }

        ~Queue()
        {
            delete[] arr;
        }

        void enqueue(int element)
        {
            if (this->rear == this->capacity - 1)
            {
                cout << "Queue is Overflow" << endl;
            }
            else if (this->front == -1 && this->rear == -1)
            {
                this->front = 0;
                this->rear = 0;
                this->arr[rear] = element;
                this->count++;
            }
            else
            {
                this->rear++;
                this->arr[this->rear] = element;
                this->count++;
            }
        }

        void dequeue()
        {
            if (this->front == -1 && this->rear == -1)
            {
                cout << "Stack is Underflow" << endl;
            }
            else if(this->front == this->rear)
            {
                this->front = -1;
                this->rear = -1;
                this->count--;
            }
            else{
                this->front++;
                this->count--;
            }
        }

        void getFront()
        {
            if (this->front == -1)
            {
                cout << "Queue is Empty ..." << endl;
            }
            else
            {
                cout << this->arr[this->front] << endl;
            }
            
        }

        void getRear()
        {
            if (this->rear == -1)
            {
                cout << "Queue is Empty ... " << endl;
            }
            else
            {
                cout << this->arr[this->rear] << endl;
            }
            
        }

        void getDisplay()
        {
            if (this->front == -1 && this->rear == -1)
            {
                cout << "Queue is Empty ..." << endl;
            }
            else
            {
                for(int i=front; i<=rear; i++)
                {
                    cout << this->arr[i] << " ";
                }
                cout << endl;
            }
            
        }

        void isEmpty()
        {
            if (this->front == -1 && this->rear == -1)
            {
                cout << "Queue is Empty ..." << endl;
            }
            else{
                cout << "Queue is not Empty ..." << endl;
            }
        }

        void isFull()
        {
            if (this->rear == this->capacity - 1)
            {
                cout << "Queue is Full" << endl;
            }
            else {
                cout << "Queue is not Full" << endl;
            }
        }

        void size()
        {
            cout << this->count << endl;
        }

};

void info()
{
    cout << "Press 1 for Enqueue " << endl;
    cout << "Press 2 for Dequeue " << endl;
    cout << "Press 3 for Front " << endl;
    cout << "Press 4 for Rear " << endl;
    cout << "Press 5 for Display " << endl;
    cout << "Press 6 for isEmpty " << endl;
    cout << "Press 7 for isFull " << endl;
    cout << "Press 8 for Size " << endl;
    cout << "Press 0 for Exit " << endl;
}

int main()
{
    Queue queue(5);
    int choice, element;

    do
    {
        info();

        cout << "Please enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element: ";
            cin >> element;

            queue.enqueue(element);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.getFront();
            break;

        case 4:
            queue.getRear();
            break;

        case 5:
            queue.getDisplay();
            break;

        case 6:
            queue.isEmpty();
            break;

        case 7:
            queue.isFull();
            break;

        case 8:
            queue.size();
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