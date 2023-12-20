#include <iostream>
#include <string.h>
using namespace std;

class A
{
protected:
    int id;
    char name[20];
    char role[30];
    int salary;
    char exp[10];
    char cmp_name[40];
    char add[100];
    char email[50];
    long long int contact;

public:
    void inputA()
    {
        cout << "enter your id:";
        cin >> id;
        fflush(stdin);
        cout << "enter your name:";
        gets(name);
        cout << "enter your role:";
        gets(role);
    }
};
class B : public A
{
public:
    void inputB()
    {
        cout << "enter your salary:";
        cin >> salary;
        fflush(stdin);
        cout << "enter your experience:";
        gets(exp);
    }
};
class C : public B
{
public:
    void inputC()
    {
        cout << "enter your company name:";
        gets(cmp_name);
        fflush(stdin);
        cout << "enter your address:";
        gets(add);
    }
    void outputC()
    {
        cout << "NAME:" << name << endl;
        cout << "ROLE:" << role << endl;
        cout << "SALARY:" << salary << endl;
    }
};

class D : public C
{
public:
    void inputD()
    {
        fflush(stdin);
        cout << "enter your email:";
        gets(email);
        cout << "enter your contact:";
        cin >> contact;
    }
    void outputD()
    {
        cout << "ID:" << id << endl
             << "NAME:" << name << endl
             << "ROLE:" << role << endl
             << "SALARY:" << salary << endl
             << "EXPERIENCE:" << exp << endl
             << "COMPANY NAME:" << cmp_name << endl
             << "ADDRESS:" << add << endl
             << "EMAIL ID:" << email << endl
             << "CONTACT NO.:" << contact << endl;
    }
};
int main()
{

    D d1;

    d1.inputA();
    d1.inputB();
    d1.inputC();
    d1.inputD();
    d1.outputC();
    d1.outputD();
}
