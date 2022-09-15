#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x_a;
    double y_a;
    double x_b;
    double y_b;
    double x_result;
    double y_result;
    double result;
    
    
    /* d=√[(x2-x1)^2+(y2-y1)^2] */
    
    cout << "Enter the coordinate of 2 points, A and B" << endl;
    cout << "*Using only SPACE between 'x' and 'y'." << endl;
    cout << "A point (x y): "; cin >> x_a >> y_a;
    cout << "B point (x y): "; cin >> x_b >> y_b;
    
    x_result = (x_b - x_a) * (x_b - x_a);
    y_result = (y_b - y_a) * (y_b - y_a);
    result = sqrt(x_result + y_result);
    
    cout << "The distance is " << result << endl;
    
    /*7. Write a program that asks the user to type the price without tax of one kilogram of tomatoes, the number of kilograms you want to buy and the tax in percent units. The program must write the total price including taxes. */
    return 0;

}