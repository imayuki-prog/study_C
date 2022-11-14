// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

double cube(double num){
    double result=num*num*num;
    return result;
    
    //The below code, it can't be executed. Because, in the above "return", execution is being break.
    cout<<"Hello";
}

int main()
{

    double answer=cube(5.0);
    cout<<answer;

return 0;
}
