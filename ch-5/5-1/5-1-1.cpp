#include <iostream>
using namespace std;

class A
{
public:
    void calculate(int a, int b)
    {
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;

        cout<< "division :" << a / b << endl;
    }
    void calculate(int a, int b, int c)
    {
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
        cout << "enter c:";
        cin >> c;

        cout<< "subtraction:" << a - b - c << endl;
    }
};
class B
{
public:
    void calculate(int a, int b, int c, int d)
    {
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
        cout << "enter c:";
        cin >> c;
        cout << "enter d:";
        cin >> d;

        cout<< "multiplication:" << a * b * c * d << endl;
    }
    void calculate(int a, int b, int c, int d, int e)
    {
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
        cout << "enter c:";
        cin >> c;
        cout << "enter d:";
        cin >> d;
        cout << "enter e:";
        cin >> e;

        cout << "addition:" << a + b + c + d + e << endl;
    }
};
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
    A a1;
    B b1;
    a1.calculate(a, b);
    a1.calculate(c, d, e);
    b1.calculate(f, g, h, i);
    b1.calculate(j, k, l, m, n);
}