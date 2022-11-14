// Online C++ compiler to run C++ program online
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (){
    int i,j;
    
    //set the seed
    srand((unsigned)time(NULL));
    
    //Generate 10 random numbers
    for(i=0;i<10;i++){
        //generate actual random number
        j=rand();
        int f=j%10; 
        //if you want to generate random numbers between 1-9. Using modulus(%) with 10.

        int e=j%10+1; 
        //if you want to generate random numbers between 1-10. Using modulus(%) with 10+1.
        cout<<"Random Number: "<<e<<endl;
        cout<<"Random Number: "<<f<<endl;
        cout<<"Random Number: "<<j<<endl;
        cout<<"Random Number: "<<rand()<<endl;
    }
    return 0;
    
}