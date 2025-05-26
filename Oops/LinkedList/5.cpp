#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

int main()
{
    Node *head = new Node();
    head->data = 25;
    head->next = NULL;

    Node *current = new Node();
    current->data = 35;
    current->next = NULL;
    head->next = current;

    current = new Node();
    current->data = 18;
    current->next = NULL;
    head->next->next = current;

    current = new Node();
    current->data = 95;
    current->next = NULL;
    head->next->next->next = current;

    // inserting new element at the ending
    current = new Node();
    current->data = 83;
    current->next = NULL;
    head->next->next->next->next = current;		

    Node *ptr = new Node();
    ptr = nullptr;
    ptr = head;

    while (ptr != NULL)
    {
       cout << "Data: " << ptr->data << endl;
       ptr = ptr->next;
    }
    

}