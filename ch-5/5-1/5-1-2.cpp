#include <iostream>
using namespace std;

class Cricket
{
public:
    void getTotalOvers()
    {
        cout << "the total overs is  only 40!!" << endl;
    }
};
class T20Match : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << "the total overs is 90!!" << endl;
    }
};
int main()
{
    T20Match t1;
    t1.getTotalOvers();
}