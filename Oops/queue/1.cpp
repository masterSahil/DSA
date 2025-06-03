#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr;
        int front;
        int rear;
        int capacity;
        int counter;

        Queue(int n)
        {
            this->capacity = n;
            arr = new int[this->capacity];
            this->front = -1;
            this->rear = -1;
            this->counter = 0;
        }

        ~Queue()
        {
            delete[] arr;
        }

        void enqueue()
        {
            int elem;

            cout << "Enter new elem: ";
            cin >> elem;

            if (this->rear == this->capacity - 1)
            {
                cout << "Queue is Overflow ..." << endl;
            }
            else if (this->front == -1 && this->rear == -1)
            {
                this->front = 0;
                this->rear = 0;
            }
            else{
                this->arr[this->rear] = elem;
                this->counter++;
            }
        }

        void dequque()
        {
            if (this->front == this->capacity - 1)
            {
                cout << "Queue Underflow ... " << endl;
            }
            else{
                this->front++;
                this->counter--;
            }
        }

        void get_front()
        {
            if (this->front == -1)
            {
                cout << "Queue is Empty ... " << endl;
            }
            else{
                cout << this->arr[front] << endl;
            }
        }

        void get_rear()
        {
            if (this->rear == -1)
            {
                cout << "Queue is Empty ..." << endl;
            }
            else{
                cout << this->arr[rear] << endl;
            }
        }

        void display()
        {
            if (this->counter == 0)
            {
                cout << "Queue is Empty ..." << endl;
            }
            else{
                for(int i=this->front; i<=this->rear; i++)
                {
                    cout << this->arr[i] << " ";
                }
                cout << endl;
            }
        }

        void isEmpty()
        {
            if (this->counter == 0)
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
                cout << "Queue is Full ..." << endl;
            }
            else{
                cout << "Queue is not Full ..." << endl;
            }
        }

        void size()
        {
            cout << "Size of Queue is: " << this->counter << endl;
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
    int choice;
    Queue queue(5);

    do
    {
        info();

        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            queue.enqueue();
            break;

        case 2:
            queue.dequque();
            break;

        case 3:
            queue.get_front();
            break;

        case 4:
            queue.get_rear();
            break;

        case 5:
            queue.display();
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
            cout << "Exited Succssfully ..." << endl;
            break;
        
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (choice != 0);
    
}