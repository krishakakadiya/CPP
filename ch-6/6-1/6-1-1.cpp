#include <iostream>
#include <string.h>
using namespace std;

class Admin
{
protected:
    char cmp_name[20];
    int mng_salary;
    int emp_salary;
    int total_staff;
    int total_annual_revenue;
    int can_terminate;

public:
    void input()
    {
        cout << endl;
        cout << "Enter Company_name :";
        gets(this->cmp_name);
        cout << "Ente Manager_salary:";
        cin >> this->mng_salary;
        cout << "Enter EMployee _salary :";
        cin >> this->emp_salary;
        cout << "Enter Total_staff :";
        cin >> this->total_staff;
        cout << "Enter Total_annual_revenue :";
        cin >> this->total_annual_revenue;
        cout << "Enter Can_terminate :";
        cin >> this->can_terminate;
    }
    void myAccess()
    {
        cout << endl
             << "---------:ADMIN DATA:--------";
        cout << "COMPANY NAME :" << cmp_name << endl
             << "MANAGER SALARY:" << mng_salary << endl
             << "EMPLOYEE SALARY:" << emp_salary << endl
             << "TOTAL SATFF:" << total_staff << endl
             << "TOTAL ANNUAL REVENUE:" << total_annual_revenue << endl
             << "CAN TERMINATE:" << can_terminate << endl;
    }
};

class Manager : public Admin
{
public:
    void myAccess()
    {
        cout << endl
             << "---------:MANAGER DATA:--------" << endl;
        cout << "MANAGER SALARY:" << mng_salary << endl
             << "TOTAL SATFF:" << total_staff << endl
             << "COMPANY NAME :" << cmp_name << endl
             << "EMPLOYEE SALARY:" << emp_salary << endl;
    }
};

class Employee : public Manager
{
public:
    void myAccess()
    {
        cout << endl
             << "---------:EMPLOYEE DATA:--------";
        cout << endl
             << "COMPANY NAME :" << Admin::cmp_name << endl
             << "EMPLOYEE SALARY:" << Admin::emp_salary << endl;
    }
};
int main()
{
    Employee e1;
    e1.input();
    e1.Admin::myAccess();
    e1.Manager::myAccess();
    e1.Employee::myAccess();
}