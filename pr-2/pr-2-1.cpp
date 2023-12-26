#include <iostream>
#include <string.h>
using namespace std;

class TrainA
{
protected:
    int train_num;
    char train_name[20];
    char train_source[30];
    char train_destination[50];
    char train_time[10];

public:
    void inputoftrainA()
    {

        cout << "enter your train number:";
        cin >> train_num;
        fflush(stdin);
        cout << "enter your train name:";
        gets(train_name);
        cout << "enter your train source:";
        gets(train_source);
        cout << "enter your train destination:";
        gets(train_destination);
        cout << "enter your train time:";
        gets(train_time);
    }
};
class TrainB : public TrainA
{
public:
    void outputoftrainA()
    {
        cout << "--------:TRAIN DETAILS:-------" << endl
             << endl;
        cout << "TRAIN NUMBER:" << train_num << endl
             << "TRAIN NAME:" << train_name << endl
             << "TRAIN SOURCE:" << train_source << endl
             << "TRAIN DESTINATION:" << train_destination << endl
             << "TRAIN TIME:" << train_time << endl;
    }
};

class TrainC : public TrainB
{
public:
    void inputoftrainnumber(int n)
    {
        cout << "enter number of train which you have to print:";
        cin >> n;
    }
};
int main()
{
    int i, n;

    cout << "enter number of trains:";
    cin >> n;

    TrainB tb1[n];
    TrainC tc1;

    for (i = 1; i <= n; i++)
    {
        cout << endl
             << "------:INPUT OF TRAIN " << i << ":----------" << endl
             << endl;
        tb1[i].inputoftrainA();
    }

    for (i = 1; i <= n; i++)
    {
         cout << endl
             << "------:OUTPUT OF TRAIN " << i << ":----------" << endl
             << endl;
        tb1[i].outputoftrainA();
    }

    tc1.inputoftrainnumber(n);
    if (n == 1)
    {
        tb1[1].outputoftrainA();
    }
    else if (n == 2)
    {
        tb1[2].outputoftrainA();
    }
    else if (n == 3)
    {
        tb1[3].outputoftrainA();
    }
    else
    {
        cout << "this data we don't have!?...," << endl
             << "SORRY!!" << endl;
    }
}