#include <iostream>
using namespace std;

int main()
{
    int width;
    int height;
    int perimeter;
    
    cout << "Enter the width and height of rectangle.\nIt will be calculated the perimeter of rectangle." << endl;
    cout << "The width : "; cin >> width;
    cout << "The hegith : "; cin >> height;
    
    perimeter = 2 * (width + height);
    
    cout << "The perimerter is " << perimeter << endl;
    
}