#include <iostream>
using namespace std;

class Shape
{
protected:
    int w, h;

public:
    Shape()
    {
        cout << "enter width:";
        cin >> w;
        cout << "enter height:";
        cin >> h;
    }
};
class Triangle : public Shape
{
public:
    void area()
    {
        cout << "triangle" << endl;
        cout << "area of triangle :" << 0.5 * h * w << endl;
    }
};

class Rectangle : public Shape
{
public:
    
    void area()
    {
        cout << "rectangle:" << endl;
        cout << "area of rectangle:" << h * w;
    }
};
int main()
{
    Triangle t1;
    Rectangle r1;
    t1.area();
    r1.area();
}
