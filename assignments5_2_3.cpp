#include <iostream>
using namespace std;

int mys(int array[], int len)
{
    int n=1;
    for(int i=1; i<len; i++)
        if(array[i]<array[i-1])
            n++;
        else
            n=1;
    return n;    
}

int main () 
{
    int nums[9]={13, 11, 15, 9, 7, 5, 8, 3, 1};
    int n = mys(nums, 9);
    cout<<n<<endl;
}

