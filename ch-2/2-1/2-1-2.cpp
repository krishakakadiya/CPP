#include<iostream>
using namespace std;

class Car_details
{
    public:
    int car_id;
    char car_cmpname[100];
    char car_color[20];
    int car_model;
    int car_release_year;
};
int main()
{
    Car_details c1,c2,c3,c4;

    cout<<"------:input of CAR 1:------"<<endl;

    cout<<"enter your car Id:";
    cin>>c1.car_id;
    fflush(stdin);
    cout<<"enter your car company name:";
    gets(c1.car_cmpname);
    cout<<"enter your car color:";
    gets(c1.car_color);
    cout<<"enter your car model:";
    cin>>c1.car_model;
    cout<<"enter your car release year:";
    cin>>c1.car_release_year;

     cout<<"------:input of CAR 2:------"<<endl;

    cout<<"enter your car Id:";
    cin>>c2.car_id;
    fflush(stdin);
    cout<<"enter your car company name:";
    gets(c2.car_cmpname);
    cout<<"enter your car color:";
    gets(c2.car_color);
    cout<<"enter your car model:";
    cin>>c2.car_model;
    cout<<"enter your car release year:";
    cin>>c2.car_release_year;

     cout<<"------:input of CAR 3:------"<<endl;

    cout<<"enter your car Id:";
    cin>>c3.car_id;
    fflush(stdin);
    cout<<"enter your car company name:";
    gets(c3.car_cmpname);
    cout<<"enter your car color:";
    gets(c3.car_color);
    cout<<"enter your car model:";
    cin>>c3.car_model;
    cout<<"enter your car release year:";
    cin>>c3.car_release_year;

     cout<<"------:input of CAR 4:------"<<endl;

    cout<<"enter your car Id:";
    cin>>c4.car_id;
    fflush(stdin);
    cout<<"enter your car company name:";
    gets(c4.car_cmpname);
    cout<<"enter your car color:";
    gets(c4.car_color);
    cout<<"enter your car model:";
    cin>>c4.car_model;
    cout<<"enter your car release year:";
    cin>>c4.car_release_year;

    cout<<"-------:output of CAR 1:-----"<<endl;

    cout<<"CAR ID:"<<c1.car_id<<endl
        <<"CAR COMPANY NAME:"<<c1.car_cmpname<<endl
        <<"CAR COLOR:"<<c1.car_color<<endl
        <<"CAR MODEL:"<<c1.car_model<<endl
        <<"CAR RELEASE YEAR:"<<c1.car_release_year<<endl;

    
    cout<<"-------:output of CAR 2:-----"<<endl;

    cout<<"CAR ID:"<<c2.car_id<<endl
        <<"CAR COMPANY NAME:"<<c2.car_cmpname<<endl
        <<"CAR COLOR:"<<c2.car_color<<endl
        <<"CAR MODEL:"<<c2.car_model<<endl
        <<"CAR RELEASE YEAR:"<<c2.car_release_year<<endl;
    
    cout<<"-------:output of CAR 3:-----"<<endl;

    cout<<"CAR ID:"<<c3.car_id<<endl
        <<"CAR COMPANY NAME:"<<c3.car_cmpname<<endl
        <<"CAR COLOR:"<<c3.car_color<<endl
        <<"CAR MODEL:"<<c3.car_model<<endl
        <<"CAR RELEASE YEAR:"<<c3.car_release_year<<endl;
    
    
    cout<<"-------:output of CAR 4:-----"<<endl;

    cout<<"CAR ID:"<<c4.car_id<<endl
        <<"CAR COMPANY NAME:"<<c4.car_cmpname<<endl
        <<"CAR COLOR:"<<c4.car_color<<endl
        <<"CAR MODEL:"<<c4.car_model<<endl
        <<"CAR RELEASE YEAR:"<<c4.car_release_year<<endl;

}