#include <iostream>
using namespace std;

class VF
{
protected:
    virtual void calculate() = 0;
};
class Circle : public VF
{
public:
    void calculate()
    {
        int r;
        double pie=3.14;
        cout<<"enter radius:";
        cin>>r;
        cout<<"area of circle:"<<pie*r*r<<endl<<endl;
    }
};

class Triangle : public VF
{
public:
    void calculate()
    {
        int h,b;
        double a=0.5;
        cout<<"enter base:";
        cin>>b;
        cout<<"enter height:";
        cin>>h;
        cout<<"area of triangle:"<<a*(b*h)<<endl<<endl;
    }
};
class Rectangle : public VF
{
public:
    void calculate()
    {
        int l,w;
        cout<<"enter length:";
        cin>>l;
        cout<<"enter width:";
        cin>>w;
        cout<<"area if rectangle:"<<l*w<<endl<<endl;
    }
};

int main()
{
    Circle c1;
    Triangle t1;
    Rectangle r1;
    c1.calculate();
    t1.calculate();
    r1.calculate();
}