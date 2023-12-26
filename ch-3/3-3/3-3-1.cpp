#include <iostream>
#include <string.h>
using namespace std;

class DiamondCompanies
{
protected:
    int cmp_id;
    char cmp_name[20];
    int cmp_staff_qty;
    int cmp_reneue;
    int cmp_import_raw_diamonds;
    int cmp_export_diamonds;
    char cmp_ceo[20];

public:
    DiamondCompanies(int cmp_id, char cmp_name[], int cmp_staff_qty, int cmp_reneue, int cmp_import_raw_diamonds, int cmp_export_diamonds, char cmp_ceo[])
    {
        this->cmp_id=cmp_id;
        strcpy(this->cmp_name,cmp_name);
        this->cmp_staff_qty=cmp_staff_qty;
        this->cmp_reneue=cmp_reneue;
        this->cmp_import_raw_diamonds=cmp_import_raw_diamonds;
        this->cmp_export_diamonds=cmp_export_diamonds;
        strcpy(this->cmp_ceo,cmp_ceo);
        
        cout << endl
             << "COMPANY ID:" << this->cmp_id << endl
             << "COMPANY NAME" << this->cmp_name << endl
             << "COMPANY STAFF QUANTITY:" << this->cmp_staff_qty << endl
             << "COMPANY RENEUE:" << this->cmp_reneue << endl
             << "COMPANY IMPORT OF DIAMONDS:" << this->cmp_import_raw_diamonds << endl
             << "COMPANY EXPORT OF DIAMONDS:" << this->cmp_export_diamonds << endl
             << "COMPANY CEO NAME:" << this->cmp_ceo << endl
             << endl;
    }
    void inputOfNumberOfCompny()
    {
        int n;
        cout<<"enter number of company which you have to print :";
        cin>>n;
    }
};
int main()
{

    int n, i;
    cout << "enter number of diamond companies:";
    cin >> n;

    int cmp_id;
    char cmp_name[20];
    int cmp_staff_qty;
    int cmp_reneue;
    int cmp_import_raw_diamonds;
    int cmp_export_diamonds;
    char cmp_ceo[20];

    for (i = 1; i <= n; i++)
    {
        cout << endl
             << "------------------:INPUT DETAILS OF COMPANY " << i << ":---------------" << endl;
        cout << "enter your company id:";
        cin >> cmp_id;
        fflush(stdin);
        cout << "enter your company name:";
        gets(cmp_name);
        cout << "enter your company staff quantity:";
        cin >> cmp_staff_qty;
        cout << "enter your company reneue:";
        cin >> cmp_reneue;
        cout << "enter your company import raw diamond per years:";
        cin >> cmp_import_raw_diamonds;
        cout << "enter your company export diamnond per years:";
        cin >> cmp_export_diamonds;
        fflush(stdin);
        cout << "enter your company CEO name:";
        gets(cmp_ceo);
    }
    for (i = 1; i <= n; i++)
    {
        cout << endl
             << "------------------:OUTPUT DETAILS OF COMPANY " << i << ":---------------" << endl;
        DiamondCompanies d1(cmp_id, cmp_name, cmp_staff_qty, cmp_reneue, cmp_import_raw_diamonds, cmp_export_diamonds, cmp_ceo);
    }
    
}