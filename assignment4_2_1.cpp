// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void g_c_d(int a, int b);

int main() 
{
    int a, b;
    cout << "Enter two positive numbers: "; 
    cin >> a >> b;
    
    g_c_d(a, b);
    return 0;
}

void g_c_d(int a, int b)
{
    int gcd;

   if (b > a)
{
    int swap = b;
    b = a;
    a = swap;
}
        
    for (int i = 1; i <= b; ++i){
    if (a % i == 0 && b % i == 0){
        gcd = i;
    }
}
    
    if (a <= 0 || b <= 0) {
    gcd = 0;
    cout << "GCD is " << gcd;
}
    else {
    cout << "GCD is " << gcd;
}

}

