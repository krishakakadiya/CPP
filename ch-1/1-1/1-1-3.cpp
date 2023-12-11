#include <iostream>
using namespace std;

int main()
{
    int i;
    char name[50];
    cout << "enter your name:";
    cin >> name;

    for (i = 0; i <= 50; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    cout << "name:" << name;
    return 0;
}