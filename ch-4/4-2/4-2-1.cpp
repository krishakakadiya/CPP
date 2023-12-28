#include <iostream>
#include <string.h>
using namespace std;

class RBI
{
public:
    void getROI1()
    {
        cout << "RBI:6.50%" << endl;
    }
};
class SBI : public RBI
{
public:
    void getROI()
    {
        cout << "SBI:7.00%" << endl;
    }
};
class BOB : public RBI
{
public:
    void getROI()
    {
        cout << "BOB:3.50%" << endl;
    }
};

class ICICI : public RBI
{
public:
    void getROI()
    {
        cout << "ICICI:5.55%" << endl;
    }
};

int main()
{
    SBI s1;
    BOB b1;
    ICICI i1;

    s1.getROI1();
    s1.getROI();
    b1.getROI();
    i1.getROI();
}