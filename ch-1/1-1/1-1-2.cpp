#include <iostream>
using namespace std;

int main()
{
    int fy, sy, i;
    cout << "enter 1st year :";
    cin >> fy;
    cout << "enter 2nd year:";
    cin >> sy;

    cout << "the array is :";

    for (i = fy; i <= sy; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << ",";
        }
    }
    return 0;
}