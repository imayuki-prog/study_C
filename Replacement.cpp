#include <iostream>
using namespace std;

void ChangeValues(int &y);  //Prototype
int main()
{
    int x=5;
    cout<<"Before call,x="<<x<<endl;
    ChangeValues(x);
    cout<<"Back in main x="<<x<<endl;
    return 0;
}

void ChangeValues(int &y)
{
    cout<<"In ChangeValues, Y="<<y<<endl;
    y=20;
    cout<<"In ChangeValues, Y="<<y<<endl;
    return;
}