#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class List {
public:
    int size;
    Node* head;

    List() {
        this->head = NULL;
        this->size = 0;
    }

    void InsertLast(int data);
    void disp();
    void length();
    void deletion(int data);
};

class Stack {
public:
    int top;
    int capacity;
    int size;
    int* arr;

    Stack(int n) {
        this->arr = new int[n];
        this->capacity = n;
        this->top = -1;
        this->size = 0;
    }

    ~Stack() {
        delete[] arr;
    }

    void push();
    void pop();
    void stack_disp();
    bool isPalindrome(string str);
};

void info();
void array();
void vectorr();

int main() {
    List list;
    Stack* obj = nullptr;

    int choice, elem, choice2;

    while (choice != 0) {
        info();
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            array();
            break;

        case 2:
            vectorr();
            break;

        case 3:
            cout << "Please Insert the Element: ";
            cin >> elem;

            list.InsertLast(elem);
            list.disp();
            list.length();
            break;

        case 4:
            cout << "Enter Element to Delete: ";
            cin >> elem;
            list.deletion(elem);
            list.disp();
            list.length();
            break;

        case 5:
            if (obj == nullptr) {
                int cap;
                cout << "Enter Stack Capacity: ";
                cin >> cap;
                obj = new Stack(cap);
            }

            do {
                cout << "\nStack Operations:\n";
                cout << "1. Push\n2. Pop\n3. Display\n0. Back to Main Menu\n";
                cout << "Enter Your Choice: ";
                cin >> choice2;

                switch (choice2) {
                case 1:
                    obj->push();
                    break;
                case 2:
                    obj->pop();
                    break;
                case 3:
                    obj->stack_disp();
                    break;
                case 0:
                    cout << "Returning to Main Menu...\n";
                    break;
                default:
                    cout << "Invalid Stack Operation Choice\n";
                }

            } while (choice2 != 0);
            break;

        case 6: {
            string str;
            cout << "Enter any String: ";
            cin >> str;

            int size = str.size();
            Stack stack(size);

            bool result = stack.isPalindrome(str);

            if (result) {
                cout << str << " is Palindrome" << endl;
            }
            else {
                cout << str << " is not Palindrome" << endl;
            }
            break;
        }

        case 0:
            cout << "Exited Successfully" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
}

void info() {
    cout << endl << " ================ " << endl;
    cout << "1. Array Manipulation " << endl;
    cout << "2. Vector Operations " << endl;
    cout << "3. Singly Linked List " << endl;
    cout << "4. Deletion on Linked List " << endl;
    cout << "5. Stack Operations " << endl;
    cout << "6. Palindrome " << endl;
    cout << "0. Exit " << endl;
    cout << " ================ " << endl;
}

void array() {
    int n;
    float sum = 0, avg = 0;

    cout << "Enter Array Size: ";
    cin >> n;

    int array[n];

    cout << "Enter the array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Array[" << i << "]: ";
        cin >> array[i];
    }

    int max = array[0];
    cout << "forward Array Elements Are: ";
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        cout << array[i] << " ";
        sum += array[i];
    }

    cout << endl << "Reversed Array Elements Are: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    avg = sum / n;
    cout << endl << endl << "Sum : " << sum << endl << "Average : " << avg << endl << "Maximum is : " << max;
}

void List::length() {
    cout << "List Length is : " << this->size << endl;
}
void List::disp() {
    if (size == 0) {
        cout << "Linked List is Empty" << endl;
        return;
    }

    Node* ptr = this->head;

    cout << "Linked List : | ";
    while (ptr != NULL) {
        cout << ptr->data << " | ";
        ptr = ptr->next;
    }
    cout << endl << endl;
}

void List::InsertLast(int elem) {
    Node* newNode = new Node(elem);
    if (this->size == 0) {
        newNode->next = this->head;
        this->head = newNode;
        size++;
    }
    else {
        Node* ptr = this->head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        size++;
    }
}

void List::deletion(int elem) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    if (temp->data == elem) {
        head = temp->next;
        delete temp;
        size--;
        cout << "Element " << elem << " deleted from the list." << endl;
        return;
    }

    while (temp != NULL && temp->data != elem) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Element " << elem << " not found in the list." << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
    size--;
    cout << "Element " << elem << " deleted from the list." << endl;
}

void vectorr() {
    vector<int> v;
    int elem;

    cout << "Enter -1 to Stop" << endl;
    while (true) {
        cout << "Enter Elem: ";
        cin >> elem;

        if (elem == -1) {
            break;
        }

        bool isDuplicate = false;
        for (int e : v) {
            if (e == elem) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            v.push_back(elem);
        }
    }

    cout << "Final Vector without duplicates is: ";
    for (int e : v) {
        cout << e << " ";
    }
    cout << endl;
}

void Stack::push() {
    if (top == capacity - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }

    int elem;
    cout << "Enter New Elem: ";
    cin >> elem;

    this->arr[++top] = elem;
    this->size++;
    cout << "Push Operation Successfully ..." << endl;
}

void Stack::pop() {
    if (this->top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }

    this->top--;
    this->size--;
    cout << "Pop Operation Successful ..." << endl;
}

void Stack::stack_disp() {
    if (top == -1) {
        cout << "Stack is Empty ..." << endl;
        return;
    }

    for (int i = top; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

bool Stack::isPalindrome(string str) {
    for (int i = 0; i < str.size(); i++) {
        this->arr[i] = str[i];
    }
    this->top = str.size() - 1;

    for (int i = 0, j = top; i < str.size(); i++, j--) {
        if (str[i] != this->arr[j]) {
            return false;
        }
    }

    return true;
}
