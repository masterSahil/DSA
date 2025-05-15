#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class Memory{
    private:
        T id;
        string name;

    public:
        Memory(T id, string name)
        {
            this->id = id;
            this->name = name;
        }

        T getId()
        {
            return id;
        }

        void disp()
        {
            cout << "Id: " << this->id << " Name: " << this->name << endl;
        }
};

template <typename T>
class studentManagment {
    private:
        vector<Memory<T>> students;

    public:
        void addStudent(T id, string name) {
            students.push_back(Memory<T>(id, name));
            cout << "Student Added Successfully ... " << endl << endl;
        }
        void displayStudent() {
            if (students.empty())
            {
                cout << "No Students Found !!!" << endl << endl;
            }
            else
            {
                for(int i=0; i<students.size(); i++)
                {
                    students[i].disp();
                    cout << endl;
                }
            }
        }   
        void searchStudent(T id) {
            if (students.empty())
            {
                cout << "No Students Found !!!" << endl << endl;
            }
            else
            {
                for(int i=0; i<students.size(); i++)
                {
                    if (students[i].getId() == id )
                    {
                        students[i].disp();
                        cout << endl;
                        return;
                    }
                }
                cout << "Student with this Id Doesn't Exist ... " << endl << endl;
            }
            
        }
        void removeStudent(T id) {
            if (students.empty())
            {
                cout << "No Students found to Delete ... " << endl << endl;
            }
            else
            {
                for(int i=0; i<students.size(); i++)
                {
                    if (students[i].getId() == id)
                    {
                        students.erase(students.begin() + i);
                        cout << "Student Deleted Successfully ... " << endl << endl;
                        return;
                    }
                }
                cout << "Student with this Id Doesn't Exist ... " << endl << endl;
            }
        }
};

int main()
{
    int choice, id;
    string name;

    studentManagment<int> students;

    do
    {
        cout << "1 for Add Students\n2 for Display All Students\n3 for Search Students\n4 for Delete Student\n0 for Exit\n";
        
        cout << "Enter Choice: " ;
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Student Id: ";
                cin >> id;

                cout << "Enter Student Name: ";
                cin >> name;

                students.addStudent(id, name);
                break;
                
            case 2:
                students.displayStudent();
                break;
                
            case 3:
                cout << "Enter Student Id: ";
                cin >> id;

                students.searchStudent(id);
                break;
                
            case 4:
                cout << "Enter Student Id: ";
                cin >> id;

                students.removeStudent(id);
                break;
                
            case 0:
                cout << "Exiting Memory System ... " << endl;
                break;
                
            default:
                cout << "Invalid Choice" << endl;
                break;

        }
    } while (choice!= 0);
    
}