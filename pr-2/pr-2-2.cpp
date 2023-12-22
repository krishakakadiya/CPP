#include<iostream>
#include<string.h>
using namespace std;

class SuperMarketA
{
    protected:
    int item_num;
    char item_name[20];
    int item_quantity;
    int item_price;
    char item_discount[10];
    public:
        void input()
        {
            cout<<"enter your item number:";
            cin>>this->item_num;
            cout<<"enter your item name:";
            gets(this->item_name);
            cout<<"enter your item quantity:";
            cin>>this->item_quantity;
            cout<<"enter your item price:";
            cin>>this->item_price;
            cout<<"enter your item discount:";
            gets(this->item_discount);
        }
};
class SuperMarketA
{
    protected:
        char user_id[10];
        char pswd[50];
        void verification()
        {
            cout<<"enter your user ID:";
            gets(this->user_id);
            cout<<"enter your password:";
            gets(this->pswd);

            
        }
};
int main()
{

}