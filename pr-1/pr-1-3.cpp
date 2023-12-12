#include<iostream>
using namespace std;

class All_details_of_person
{
    private:
    char personal_details[100];


    public:
    char name[20];
    int age;
    char surname[50];
    char village[100];
    int birthdate;
    char hobby[1000];
    char goal[100];

};
int main()
{
    // privat attributes we can not acces in int main!!
    
    All_details_of_person o1;

    cout<<"enter your name:";
    gets(o1.name);
    cout<<"enter your surname:";
    gets(o1.surname);
    cout<<"enter your age :";
    cin>>o1.age;
    fflush(stdin);
    cout<<"enter your village name:";
    gets(o1.village);
    cout<<"enter your birthdate:";
    cin>>o1.birthdate;
    fflush(stdin);
    cout<<"enter your hobby:";
    gets(o1.hobby);
    cout<<"enter your future goal:";
    gets(o1.goal);


    cout<<"---------:details of person:-----"<<endl;
    
    cout<<"NAME:"<<o1.name<<endl
        <<"SURNAME:"<<o1.surname<<endl
        <<"AGE:"<<o1.age<<endl
        <<"VILLAGE:"<<o1.village<<endl
        <<"BIRTHDATE:"<<o1.birthdate<<endl
        <<"HOBBY:"<<o1.hobby<<endl
        <<"FUTURE GOAL:"<<o1.goal;
}