#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void inputA()
    {
        cout << "enter a:";
        cin >> a;
    }
};
class B : public A
{
protected:
    int b;

public:
    void inputB()
    {
        cout << "enter b:";
        cin >> b;
    }
};
class C : public A
{
protected:
    int c;

public:
    void inputC()
    {
        cout << "enter c:";
        cin >> c;
    }
};
class D: public C, private B
{
protected:
    int d;

public:
    void inputD()
    {
        cout << "enter d:";
        cin >> d;
    }
    void sum()
    {
        cout << "sum:" << B::a + b + c + d << endl;
    }
};
int main()
{
    D d1;
    B b1;

    b1.inputA();
    b1.inputB();
    d1.inputC();
    d1.inputD();
    d1.sum();
}