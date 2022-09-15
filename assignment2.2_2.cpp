#include <iostream>
using namespace std;
    
int main()
{

int u_month;

cout << "Enter a month by number: ";
cin >> u_month;

if (u_month > 1)
    {
        cout << "January has 31 days" << endl;
    }
else if (u_month > 2)
    {
        cout << "February has 28 days" << endl;
    }
else if (u_month > 3)
    {
        cout << "March has 31 days" << endl;
    }
else if (u_month > 4)
    {
        cout << "April has 30 days" << endl;
    }
else if (u_month > 5)
    {
        cout << "May has 31 days" << endl;
    }
else if (u_month > 6)
    {
        cout << "June has 30 days" << endl;
    }
else if (u_month > 7)
    {
        cout << "July has 31 days" << endl;
    }
else if (u_month > 8)
    {
        cout << "August has 31 days" << endl;
    }
else if (u_month > 9)
    {
        cout << "September has 30 days" << endl;
    }
else if (u_month > 10)
    {
        cout << "October has 31 days" << endl;
    }
else if (u_month > 11)
    {
        cout << "November has 30 days" << endl;
    }
else
    {
        cout << "December has 31 days" << endl;
    }
    
    return 0;

}