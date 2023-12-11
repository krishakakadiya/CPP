#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "enter size of array :";
    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]:";
        cin >> a[i];
    }
    cout << "----:EVEN NUMBERS FROM ARRAY:------" << endl;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << "a[" << i << "]:" << a[i] << endl;
        }
    }
    return 0;
}