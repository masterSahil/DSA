#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node *head;
    int count;

    LinkedList() {
        this->head = NULL;
        this->count = 0;
    }

    void addBegin(int data) {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }

    void addEnding(int data) {
        Node *newNode = new Node(data);
        if (this->head == NULL) {
            this->head = newNode;
        } else {
            Node *ptr = this->head;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->count++;
    }

    void addAtPosition(int data, int position) {
        if (position < 0 || position > count) {
            cout << "Invalid Position ..." << endl;
            return;
        }

        Node *newNode = new Node(data);
        if (position == 0) {
            newNode->next = this->head;
            this->head = newNode;
        } else {
            Node *ptr = this->head;
            for (int i = 0; i < position - 1; i++) {
                ptr = ptr->next;
            }
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
        count++;
    }

    void traversing() {
        Node *ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }

    void updateAtPosition(int data, int position) {
        if (position < 0 || position >= this->count) {
            cout << "Invalid Position ... " << endl;
            return;
        }

        Node *ptr = this->head;
        for (int i = 0; i < position; i++) {
            ptr = ptr->next;
        }
        ptr->data = data;
    }

    void deleteBeginning() {
        if (this->head == NULL || this->count == 0) {
            cout << "List is already Empty ... " << endl;
            return;
        }
        Node *ptr = this->head;
        this->head = this->head->next;
        delete ptr;
        this->count--;
    }

    void deleteEnding() {
        if (this->head == NULL || this->count == 0) {
            cout << "List is already Empty ... " << endl;
            return;
        }

        if (this->head->next == NULL) {
            delete this->head;
            this->head = NULL;
        } else {
            Node *ptr = this->head;
            while (ptr->next->next != NULL) {
                ptr = ptr->next;
            }
            delete ptr->next;
            ptr->next = NULL;
        }
        this->count--;
    }

    void deleteAtPosition(int position) {
        if (this->head == NULL || this->count == 0) {
            cout << "List is already Empty ... " << endl;
            return;
        }

        if (position < 0 || position >= this->count) {
            cout << "Invalid Position ..." << endl;
            return;
        }

        if (position == 0) {
            deleteBeginning();
            return;
        }

        Node *prev = this->head;
        for (int i = 0; i < position - 1; i++) {
            prev = prev->next;
        }

        Node *current = prev->next;
        prev->next = current->next;
        delete current;
        this->count--;
    }
};

void info() {
    cout << "\n------ MENU ------" << endl;
    cout << "1: Insert Node at Beginning" << endl;
    cout << "2: Insert Node at End" << endl;
    cout << "3: Insert Node at Any Position" << endl;
    cout << "4: Update Node at Any Position" << endl;
    cout << "5: Delete Node at Beginning" << endl;
    cout << "6: Delete Node at Any Position" << endl;
    cout << "7: Delete Node at End" << endl;
    cout << "8: Traverse List" << endl;
    cout << "0: Exit" << endl;
}

int main() {
    LinkedList list;
    int choice, elem, position;

    do {
        info();
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Value: ";
            cin >> elem;
            list.addBegin(elem);
            cout << "Node Inserted at Beginning.\n";
            break;

        case 2:
            cout << "Enter Value: ";
            cin >> elem;
            list.addEnding(elem);
            cout << "Node Inserted at End.\n";
            break;

        case 3:
            cout << "Enter Value: ";
            cin >> elem;
            cout << "Enter Position (0 to " << list.count << "): ";
            cin >> position;
            list.addAtPosition(elem, position);
            break;

        case 4:
            cout << "Enter New Value: ";
            cin >> elem;
            cout << "Enter Position (0 to " << list.count - 1 << "): ";
            cin >> position;
            list.updateAtPosition(elem, position);
            cout << "Node Updated.\n";
            break;

        case 5:
            list.deleteBeginning();
            break;

        case 6:
            cout << "Enter Position (0 to " << list.count - 1 << "): ";
            cin >> position;
            list.deleteAtPosition(position);
            break;

        case 7:
            list.deleteEnding();
            break;

        case 8:
            cout << "Linked List Elements:\n";
            list.traversing();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice. Try again.\n";
            break;
        }

    } while (choice != 0);

    return 0;
}