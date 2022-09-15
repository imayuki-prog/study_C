#include <iostream>
using namespace std;
    
int main()
{

int grade;

cout << "Enter your percent: ";
cin >> grade;

if (grade > 86)
    {
        cout << "Your grade is A" << endl;
    }
else if (grade > 73)
    {
        cout << "Your grade is B" << endl;
    }
else if (grade > 67)
    {
        cout << "Your grade is C+" << endl;
    }
else if (grade > 60)
    {
        cout << "Your grade is C" << endl;
    }
else if (grade > 50)
    {
        cout << "Your grade is C-" << endl;
    }
else
    {
        cout << "Your grade is F" << endl;
    }
    
    return 0;

}