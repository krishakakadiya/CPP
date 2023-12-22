#include<iostream>
#include<string.h>
using namespace std;

class hotel
{
    private:
    int hotel_id;
    static char hotel_name[20];
    char hotel_type[20];
    int hotel_rating;
    char hotel_location[100];
    int hotel_established_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    public:
    void inputofhotels()
    {
        cout<<"enter hotel id:";
        cin>>this->hotel_id;
        fflush(stdin);
        cout<<"enter your hotel type:";
        gets(this->hotel_type);
        cout<<"enter your hotel rating:";
        cin>>this->hotel_rating;
        fflush(stdin);
        cout<<"enter your hotel location:";
        gets(this->hotel_location);
        cout<<"enter your hotel eatablished year:";
        cin>>hotel_established_year;
        fflush(stdin);
        cout<<"enter your hotel staff quantity:";
        cin>>this->hotel_staff_quantity;
        cout<<"enter your hotel room quantity:";
        cin>>this->hotel_room_quantity;

    }
    void outputofhotel()
    {
        cout<<"ID:"<<this->hotel_id<<endl
            <<"NAME:"<<this->hotel_name<<endl
            <<"TYPE:"<<this->hotel_type<<endl
            <<"RATING:"<<this->hotel_rating<<endl
            <<"LOCATION:"<<this->hotel_location<<endl
            <<"ESTABLISHED YEAR:"<<this->hotel_established_year<<endl
            <<"STAFF QUANTITY:"<<this->hotel_staff_quantity<<endl
            <<"ROOM QUANTITY:"<< this->hotel_room_quantity<<endl;
    }

};
char hotel::hotel_name[20]="High-Sky";

int main()
{
    int n,i;
    cout <<"enter number of hotels:";
    cin>>n;
    hotel h[n];
    for(i=0;i<n;i++)
    {
        h[i].inputofhotels();
    }
        for(i=0;i<n;i++)
    {
        h[i].outputofhotel();
    }
}