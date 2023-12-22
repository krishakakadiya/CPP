#include <iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    int stu_id;
    char stu_name[30];
    int stu_age;
    char stu_course[40];
    char stu_city[10];
    char stu_email[30];
    char stu_college[20];

public:
    void input()
    {
        cout<<endl;
        cout << "Enter your id:";
        cin >> this->stu_id;
        fflush(stdin);
        cout << "Enter your name:";
        gets(this->stu_name);
        cout << "Enter your age:";
        cin >> this->stu_age;
        fflush(stdin);
        cout << "Enter your course:";
        gets(this->stu_course);
        fflush(stdin);
        cout << "Enter your city:";
        gets(this->stu_city);
        fflush(stdin);
        cout << "Enter your email id:";
        gets(this->stu_email);
        fflush(stdin);
        cout << "Enter your collage name:";
        gets(this->stu_college);
    }
    void output()
    {
        cout << "ID:" << this->stu_id<<endl
             <<"NAME:"<<this->stu_name<<endl
             <<"AGE:"<<this->stu_age<<endl
             <<"COURSE:"<<this->stu_course<<endl
             <<"CITY:"<<this->stu_city<<endl
             <<"EMAIL ID:"<<this->stu_id<<endl
             <<"COLLAGE NAME:"<<this->stu_college;
    }
};
int main()
{
    Student  s1, s2, s3, s4,s5;

    s1.input();
    s2.input();
    s3.input();
    s4.input();
    s5.input();

    cout << "----------:DETAILS OF STUDENT 1:----------";

    s1.output();
    cout << "----------:DETAILS OF STUDENT 2:----------";
    s2.output();
    cout << "----------:DETAILS OF STUDENT 3:----------";
    s3.output();
    cout << "----------:DETAILS OF STUDENT 4:----------";
    s4.output();
    cout << "----------:DETAILS OF STUDENT 5:----------";
    s5.output();
}