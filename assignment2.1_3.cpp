#include <iostream>
using namespace std;

int main()
{
    int monday;
    int tuesday;
    int wednesday;
    int thursday;
    int friday;
    int total;
    
    cout << "Enter your number of hours worked" << endl;
    cout << "Monday    : "; cin>>monday;
    cout << "Tuesday   : "; cin>>tuesday;
    cout << "Wednesday : "; cin>>wednesday;
    cout << "Thursday  : "; cin>>thursday;
    cout << "Friday    : "; cin>>friday;
        
    total = monday + tuesday + wednesday + friday ;
        
    cout << "\nThe total hours worked is "<< total << endl;

    return 0;

}