#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int x;
    
    cin >> x;
    
    if(x > 10)
        cout << x << "is greater than 10\n";
    else
        cout << x << "is not grater than 10\n";
    
    return 0;

}