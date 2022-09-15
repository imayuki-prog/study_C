#include <iostream>
using namespace std;
    
int main()
{

    cout << "Enter a number:";
    int x;
    cin >> x;
    
    if(x > 10)
    {
        //both statements will be executed if x > 10
        cout << "You entered" << x << "\n";
        cout << x << "is greter than 10\n";
    }
    else
    {
        //both statements will be excuted if x < = 10
        cout << "You entered" << x << "\n";
        cout << x << " is not greater than 10\n";
    }
    
    return 0;

}