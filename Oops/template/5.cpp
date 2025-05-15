#include<iostream>
using namespace std;

template <typename T1, typename T2>
class A {
    private: 
        T1 a;
        T2 b;

    public: 
        void setData(T1 a, T2 b)
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
    A<int, double> obj;

    obj.setData(3, 8);
    obj.disp();

    obj.setData(3.8, 5.12);
    obj.disp();

}