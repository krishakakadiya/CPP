#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
private:
    int h_number;
    char h_name[20];
    char h_type[20];
    int h_rating;
    char h_location[20];

public:
    Hotel(int h_number, char h_name[], char h_type[], int h_rating, char h_location[])
    {
        this->h_number = h_number;
        this->h_rating = h_rating;
        strcpy(this->h_name, h_name);
        strcpy(this->h_type, h_type);
        strcpy(this->h_location, h_location);

        cout << "enter your hotel number:";
        cin >> h_number;
        fflush(stdin);
        cout << "enter your hotel name:";
        gets(h_name);
        cout << "enter your hotel type:";
        gets(h_type);
        fflush(stdin);
        cout << "enter your hotel rating:";
        cin >> h_rating;
        fflush(stdin);
        cout << "enter your hotel location:";
        gets(h_location);
    }
    void output()
    {
        cout << endl
             << "HOTEL NUMBER:" << h_number << endl
             << "HOTEL NAME:" << h_name << endl
             << "HOTEL TYPE:" << h_type << endl
             << "HOTEL RATING:" << h_rating << endl
             << "HOTEL LOCATION:" << h_location << endl;
    }
};
int main()
{
    int h_number;
    char h_name[20];
    char h_type[20];
    int h_rating;
    char h_location[20];
    int n, i;
    cout << "enter number of hotel:";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        Hotel h[n]=(h_number, h_name, h_type, h_rating, h_location);
    }
    for (i = 1; i <= n; i++)
    {
        h[i].output();
    }
}