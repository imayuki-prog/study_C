#include <iostream>
using namespace std;

int main () {
    
    int array[8];

    for(int i=0; i<8; i++)
    {
    cout<<"Type a number: ";
    cin>>array[i];
    }
    
    cout<<"The contents of entered numbers...\n";
    
    for(int j=0; j<8; j++){
        cout<<array[j]<<endl;
    }
    
   return 0;
}
