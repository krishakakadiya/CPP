#include<iostream>
#include<string.h>
using namespace std;

class customer
{   
    private:
    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_city[50];
    int cust_mobnumber;
    int cust_sim_validity;
    char cust_telephone_brand[30];

    public:
    void input(int cust_id,char cust_name[],int cust_age,char cust_city[],int cust_mobnumber,int cust_sim_validity,char cust_telephone_brand[])
    {
        this->cust_id=cust_id;
        this->cust_age=cust_age;
        this->cust_mobnumber=cust_mobnumber;
        this->cust_sim_validity=cust_sim_validity;
        strcpy(this->cust_name,cust_name);
        strcpy(this->cust_city,cust_city);
        strcpy(this->cust_telephone_brand,cust_telephone_brand);
        cout<<"enter your customer id:";
        cin>>cust_id;
        fflush(stdin);
        cout<<"enter your name:";
        gets(cust_name);
        cout<<"enter your age:";
        cin>>cust_age;
        fflush(stdin);
        cout<<"enter your city name:";
        gets(cust_city);
        cout<<"enter your mobile number:";
        cin>>cust_mobnumber;
        cout<<"enter your simcard validity (in years):";
        cin>>cust_sim_validity;
        fflush(stdin);
        cout<<"enter your telephone brand :";
        gets(cust_telephone_brand);
        cout<<endl;
    }    

    void output()
    {
        cout<<"ID:"<<cust_id<<endl
            <<"NAME:"<<cust_name<<endl
            <<"AGE:"<<cust_age<<endl 
            <<"CITY:"<<cust_city<<endl 
            <<"MOBILE NO:"<<cust_mobnumber<<endl 
            <<"SIMCARD VALIDITY:"<<cust_sim_validity<<endl 
            <<"TELEPHONE BRAND:"<<cust_telephone_brand<<endl;
    }
};
int main()
{
    customer c1,c2,c3,c4,c5;
    int cust_age,cust_id,cust_mobnumber,cust_sim_validity;
    char cust_city[50],cust_name[20],cust_telephone_brand[30];

    cout<<"enter details of customer 1:"<<endl;
    c1.input(cust_age,cust_name,cust_sim_validity,cust_city,cust_id,cust_mobnumber,cust_telephone_brand);
    cout<<"enter details of customer 2:"<<endl;
    c2.input(cust_age,cust_name,cust_sim_validity,cust_city,cust_id,cust_mobnumber,cust_telephone_brand);
    cout<<"enter details of customer 3:"<<endl;
    c3.input(cust_age,cust_name,cust_sim_validity,cust_city,cust_id,cust_mobnumber,cust_telephone_brand);
    cout<<"enter details of customer 4:"<<endl;
    c4.input(cust_age,cust_name,cust_sim_validity,cust_city,cust_id,cust_mobnumber,cust_telephone_brand);
    cout<<"enter details of customer 5:"<<endl;
    c5.input(cust_age,cust_name,cust_sim_validity,cust_city,cust_id,cust_mobnumber,cust_telephone_brand);

    cout<<"DETAILS OF STUDENT 1:"<<endl;
    c1.output();
    cout<<"DETAILS OF STUDENT 2:"<<endl;
    c2.output();
    cout<<"DETAILS OF STUDENT 3:"<<endl;
    c3.output();
    cout<<"DETAILS OF STUDENT 4:"<<endl;
    c4.output();
    cout<<"DETAILS OF STUDENT 5:"<<endl;
    c5.output();

    
}