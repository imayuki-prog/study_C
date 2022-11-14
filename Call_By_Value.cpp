#include <iostream>
using namespace std;

void ChangeValues(int x); //Prototype
int main()
{
    int x=5;
    ChangeValues(x);
    cout<<"Back in main:"<<x<<endl;
    return 0;
}

void ChangeValues(int x)
{
    cout<<"In change values:"<<x<<endl;
    x=10;
    cout<<"In change values:"<<x<<endl;
    return;
}