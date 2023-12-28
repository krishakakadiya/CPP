#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a, b,age,i;
    string ERROR = "any number can't divide by ZERO!!";
    string error="you can not vote!!";
    string GOOD="you can vote!!";
    char pswd[100];
    string e="SORRY!!\nYOUR PASSWORD IS INCORRECT!!";
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    try
    {
        if (a == 0 || b == 0)
        {
            throw ERROR;
        }
        else
        {
            cout << "division:" << a / b << endl;
        }
    }
    catch (string ERROR)
    {
        cout << ERROR << endl;
    }
    cout<<"enter your age:";
    cin>>age;
    try
    {
        if(age<18)
        {
            throw error;
        }
        else{
            throw GOOD;
        }
    }
    catch(string error)
    {
        cout<<error<<endl;
    }
    catch(string GOOD)
    {
        cout<<GOOD<<endl;
    }
    fflush(stdin);
    cout<<"enter your password:";
    gets(pswd);
    try
    {
        for(i=0;i!=NULL;i++)
        {
            if(pswd[i]<='A'&&pswd[i]>='Z')
            {
                cout<<"YOUR PASSWORD IS CORRECT!!";
            }
            else
            {
                throw e;
            }
        }
    }
    catch(string e)
    {
        cout<<e<<endl;
    }
}