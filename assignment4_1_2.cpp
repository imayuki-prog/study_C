#include <iostream>
using namespace std;

int max(int, int, int);
int min(int, int, int);


int main()
{
    
    int num1, num2, num3;
    
    cout << "English three numbers to add: ";
    cin >> num1 >> num2 >> num3;
    
    cout << "Maximum number is " << max(num1, num2, num3) << endl;
    cout << "Minimum number is " << min(num1, num2, num3) << endl;
    return 0;
    
}
 
 
int max(int num1, int num2, int num3)
{
   
   int max;
 
   if (num1>num2 && num1>num3) {
      max = num1;
   } else if (num2>num3) {
      max = num2;
   } else {
      max = num3;
   }
   
    return max;
}

 
int min(int num1, int num2, int num3)
{
   
   int min;
 
   if (num1<num2 && num1<num3) {
      min = num1;
   } else if (num2<num3) {
      min = num2;
   } else {
      min = num3;
   }
   
    return min;
}
