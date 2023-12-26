#include <iostream>
#include <string.h>
using namespace std;

class SuperMarket
{
protected:
    int item_num;
    char item_name[20];
    int item_quantity;
    int item_price;
    char item_discount[10];

public:
    void inputofitem()
    {
        cout << "enter your item number:";
        cin >> this->item_num;
        fflush(stdin);
        cout << "enter your item name:";
        gets(this->item_name);
        cout << "enter your item quantity:";
        cin >> this->item_quantity;
        cout << "enter your item price:";
        cin >> this->item_price;
        fflush(stdin);
        cout << "enter your item discount:";
        gets(this->item_discount);
    }

    void outputFromItem()
    {
        cout << endl
             << "Item Number : " << item_num
             << endl
             << "Item Name : " << item_name << endl;
    }

    int searchDataItem(int n)
    {
        if (item_num == n)
        {
            cout << endl
                 << "Item Number : " << item_num
                 << endl
                 << "Item Name : " << item_name << endl;
                 return 1;
        }else{
            return 0;
        }
    }
};

int main()
{
    SuperMarket s[3];

    for (int i = 0; i < 2; i++)
    {
        s[i].inputofitem();
    }

    for (int i = 0; i < 2; i++)
    {
        s[i].outputFromItem();
    }

    int n,val;

    cout << "Enter item number : ";
    cin  >> n;

    for(int i=0; i<2; i++)
    {
        val = s[i].searchDataItem(n);
    }
    if(val==0)
    {
        cout << "Data Not Found" << endl;
    }
}