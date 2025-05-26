#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

int main()
{
    Node *HEAD = NULL;

    HEAD = new Node();
    HEAD->data = 30;
    HEAD->next = NULL;

    Node *N2 = new Node();
    N2->data = 20;
    N2->next = NULL;
    HEAD->next = N2;

    Node *N3 = new Node();
    N3->data = 70;
    N3->next = NULL;
    N2->next = N3;

    Node *N4 = new Node();
    N4->data = 80;
    N4->next = NULL;
    N3->next = N4;

    cout << "Head: Data " << HEAD->data << ", Next: " << HEAD->next << endl;
    cout << "N2: Data " << N2->data << ", Next: " << N2->next << endl;
    cout << "N3: Data " << N3->data << ", Next: " << N3->next << endl;
    cout << "N4: Data " << N4->data << ", Next: " << N4->next << endl;
}