#include<iostream>
using namespace std;

template <typename T>
class A {
    private: 
        T a;
        T b;

    public: 
        void setData(T a, T b)
        {
            this->a = a;
            this->b = b;
        }

        void disp()
        {
            cout << this->a * this->b << endl;
        }

};

int main()
{
    A<int> obj;
    A<double> obj2;

    obj.setData(3, 8);
    obj.disp();

    obj2.setData(3.8, 5.12);
    obj2.disp();

}