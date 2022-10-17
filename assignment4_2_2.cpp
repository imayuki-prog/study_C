
# include <iostream>
using namespace std;

void prime(double a, double b, double c, double d);

int main()
{
    
double p, n, t, r;

cout << "This is the compound interest calculator.\n Enter these numbers";
cout << "P = Amount of money : "; cin >> p;
cout << "r  = Interest rate : "; cin >> n;
cout << "t  = The number of time that interest is compounded per unit t : "; cin >> t;
cout << "r  = The time the money is invested for : "; cin >> r;

prime(p, n, t, r);
return 0;

}


// Return type of function is void because value is not returned.
void prime(double a, double b, double c, double d)
{

double rate = b / 100;
double first = 1 + rate;
double second = first * first * first;
double comp = a * second;

cout << "The compound interest is " <<  comp;

}