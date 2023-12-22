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
    void input()
    {
        cout << "enter your train number:";
        cin >> train_num;
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
class TrainB:public TrainA
{
    public:
    void output()
    {
        cout << "TRAIN NUMBER:" <<train_num << endl
             << "TRAIN NAME:" << train_name << endl
             << "TRAIN SOURCE:" <<train_source << endl
             << "TRAIN DESTINATION:" << train_destination << endl
             << "TRAIN TIME:" << train_time << endl;
    }
};

class TrainC
{

};
int main()
{
    
}