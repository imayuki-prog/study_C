#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main () {

    float x[10][10]={{0,0.7,0.72,0.62,104.13,5.37,1001.86,0.7,12.71,1.11},{1.33,0,0.96,0.83,139.03,7.17,1337.11,0.94,16.96,1.48},{1.39,1.04,0,0.86,144.81,7.45,1393.21,0.98,17.67,1.54},{1.61,1.2,1.15,0,167.86,8.63,1614.83,1.13,20.5,1.79},{0.0096,0.0071,0.0069,0.0059,0,0.051,9.62,0.0067,0.12,0.01},{0.18,0.13,0.13,0.11,19.43,0,187.11,0.13,2.37,0.2},{0.00099,0.00074,0.00071,0.00061,0.1,52,0,0.0007,0.013,0.0011},{1.41,1.06,1.02,0.87,147.65,7.59,1420.52,0,18.03,1.57},{0.07,0.05,0.05,0.04,8.18,0,78.76,0.05,0,0.08},{0.9,0.67,0.64,0.55,93.77,4.82,901.84,0.63,11.45,0}};
    string mark[10]={"C$", "US$", "€", "£", "¥", "CN¥", "₩", "CHF", "ZAR", "AU$"};
    string currency[10]={"0. Canadian Dollar", "1. US Dollar", "2. Euro", "3. British Pound", "4. Japanese Yen", "5. Chinese Yuan", "6. Korean Won", "7. Swiss Franc", "8. South African Rand", "9. Australian Dollar"};
    int row, column;
    float amount;
    
    cout<<"Enter amount of currency: ";
    cin>>amount;
    while(1)
    {if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"You have entered wrong input"<<endl;
        cout<<"Enter amount of currency: ";
        cin>>amount;
    }
       if(!cin.fail())
       break;
    } 

    cout<<"\nWhich currency is the base?\n"<<"0. Canadian Dollar\n1. US Dollar\n2. Euro\n3. British Pound\n4. Japanese Yen\n5. Chinese Yuan\n6. Korean Won\n7. Swiss Franc\n8. South African Rand\n9. Australian Dollar\n"<<"Enter a number: ";
    cin>>row;
    
    while(row>=10)
    {
    cout<<"You have entered wrong input\n"<<endl;
    cout<<"Which currency is the base?\n"<<"0. Canadian Dollar\n1. US Dollar\n2. Euro\n3. British Pound\n4. Japanese Yen\n5. Chinese Yuan\n6. Korean Won\n7. Swiss Franc\n8. South African Rand\n9. Australian Dollar\n"<<"Enter a number: ";
    cin>>row;
    }
 
    cout<<"\nWhich currency do you want to convert?\n"<<"0. Canadian Dollar\n1. US Dollar\n2. Euro\n3. British Pound\n4. Japanese Yen\n5. Chinese Yuan\n6. Korean Won\n7. Swiss Franc\n8. South African Rand\n9. Australian Dollar\n"<<"Enter a number: ";
    cin>>column;
 
    while(column>=10)
    {
    cout<<"You have entered wrong input\n"<<endl;
    cout<<"\nWhich currency do you want to convert?\n"<<"0. Canadian Dollar\n1. US Dollar\n2. Euro\n3. British Pound\n4. Japanese Yen\n5. Chinese Yuan\n6. Korean Won\n7. Swiss Franc\n8. South African Rand\n9. Australian Dollar\n"<<"Enter a number: ";
    cin>>column;
    }
    
    cout<<"\n----------------------------------------------------\n";
    cout<<"["<<currency[row]<<"]"<<" Convert to "<<"["<<currency[column]<<"]\n";
    
    cout<<"["<<mark[row]<<setprecision(3);
    printf("%4.2f", amount);
    cout<<"] to ["<<mark[column]<<setprecision(3);
    
    printf("%4.2f", amount*x[row][column]);
    cout<<"] \n----------------------------------------------------";    

   return 0;

}