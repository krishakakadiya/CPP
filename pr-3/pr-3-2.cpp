#include <iostream>
using namespace std;

class Equation
{
protected:
    int n;

public:
    Equation()
    {
        cout << "enter any number:";
        cin >> n;
    }
};

class Square : public Equation
{
public:
    void sq()
    {
        cout << "square:" << n * n << endl;
    }
};
class Cube : public Equation
{
public:
    void cb()
    {
        cout << "cube:" << n * n * n;
    }
};
int main()
{
    Square s1;
    Cube c1;

    s1.sq();
    c1.cb();
}