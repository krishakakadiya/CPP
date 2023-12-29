#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Hello everyone!!" << endl;
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "Hello CPP!!";
    }
};
int main()
{
    B b1;
    b1.print();
}
