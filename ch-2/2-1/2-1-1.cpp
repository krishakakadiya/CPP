#include<iostream>
#include<string.h>
using namespace std;

class employee
{
    public:
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[50];
    int emp_salary;
    char emp_city[40];
    int  emp_exp;
    char emp_cmpname[100];
};

int main()
{
    employee e1,e2,e3,e4,e5;

    cout<<endl<<"employee:1"<<endl<<endl;
    cout << "enter your Id :";
    cin>>e1.emp_id;
    fflush(stdin);
    cout << "enter your name :";
    gets(e1.emp_name);
    cout << "enter your age:";
    cin>>e1.emp_age;
    fflush(stdin);
    cout<<"enter your role in company:";
    gets(e1.emp_role);
    cout<<"enter your salary:";
    cin>>e1.emp_salary;
    fflush(stdin);
    cout<<"enter your city:";
    gets(e1.emp_city);
    cout<<"enter your experience:";
    cin>>e1.emp_exp;
    fflush(stdin);
    cout<<"enter your company name:";
    gets(e1.emp_cmpname);

    cout<<endl<<"employee:2"<<endl<<endl;
    cout << "enter your Id :";
    cin>>e2.emp_id;
    fflush(stdin);
    cout << "enter your name :";
    gets(e2.emp_name);
    cout << "enter your age:";
    cin>>e2.emp_age;
    fflush(stdin);
    cout<<"enter your role in company:";
    gets(e2.emp_role);
    cout<<"enter your salary:";
    cin>>e2.emp_salary;
    fflush(stdin);
    cout<<"enter your city:";
    gets(e2.emp_city);
    cout<<"enter your experience:";
    cin>>e2.emp_exp;
    fflush(stdin);
    cout<<"enter your company name:";
    gets(e2.emp_cmpname);

    cout<<endl<<"employee:3"<<endl<<endl;
    cout << "enter your Id :";
    cin>>e3.emp_id;
    fflush(stdin);
    cout << "enter your name :";
    gets(e3.emp_name);
    cout << "enter your age:";
    cin>>e3.emp_age;
    fflush(stdin);
    cout<<"enter your role in company:";
    gets(e3.emp_role);
    cout<<"enter your salary:";
    cin>>e3.emp_salary;
    fflush(stdin);
    cout<<"enter your city:";
    gets(e3.emp_city);
    cout<<"enter your experience:";
    cin>>e3.emp_exp;
    fflush(stdin);
    cout<<"enter your company name:";
    gets(e3.emp_cmpname);

    cout<<endl<<"employee:4"<<endl<<endl;
    cout << "enter your Id :";
    cin>>e4.emp_id;
    fflush(stdin);
    cout << "enter your name :";
    gets(e4.emp_name);
    cout << "enter your age:";
    cin>>e4.emp_age;
    fflush(stdin);
    cout<<"enter your role in company:";
    gets(e4.emp_role);
    cout<<"enter your salary:";
    cin>>e4.emp_salary;
    fflush(stdin);
    cout<<"enter your city:";
    gets(e4.emp_city);
    cout<<"enter your experience:";
    cin>>e4.emp_exp;
    fflush(stdin);
    cout<<"enter your company name:";
    gets(e4.emp_cmpname);

    cout<<endl<<"employee:5"<<endl<<endl;
    cout << "enter your Id :";
    cin>>e5.emp_id;
    fflush(stdin);
    cout << "enter your name :";
    gets(e5.emp_name);
    cout << "enter your age:";
    cin>>e5.emp_age;
    fflush(stdin);
    cout<<"enter your role in company:";
    gets(e5.emp_role);
    cout<<"enter your salary:";
    cin>>e5.emp_salary;
    fflush(stdin);
    cout<<"enter your city:";
    gets(e5.emp_city);
    cout<<"enter your experience:";
    cin>>e5.emp_exp;
    fflush(stdin);
    cout<<"enter your company name:";
    gets(e5.emp_cmpname);

    cout<<"data of employee 1:"<<endl<<endl;
    cout<<"employee Id:"<<e1.emp_id<<endl;
    cout<<"employee name:"<<e1.emp_name<<endl;
    cout<<"employee age:"<<e1.emp_age<<endl;
    cout<<"employee role in company:"<<e1.emp_role<<endl;
    cout<<"employee salary:"<<e1.emp_salary<<endl;
    cout<<"employee city:"<<e1.emp_city<<endl;
    cout<<"employee experience:"<<e1.emp_exp<<endl;
    cout<<"employee company name:"<<e1.emp_cmpname<<endl;

    cout<<"data of employee 2:"<<endl<<endl;
    cout<<"employee Id:"<<e2.emp_id<<endl;
    cout<<"employee name:"<<e2.emp_name<<endl;
    cout<<"employee age:"<<e2.emp_age<<endl;
    cout<<"employee role in company:"<<e2.emp_role<<endl;
    cout<<"employee salary:"<<e2.emp_salary<<endl;
    cout<<"employee city:"<<e2.emp_city<<endl;
    cout<<"employee experience:"<<e2.emp_exp<<endl;
    cout<<"employee company name:"<<e2.emp_cmpname<<endl;

    cout<<"data of employee 3:"<<endl<<endl;
    cout<<"employee Id:"<<e3.emp_id<<endl;
    cout<<"employee name:"<<e3.emp_name<<endl;
    cout<<"employee age:"<<e3.emp_age<<endl;
    cout<<"employee role in company:"<<e3.emp_role<<endl;
    cout<<"employee salary:"<<e3.emp_salary<<endl;
    cout<<"employee city:"<<e3.emp_city<<endl;
    cout<<"employee experience:"<<e3.emp_exp<<endl;
    cout<<"employee company name:"<<e3.emp_cmpname<<endl;

    cout<<"data of employee 4:"<<endl<<endl;
    cout<<"employee Id:"<<e4.emp_id<<endl;
    cout<<"employee name:"<<e4.emp_name<<endl;
    cout<<"employee age:"<<e4.emp_age<<endl;
    cout<<"employee role in company:"<<e4.emp_role<<endl;
    cout<<"employee salary:"<<e4.emp_salary<<endl;
    cout<<"employee city:"<<e4.emp_city<<endl;
    cout<<"employee experience:"<<e4.emp_exp<<endl;
    cout<<"employee company name:"<<e4.emp_cmpname<<endl;


    cout<<"data of employee 5:"<<endl<<endl;
    cout<<"employee Id:"<<e5.emp_id<<endl;
    cout<<"employee name:"<<e5.emp_name<<endl;
    cout<<"employee age:"<<e5.emp_age<<endl;
    cout<<"employee role in company:"<<e5.emp_role<<endl;
    cout<<"employee salary:"<<e5.emp_salary<<endl;
    cout<<"employee city:"<<e5.emp_city<<endl;
    cout<<"employee experience:"<<e5.emp_exp<<endl;
    cout<<"employee company name:"<<e5.emp_cmpname<<endl;


}
