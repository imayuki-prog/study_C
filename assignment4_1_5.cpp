#include <iostream>
#include <cmath>
using namespace std;

float qua(float, float, float);

int main()
{
    float a, b, c;
    
    cout << "Enter numbers for quadratic calculating.\n";
    cout << "Quadratic formula ax2 + bx + c = 0\n";
    cout << "a "; cin >> a;
    cout << "b "; cin >> b;
    cout << "c "; cin >> c;
    

    qua(a, b, c);
    
    return 0;
}

float qua(float a, float b, float c)
{
    float kai1, kai2, real, imag, discriminant;
    
  discriminant = b * b - 4 * a * c;
 
  if ( discriminant > 0 ) {
 
    kai1 = ( -b + sqrt(discriminant) ) / (2*a) ;
    kai2 = ( -b - sqrt(discriminant) ) / (2*a);
 
    cout << "x = " <<  kai1 << ", " << kai2;
 
 
  } else if ( discriminant == 0 ) {
 
    kai1 = kai2 = -b / ( 2 * a );
 
    cout << "x = " <<  kai1 << ", " << kai2;
    
    
  } else {
 
    real = -b / (2*a);
    imag = sqrt(-discriminant) / (2*a);
 
    cout << "x = " << real << imag << ", " << real << imag;
  }
}
