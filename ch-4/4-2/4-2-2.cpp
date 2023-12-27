#include <iostream>
#include <string.h>
using namespace std;

class Sum
{
protected:
    int a, b, c;

public:
    Sum()
    {
        cout << "enter a:";
        cin >> a;
    }
};
class Addition : public Sum
{
public:
    Addition()
    {
        cout << "enter b:";
        cin >> b;
    }
};
class Add : public Sum
{
public:
    Add()
    {
        cout << "enter c:";
        cin >> c;
    }
};
class A : public Addition, public Add
{
public:
    A()
    {
        int d;
        cout << "enter d:";
        cin >> d;
    }
};
int main()
{
    A a1;
    int a,b,c,d;

    cout << "sum:" << a + b + c + d << endl;
}