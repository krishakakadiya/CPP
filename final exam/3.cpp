#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a, b, c;
    string ERROR = "ANY NUMBER CAN'T DIVIDED BY ZERO!!";

    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;

    try
    {
        if (a == 0 || b == 0)
        {
            throw ERROR;
        }
        else
        {
            c = a / b;
            throw c;
        }
    }
    catch (string ERROR)
    {
        cout << ERROR << endl;
    }
    catch (int c)
    {
        cout << c << endl;
    }
}