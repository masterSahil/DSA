#include<iostream>
using namespace std;

int add(int a, int b);
int subtraction(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modules(int a, int b);

int main()
{
    int choice, a, b;

    do{
        cout<<"Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nPress 5 for Modules\nPress 0 for Exit\n";

        cout<<"Please Enter Your Choice: ";
        cin>>choice;

        switch(choice){
            case 1: 
                cout<<add(a, b)<<endl;
                break;
            case 2: 
                cout<<subtraction(a, b)<<endl;
                break;
            case 3: 
                cout<<multiply(a, b)<<endl;
                break;
            case 4: 
                cout<<divide(a, b)<<endl;
                break;
            case 5: 
                cout<<modules(a, b)<<endl;
                break;
            case 0: 
                break;
            default: 
                cout<<"Invalid Choice\n";
        }
    }
    while(choice != 0);
}

int add(int a, int b)
{
    cout<<"Enter A: ";
    cin>>a;

    cout<<"Enter B: ";
    cin>>b;

    return a+b;
}
int subtraction(int a, int b)
{
    cout<<"Enter A: ";
    cin>>a;

    cout<<"Enter B: ";
    cin>>b;

    return a-b;
}
int multiply(int a, int b)
{
    cout<<"Enter A: ";
    cin>>a;

    cout<<"Enter B: ";
    cin>>b;

    return a*b;
}
int divide(int a, int b)
{
    cout<<"Enter A: ";
    cin>>a;

    cout<<"Enter B: ";
    cin>>b;

    return a/b;
}
int modules(int a, int b)
{
    cout<<"Enter A: ";
    cin>>a;

    cout<<"Enter B: ";
    cin>>b;

    return a%b;
}