#include<iostream>
using namespace std;

class Math{
    public:
        int add(int a, int b)
        {
            return a + b;
        }

        double add(double a, double b)
        {
            return a+b;
        }
};

int main()
{
    Math obj;

    cout << obj.add(25, 78) << endl;
    cout << obj.add(20.25, 35.25) << endl;

}