#include <iostream>
#include <string.h>
using namespace std;

class Bank
{
protected:
    int ac_number;
    char ac_name[20];
    char ac_type[20];
    char ac_branch[20];
    int ac_balance;

public:
    void input()
    {
        cout << "enter your acount number:";
        cin >> ac_number;
        fflush(stdin);
        cout << "enter your acount name:";
        gets(ac_name);
        cout << "enter your acount type:";
        gets(ac_type);
        cout << "enter your acount branch:";
        gets(ac_branch);
        fflush(stdin);
        cout << "enter your acount balance:";
        cin >> ac_balance;
    }
    void output()
    {
        cout << "ACOUNT NUMBER:" << ac_number << endl
             << "ACOUNT NAME:" << ac_name << endl
             << "ACOUNT TYPE:" << ac_type << endl
             << "ACOUNT BRANCH:" << ac_branch << endl
             << "ACOUNT BALANCE:" << ac_balance << endl;
    }
};
int main()
{
    int n, i, s;
    cout << "enter number of bank acounts:";
    cin >> n;
    Bank b1[n];

    for (i = 1; i <= n; i++)
    {
        cout << endl
             << "------------INPUT OF BANK  " << i << ":------" << endl;
        b1[i].input();
    }
    cout << "enter acount number which you wan't to print:";
    cin >> s;
    for (i = 1; i <= n; i++)
    {
        if (i == s)
        {
            cout << endl
                 << "------------OUTPUT OF BABK" << i << ":------" << endl;
            b1[i].output();
        }
        else
        {
            cout << "we don't get that acount data!!";
        }
    }
}