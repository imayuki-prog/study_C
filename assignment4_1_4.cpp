#include <iostream>
using namespace std;

int reverse(int a);

int main() 
{
int num;
cout << "Enter the ten digit number : "; cin >> num;
cout << "The reversed number is ";
reverse(num);
}


int reverse(int a){
int rev, rem;
int n = a;

for(int n; a > 0; a = a / 10)
{
    rem = a % 10;
    cout << rem;
}
}