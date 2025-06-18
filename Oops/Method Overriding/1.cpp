#include<iostream>
using namespace std;

class Shape
{
    public:
        void draw()
        {
            cout << "Drawing an Painting" << endl;
        }
};

class Circle : public Shape
{
    public:
        void draw()
        {
            cout << "Drawing an Circle Shape" << endl;
        }
};

int main()
{
    Shape obj;
    Circle obj2;

    obj.draw();
    obj2.draw();
}