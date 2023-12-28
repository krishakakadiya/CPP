#include <iostream>
using namespace std;
class P
{
public:
    double C;
    double f;
};
class Q : public P
{
public:
    double F;
    void toFehrenheit()
    {
        cout << "enter any degree in Fehrenheit :";
        cin >> f;
        cout << "enter any degree in Celsius :";
        cin >> C;

        F = (C * 1.8) + 32;
        cout << "Celsius to Fehrenheit :" << F << endl;
    }
};
class R : public Q
{
public:
    int kelvin;
    void tokelvin()
    {
        kelvin = (F - 32) * 5/9  +  273;
        cout << " Fehrenheit  to Kelvin :" << kelvin;
    }
};

int main()
{
    Q f1;
    f1.toFehrenheit();

    R k1;
    k1.tokelvin();
}
    
