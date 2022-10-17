#include <iostream>
using namespace std;

int main() 
{

int num1, num2, gcd;

cout << "Enter two numbers: "; 
cin >> num1 >> num2;

if (num2 > num1)
{
    int swap = num2;
    num2 = num1;
    num1 = swap;
}

for (int i = 1; i <= num2; ++i)
    {
    if (num1 % i == 0 && num2 % i == 0){
        gcd = i;
    }
    
}

cout << "GCD = " << gcd;

return 0;

}