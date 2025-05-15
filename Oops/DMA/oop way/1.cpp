// Q. Demonstrate the use of new and delete operators to achieve Dynamic Memory Allocation with use of OOP approach

#include<iostream>
using namespace std;

class myClass
{
    private:
        int size;
        int *arr;

    public:
        myClass(int size)
        {
            this->size = size;
            arr = new int[this->size];

            if (arr == NULL)
            {
                cout << "Memory Allocation is Failed ..." << endl;
            }
            else
            {
                cout << "Memory Alloctation is Successfull ..." << endl;
            }
        }

        ~myClass()
        {
            delete[] arr;
            arr = NULL;

            if (arr == NULL)
            {
                cout << "Memory DeAllocation is Successfull ... " << endl;
            }
            else
            {
                cout << "Memory DeAllocation is Failed ... " << endl; 
            }
        }

        void addElement(int index, int element)
        {
            if (index >= 0 && index < this->size)
            {
                arr[index] = element;
                cout << "Element Added Successfully ..." << endl;
            }
            else
            {
                cout << "Error: Array Index is out of bounds!!!" << endl;
            }
        }

        void getElement(int index)
        {
            if (index >= 0 && index < this->size)
            {
                cout << "Array element of index " << index << " is: " << this->arr[index] << endl;
            }
            else
            {
                cout << "Error: Array Index is out of bounds!!!" << endl;
            }
        }
};

int main()
{
    
    myClass *obj;

    obj = new myClass(5);

    if (obj == NULL)
    {
        cout << "Obj creation is Failed ... " << endl;
        return 1;
    }
    else
    {
        cout << "Obj created Successfully ... " << endl;
    }

    obj->addElement(0, 99);
    obj->addElement(1, 56);
    obj->getElement(0);

    delete obj;
    obj = NULL;

    if (obj == NULL)
    {
        cout << "Obj is Deleted Successfully ... " << endl;
    }
    else
    {
        cout << "Obj Deletion Failed ..." << endl;
    }
    
}