#include<iostream>
using namespace std;

int main()
{
    int s,m,h,s1;
    cout <<" enter second:";
    cin>>s;

    h=s/3600;
    m=(s%3600)/60;
    s1=(s%3600)%60;

    cout << h<<":"<<m<<":"<<s1<<endl;

}