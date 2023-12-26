#include <iostream>
#include <string.h>
using namespace std;

class Cafe
{
private:
    int cafe_id;
    char cafe_name[20];
    char cafe_type[10];
    int cafe_rating;
    char cafe_location[100];
    int cafe_establish_year;
    int cafe_staff_qyt;

public:
    Cafe()
    {
        cout << "enter your cafe id:";
        cin >> this->cafe_id;
        fflush(stdin);
        cout << "enter your cafe name:";
        gets(this->cafe_name);
        cout << "enter your cafe type:";
        gets(this->cafe_type);
        cout << "enter your cafe rating:";
        cin >> this->cafe_rating;
        fflush(stdin);
        cout << "enter your cafe location:";
        gets(this->cafe_location);
        cout << "enter your cafe establish year:";
        cin >> this->cafe_establish_year;
        cout << "enter your cafe staff quantity:";
        cin >> this->cafe_staff_qyt;
    }
    void output()
    {
        cout << endl
             << "CAFE ID:" << this->cafe_id << endl
             << "CAFE NAME:" << this->cafe_name << endl
             << "CAFE TYPE:" << this->cafe_type << endl
             << "CAFE RATING:" << this->cafe_rating << endl
             << "CAFE LOCATION:" << this->cafe_location << endl
             << "CAFE ESTABLISHED YEAR:" << this->cafe_establish_year << endl
             << "CAFE STAFF QUANTITY:" << this->cafe_staff_qyt << endl;
    }
};
int main()
{
    int n,i;
    cout << "enter number of cafe:";
    cin >> n;

    for (i = 1; i <n; i++)
    {
        cout<<"--------:DATA OF "<<i<<":-----------"<<endl;
        Cafe c[n];
        c[i].output();
    }
}