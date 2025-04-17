#include<iostream>
using namespace std;

int add(int num1, int num2);
int substraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int modules(int num1, int num2);

int main()
{
    int choice;
    int num1, num2, ans;

    do
    {
        cout<<"Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nPress 5 for Modules\nPress 0 for Exit\n\n";
    
        cout << "Please Enter the Num1: ";
        cin >> num1;

        cout << "Please Enter the Num2: ";
        cin >> num2;

        cout<<"Please Enter your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                ans = add(num1, num2);
                cout<<"\nAddition of "<<num1<<" and "<<num2<<" is "<<ans<<endl;
                break;
                
            case 2:
                ans = substraction(num1, num2);
                cout<<"\nSubstraction of "<<num1<<" and "<<num2<<" is "<<ans<<endl;
                break;
                
            case 3:
                ans = multiplication(num1, num2);
                cout<<"\nMultiplication of "<<num1<<" and "<<num2<<" is "<<ans<<endl;
                break;
                
            case 4:
                ans = division(num1, num2);
                cout<<"\nDivision of "<<num1<<" and "<<num2<<" is "<<ans<<endl;
                break;
                
            case 5:
                ans = modules(num1, num2);
                cout<<"\nModules of "<<num1<<" and "<<num2<<" is "<<ans<<endl;
                break;
                
            case 0:
                break;

            default:
                cout<<"\nYour Choice "<<choice<<" is Invalid"<<endl;
                break;
        }
        
    } while (choice != 0);

}

int add(int num1, int num2)
{
    return num1 + num2;
}

int substraction(int num1, int num2) 
{
    return num1 - num2;
}

int multiplication(int num1, int num2) 
{
    return num1 * num2;
}

int division(int num1, int num2) 
{
    return num1 / num2;
}

int modules(int num1, int num2) 
{
    return num1 % num2;
}
