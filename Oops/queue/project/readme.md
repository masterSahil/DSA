# Stack Implementation in C++

This project provides a simple command-line interface to demonstrate the implementation of a **Stack** data structure using C++. It is designed with object-oriented principles and supports standard stack operations like push, pop, peek, check if empty/full, view current size, and display all elements.

---

## 🧠 Concepts Covered

- Object-Oriented Programming (OOP)
- Dynamic Memory Allocation
- Encapsulation using private and public members
- Stack operations with array implementation
- Interactive CLI-based menu system

---

## 📁 File Structure

project/
│
├── main.cpp # Main program file containing the stack class and logic
└── README.md # Project documentation


---

## 📌 Features

- ✅ Push element onto stack
- ✅ Pop element from stack
- ✅ Peek at the top element
- ✅ Display all stack elements
- ✅ Check if stack is empty
- ✅ Check if stack is full
- ✅ View current stack size

---

## ⚙️ How It Works

### Stack Class

- **Private Members:**
  - `int top` — Index of the top element
  - `int capacity` — Maximum size of the stack
  - `int count` — Current number of elements
  - `int *arr` — Dynamic array for stack elements

- **Public Methods:**
  - `push()` — Adds an element to the stack
  - `pop()` — Removes the top element
  - `peek()` — Shows the top element
  - `display()` — Prints all elements
  - `isEmpty()` — Checks if the stack is empty
  - `isFull()` — Checks if the stack is full
  - `size()` — Shows the current number of elements

---

## ▶️ How to Run

1. **Compile the Program**

```bash
g++ main.cpp -o stack
```

2. Run the Executable
./stack

3. Follow the Interactive Menu
You’ll be prompted with choices like push, pop, peek etc.

## Sample Output

Press 1 for Push
Press 2 for Pop
Press 3 for Peek
Press 4 for Display
Press 5 for isEmpty
Press 6 for isFull
Press 7 for Size
Press 0 for Exit
Please Enter Choice: 1
Enter Element: 42
Push Operation Successfully


🧑‍💻 Author
Master Sahil
C++ Developer & DSA Learner
GitHub: masterSahil