#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    void inputA()
    {
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
    }
    bool operator<(A a2)
    {
        if (a < b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    A a1, a2, a3;
    a1.inputA();
    if ( a1 < a2)
    {
        cout<<"b is big!!";
    }
    else
    {
        cout<<"a is big!!";
    }
}