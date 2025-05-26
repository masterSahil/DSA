#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node *next;
};

int main()
{
    Node *HEAD = new Node();

    HEAD->data = 50;
    
    Node *current = new Node();
    current->data = 65;
    HEAD->next = current;

    current = new Node();
    current->data = 75;
    HEAD->next->next = current;
    HEAD->next->next->next = nullptr;

    cout << HEAD->data << endl;
    cout << HEAD->next->data << endl;
    cout << HEAD->next->next->data << endl;

    cout << HEAD->next << endl;
    cout << HEAD->next->next << endl;
    cout << HEAD->next->next->next << endl;

}