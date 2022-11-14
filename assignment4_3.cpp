#include <iostream>
using namespace std;

int addition(int, int);
int convert(int, int);
int even_odd(int);

int main()

{
    
    int add_a, add_b;
    int cv_hours, cv_mins;
    int e_o;
    
    cout << "Enter two numbers for addition: "; cin >> add_a >> add_b;
    cout << "Enter two numbers for calculatring total seconds.\n";
    cout << "Hours: "; cin >> cv_hours;
    cout << "Minutes: "; cin >> cv_mins;
    cout << "Enter the number to check Odd or Even: "; cin >> e_o;
    
    addition(add_a, add_b);
    convert(cv_hours, cv_mins);
    even_odd(e_o);
}

int addition(int add_a, int add_b)
{
    
    int sum = add_a + add_b;
    cout << "The sum is " << sum << "\n";
    
}

int convert(int cv_hours, int cv_mins)
{
    int hours = cv_hours * 3600;
    int mins = cv_mins * 60;
    int sum = hours + mins;
    cout << "The total seconds is " << sum << "\n";
    
}

int even_odd(int e_o)
{
    
    int eo = e_o % 2;
    
if (e_o == 0)
{
    cout << "The number is Even.";
}

else if(e_o == 1)
{
    cout << "The number is Odd.";
}

else if(e_o <= 0)
{
    cout << "Error";
}

else if(eo == 0)
{
    cout << "The number is Even.";
}

else{
cout << "The number is Odd.";
}

}
