#include <iostream>
#include<string.h>
using namespace std;

class Customer
{
private:
    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_city[10];
    long long int cust_mobile;
    int cust_sim_validity;
    char cust_phone_brand[20];

public:
    void input()
    {
        cout << endl;
        cout << "Enter your id :";
        cin >> this->cust_id;
        fflush(stdin);
        cout << "Enter your name :";
        gets(this->cust_name);
        cout << "Enter your age :";
        cin >> this->cust_age;
        fflush(stdin);
        cout << "Enter your city :";
        gets(this->cust_city);
        cout << "enter your mobile number :";
        cin >> this->cust_mobile;
        cout << "Enter your simcard validity :";
        cin >> this->cust_sim_validity;
        fflush(stdin);
        cout << "Enter your telecom name :";
        gets(this->cust_phone_brand);
    }
    void output()
    {
        cout<<"ID:"<<this->cust_id<<endl
            <<"NAME:"<<this->cust_name<<endl
            <<"AGE:"<<this->cust_age<<endl
            <<"CITY:"<<this->cust_city<<endl
            <<"MOBILE NO.:"<<this->cust_mobile<<endl
            <<"SIMCARD VALIDITY:"<<this->cust_sim_validity<<endl
            <<"PHONE BRAND:"<<this->cust_phone_brand<<endl;
    }
};
int main()
{
    Customer  c1, c2, c3, c4,c5;

    c1.input();
    c2.input();
    c3.input();
    c4.input();
    c5.input();

    cout<<"----------:DETAILS OF CUSTOMER 1:--------";
    c1.output();
    cout<<"----------:DETAILS OF CUSTOMER 2:--------";
    c2.output();
    cout<<"----------:DETAILS OF CUSTOMER 3:--------";
    c3.output();
    cout<<"----------:DETAILS OF CUSTOMER 4:--------";
    c4.output();
    cout<<"----------:DETAILS OF CUSTOMER 5:--------";
   c5.output();
}