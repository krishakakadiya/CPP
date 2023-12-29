#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
    virtual void print()
    {
        cout << "KRISHA!!" << endl;
    }
};
class B : public A
{

public:
    void print()
    {
        cout << "KAKADIYA!!" << endl;
    }
};
class C : public A
{

public:
    void print()
    {
        cout << "PARAS !!" << endl;
    }
};
class D : public B, public C
{

public:
    void print()
    {
        cout << "SALIY!!" << endl;
    }
};
int main()
{
    B b1;
    D d1;

    b1.A::print();
    b1.print();
    d1.C::print();
    d1.print();
}