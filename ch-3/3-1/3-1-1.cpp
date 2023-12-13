#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[100];
    char stu_city[50];
    char stu_email[100];
    char stu_clgname[100];

    public:
    void input(int stu_id,char stu_name[],int stu_age,char stu_course[],char stu_city[],char stu_email[],char stu_clgname[])
    {
        this->stu_id=stu_id;
        strcpy(this->stu_name,stu_name);
        this->stu_age=stu_age;
        strcpy(this->stu_course,stu_course);
        strcpy(this->stu_city,stu_city);
        strcpy(this->stu_email,stu_email);
        strcpy(this->stu_clgname,stu_clgname);
        cout<<"enter your student Id:";
        cin>>stu_id;
        fflush(stdin);
        cout<<"enter your name:";
        gets(stu_name);
        cout<<"enter your age:";
        cin>>stu_age;
        fflush(stdin);
        cout<<"enter your course:";
        gets(stu_course);
        cout<<"enter your city:";
        gets(stu_city);
        cout<<"enter your email:";
        gets(stu_email);
        cout<<"enter your college name:";
        gets(stu_clgname);
        cout<<endl;
    }

    void output()
    {
        cout<<"ID:"<<stu_id<<endl
            <<"NAME:"<<stu_name<<endl
            <<"AGE:"<<stu_age<<endl
            <<"COURSE:"<<stu_course<<endl
            <<"CITY:"<<stu_city<<endl
            <<"EMAIL:"<<stu_email<<endl
            <<"COLLEGE NANE :"<<stu_clgname<<endl<<endl;
    }

};
int main()
{
    student s1,s2,s3,s4,s5;
    int stu_id,stu_age;
    char stu_name[20],stu_course[100],stu_city[50],stu_email[100],stu_clgname[100];

    cout<<"enter details of student 1:"<<endl<<endl;
    s1.input( stu_id, stu_name,stu_age,stu_course,stu_city,stu_email,stu_clgname);
    cout<<"enter details of student 2:"<<endl<<endl;
    s2.input( stu_id, stu_name,stu_age,stu_course,stu_city,stu_email,stu_clgname);
    cout<<"enter details of student 3:"<<endl<<endl;
    s3.input( stu_id, stu_name,stu_age,stu_course,stu_city,stu_email,stu_clgname);
    cout<<"enter details of student 4:"<<endl<<endl;
    s4.input( stu_id, stu_name,stu_age,stu_course,stu_city,stu_email,stu_clgname);
    cout<<"enter details of student 5:"<<endl<<endl;
    s5.input( stu_id, stu_name,stu_age,stu_course,stu_city,stu_email,stu_clgname);

    cout<<"DETAILS OF STUDENT 1:"<<endl<<endl;
    s1.output();
    cout<<"DETAILS OF STUDENT 2:"<<endl<<endl;
    s2.output();
    cout<<"DETAILS OF STUDENT 3:"<<endl<<endl;
    s3.output();
    cout<<"DETAILS OF STUDENT 4:"<<endl<<endl;
    s4.output();
    cout<<"DETAILS OF STUDENT 5:"<<endl<<endl;
    s5.output();
    
}