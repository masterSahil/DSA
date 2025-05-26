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
    head->data = 20;

    Node *current = new Node();
    current->data = 30;
    head->next = current;

    current = new Node();
    current->data = 40;
    head->next->next = current;

    current = new Node();
    current->data = 50;
    head->next->next->next = current;

    Node *ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    
}