
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a;
    
    cout<<"Tyep a number: ";
    cin>>a;
    
    int b=a%3;

    if(a<9)
    {
    cout<<"The number is not a power of three.";
    }
    else if(b==0)
    {
    cout<<"The number is a power of three.";
    }
    else
    {
    cout<<"The number is not a power of three.";
    }
        return 0;
}

