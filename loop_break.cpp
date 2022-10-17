#include <iostream>
using namespace std;

int main() {
    float number, sum = 0.0;
    
 while (true)
 {
     cout << "Enter a number: ";
     cin >> number;
     
    if (number != 0.0)
    {
         sum += number;
    }
    else

    {
    break;
    }
}

cout << "sum = " << sum;
    
    return 0;
}