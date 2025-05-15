# 🧠 Student Management System in C++

This project is a simple **Student Management System** built using **C++**, demonstrating the usage of **template classes**, **vectors**, and **basic OOP principles** like encapsulation and abstraction.

## 🚀 Features

- ✅ Add a new student (ID and name)
- 📋 Display all students
- 🔍 Search student by ID
- ❌ Delete student by ID
- 📦 Uses templates to allow flexibility with student ID types (e.g., `int`, `string`)
- 🧱 Built with STL's `vector` for dynamic storage

## 🛠️ Technologies Used

- C++ Template Classes
- STL `vector`
- Object-Oriented Programming (OOP)
- Standard I/O

## 📄 Code Structure

### 1. `Memory<T>` class
- Stores `id` and `name` of a student.
- Has methods to:
  - Display student info (`disp`)
  - Get student ID (`getId`)

### 2. `studentManagment<T>` class
- Manages a list of students using `vector<Memory<T>>`.
- Methods:
  - `addStudent(id, name)`
  - `displayStudent()`
  - `searchStudent(id)`
  - `removeStudent(id)`

### 3. `main()` function
- Provides a console menu interface for interacting with the system.

## Sample Output

1 for Add Students
2 for Display All Students
3 for Search Students
4 for Delete Student
0 for Exit

Enter Choice: 1
Enter Student Id: 101
Enter Student Name: John
Student Added Successfully ...

Enter Choice: 2
Id: 101   Name: John

Enter Choice: 3
Enter Student Id: 101
Id: 101   Name: John

Enter Choice: 4
Enter Student Id: 101
Student Deleted Successfully ...