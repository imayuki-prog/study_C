#include <iostream>
using namespace std;

int main () {
    
    int array[10];

    for(int i=0; i<10; i++)
    {
    cout<<"Type a number: ";
    cin>>array[i];
    }
    
    cout<<"The contents of entered numbers.\n";
    
    int sum=0;
    int product=1;
    
    for(int j=0; j<10; j++){
        sum=sum+array[j];
    }
    
    for(int k=0; k<10; k++){
        product=product*array[k];
    }
    //a number to the power of a number
    
    cout<<sum<<"\n";
    cout<<product;
    

    
    
   return 0;
}
