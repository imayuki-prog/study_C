#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double kg_t;
    double user_t;
    double taxes;
    double total;
    
    cout << "Enter the price without tax of one kilogram of tomatoes : $"; cin >> kg_t;
    cout << "How much kilogram of tomatoes do you want to buy? : "; cin >> user_t;
    cout << "How many persent is taxes? : "; cin >> taxes;
    
    total = (kg_t * user_t) * ((taxes + 100) / 100);
    
    cout << "The total price is $" << fixed << setprecision(2) << total << endl;
    
    /*6. Write a program that asks the user to type the price without tax of one kilogram of tomatoes, the number of kilograms you want to buy and the tax in percent units. The program must write the total price including taxes. */

    return 0;
    
}