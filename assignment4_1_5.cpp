#include <iostream>
using namespace std;

int qua(int, int, int, int);

int main()
{
    int a, b, c, x;
    
    cout << "Enter a, b, c, x for quadratic calculating: ";
    cin >> a >> b >> c >> x;
    

    cout << "Result " << qua(a, b, c, x) << endl;
    
    return 0;
}

int qua(int a, int b, int c, int x)
{
    int qua;
    qua = ((a * x)*(a * x)) + (b * x) + c;
    
    // ax2 + bx + c


    return qua;
    
}
