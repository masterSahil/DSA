#include<iostream>
#include<vector>
using namespace std;

class Collection{
    private: 
        vector<int> v;

    public: 
        void addElement(int element)
        {
            v.push_back(element);
            cout << "Element added successfully ... " << endl;
        }
        void updateElement(int index, int element)
        {
            if (index >= 0 && index < v.size())
            {
                v.at(index) = element;
                cout << "Element Updated Successfully ..." << endl;
            }
            else {
                cout << "Error: Index out of Bounds" << endl;
            }
        }
        void deleteElement(int index)
        {
            if (index >= 0 && index < v.size())
            {
                v.erase(v.begin() + index);
                cout << "Element Deleted Successfully ..." << endl;
            }
            else {
                cout << "Error: Index out of Bounds" << endl;
            }
        }
        void getAllElements()
        {
            cout << "Vector is: ";
            if (v.empty() == 1)
            {
                cout << "NULL because of no elements" << endl;
            }
            else
            {
                for(int elem : v)
                {
                    cout << elem << " ";
                }
                cout << endl;
            }
        }
};

int main()
{
    Collection obj;

    int choice, element, index;

    do
    {
        cout << "Press 1 for Add an Element" << endl;
        cout << "Press 2 for Update an Element" << endl;
        cout << "Press 3 for Delete an Element" << endl;
        cout << "Press 4 for View all Element" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Element: ";
                cin >> element;

                obj.addElement(element);
                break;
                
            case 2:
                cout << "Enter Index: ";
                cin >> index;

                cout << "Enter Element: ";
                cin >> element;

                obj.updateElement(index, element);
                break;
                
            case 3:
                cout << "Enter Index: ";
                cin >> index;

                obj.deleteElement(index);
                break;
                
            case 4:
                obj.getAllElements();
                break;
                
            case 0:
                break;
                
            default:
                cout << "Invalid Choice ..." << endl;
                break;

        }
    } while (choice != 0);
    
}