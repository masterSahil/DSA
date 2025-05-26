#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    public:
        Node *head;
        int size;

    LinkedList()
    {
        this->size = 0;
        this->head = NULL;
    }

    void addBegin(int elem)
    {
        Node *newNode = new Node(elem);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void searchElement(int elem)
    {
        Node* ptr = head;
        int index = 0;
        bool found = false;

        while (ptr != NULL)
        {
            if (ptr->data == elem)
            {
                cout << "Element " << elem << " found at index: " << index << endl;
                found = true;
                break;
            }
            ptr = ptr->next;
            index++;
        }

        if (!found)
        {
            cout << "Element " << elem << " not found in the list." << endl;
        }
    }


    void deleteBegin()
    {
        Node *ptr = head;
        head = head->next;
        ptr->next = NULL;
        delete ptr;
        ptr = NULL;
        size--;
    }

    void deleteEnd()
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            size--;
            return;
        }
        
        Node *ptr = head;

        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete ptr->next->next;
        ptr->next = NULL;
        size--;
    }

    void deleteAtPosition(int pos)
    {
        if (pos == 0)
        {
            deleteBegin();
            return;
        }
        
        Node *prev = head;
        Node *current = head;

        for(int i=0; i<pos; i++)
        {
            current = current->next;
        }

        for(int i=0; i<pos-1; i++)
        {
            prev = prev->next;
        }
        prev->next = current->next;
        delete current;
        current = NULL;
        prev = NULL;
        delete prev;
        size--;
    }

    void deleteAtData(int elem)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        if (head->data == elem)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node with data: " << elem << endl;
            return;
        }

        Node *prev = head;
        Node *curr = head->next;

        while (curr != NULL && curr->data != elem)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == NULL)
        {
            cout << "Element " << elem << " not found." << endl;
            return;
        }

        prev->next = curr->next;
        delete curr;
        cout << "Deleted node with data: " << elem << endl;
        size--;
    }

    void reverse()
    {
        Node *ptr = head;

        int *arr = new int[size];
        ptr = head;
        for (int i = 0; i < size; i++)
        {
            arr[i] = ptr->data;
            ptr = ptr->next;
        }

        cout << "List in reverse: ";
        for (int i = size - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
    }

    void traverse()
    {
        if (size == 0)
        {
            cout << "Linked List is Empty" << endl << endl;
            return;
        }
        
        Node *ptr = head;

        while (ptr != NULL)
        {
            cout << ptr->data << " | ";
            ptr = ptr->next;
        }
        cout << endl << endl;
    }

    void showSize()
    {
        cout << "Linkedlist Size is: " << size << endl; 
    }
};

void info()
{
    cout << "Press 1 for Traverse" << endl;
    cout << "Press 2 for Insert at Beginning" << endl;
    cout << "Press 3 for Search an Element" << endl;
    cout << "Press 4 for Delete at Beginning" << endl;
    cout << "Press 5 for Delete at Position" << endl;
    cout << "Press 6 for Delete at Ending" << endl;
    cout << "Press 7 for Delete by Data" << endl;
    cout << "Press 8 for Reverse" << endl;
    cout << "Press 9 for Size of List" << endl;
    cout << "Press 0 for Exit" << endl;
}

int main()
{
    int choice, elem, pos;
    LinkedList list;

    do
    {
        info();

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            list.traverse();
            break;
       
        case 2:
            cout << "Enter New Element: ";
            cin >> elem;

            list.addBegin(elem);
            cout << "Element added to beginning successfully ..." << endl;
            break;
       
        case 3:
            cout << "Enter Element to Search: ";
            cin >> elem;

            list.searchElement(elem);
            break;
       
        case 4:
            list.deleteBegin();
            cout << "element deleted at beginning successfully ..." << endl;
            break;
       
        case 5:
            cout << "Enter Position to Delete: ";
            cin >> pos;

            list.deleteAtPosition(pos);
            cout << "delete at position " << pos << "successfully ..." << endl;
            break;
       
        case 6:
            list.deleteEnd();
            cout << "delete at ending successfully ..." << endl;
            break;
       
        case 7:
            cout << "Enter Element to Data: ";
            cin >> elem;
            list.deleteAtData(elem);
            cout << "delete at data successfully ..." << endl;
            break;
       
        case 8:
            list.reverse();
            break;
       
        case 9:
            list.showSize();
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