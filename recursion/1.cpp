// Nested Functions

#include<iostream>
using namespace std;

void hello();
void greeting();
void thanking();

int main()
{
    hello();
}

void hello(){
    cout<<"Hello World"<<endl;
    greeting();
}

void greeting()
{
    cout<<"Welcome To Coding"<<endl;
    thanking();
}

void thanking(){
    cout<<"Thank You"<<endl;
}