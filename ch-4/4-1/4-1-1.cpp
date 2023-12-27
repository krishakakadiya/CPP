#include<iostream>
#include<string.h>
using namespace std;

class X
{
    protected:
    int a,b,c;

};

class Y :public X
{
    public:
    void input()
    {
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;
        cout<<"enter c:";
        cin>>c;
    }
    void output()
    {
        int d,e,f,g;
        d=a*a*a;
        e=b*b*b;
        f=c*c*c;

        cout<<"cube of a:"<<d<<endl;
         cout<<"cube of b:"<<e<<endl;
          cout<<"cube of c:"<<f<<endl;
        
        cout<<"sum of all cubes a ,b and c:"<<d+e+f<<endl;
    }

};

int main()
{
    Y o1;
    o1.input();
    o1.output();
}