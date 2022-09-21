#include <iostream>
using namespace std;
    
int main()
{

int order_n;
double a_p, b_p, c_p, d_p, e_p, f_p, g_p, h_p, i_p, j_p;
double gst;

gst = 5;
a_p = 10; /*#1 HAMBURGER*/
b_p = 12; /*#2 CHEESEBURGER*/
c_p = 13; /*#3 DOUBLE HAMBERGER*/
d_p = 14; /*#4 DOUBLE CHEESEBERGER*/
e_p = 15; /*#5 FISH BURGER*/
f_p = 20; /*#6 HAMBURGER SET*/
g_p = 22; /*#7 CHEESEBURGER SET*/
h_p = 23; /*#8 MEGA HAMBURGER SET*/
i_p = 40; /*#9 GIGA HAMBURGER SET*/
j_p = 60; /*#10 FAMILY HAMBURGER SET*/

cout << "Enter order number 1~10 :#";
cin >> order_n;
    
switch (order_n)
{
    case 1:
    cout << "Order HAMBURGER\n" << "Total price is $" << (a_p * ((gst + 100)/100)) << " (GST $" << (a_p * (gst/100)) << ")";
    break;
    
    case 2:
    cout << "Order CHEESEBURGER\n" << "Total price is $" << (b_p * ((gst + 100)/100)) << " (GST $" << (b_p * (gst/100)) << ")";
    break;
    
    case 3:
    cout << "Order DOUBLE HAMBERGER\n" << "Total price is $" << (c_p * ((gst + 100)/100)) << " (GST $" << (c_p * (gst/100)) << ")";
    break;
    
    case 4:
    cout << "Order DOUBLE CHEESEBERGER\n" << "Total price is $" << (d_p * ((gst + 100)/100)) << " (GST $" << (d_p * (gst/100)) << ")";
    break;
    
    case 5:
    cout << "Order FISH BURGER\n" << "Total price is $" << (e_p * ((gst + 100)/100)) << " (GST $" << (e_p * (gst/100)) << ")";
    break;
    
    case 6:
    cout << "Order HAMBURGER SET\n" << "Total price is $" << (f_p * ((gst + 100)/100)) << " (GST $" << (f_p * (gst/100)) << ")";
    break;
    
    case 7:
    cout << "Order CHEESEBURGER SET*\n" << "Total price is $" << (g_p * ((gst + 100)/100)) << " (GST $" << (g_p * (gst/100)) << ")";
    break;
    
    case 8:
    cout << "Order MEGA HAMBURGER SET\n" << "Total price is $" << (h_p * ((gst + 100)/100)) << " (GST $" << (h_p * (gst/100)) << ")";
    break;
    
    case 9:
    cout << "Order GIGA HAMBURGER SET\n" << "Total price is $" << (i_p * ((gst + 100)/100)) << " (GST $" << (i_p * (gst/100)) << ")";
    break;
    
    case 10:
    cout << "Order FAMILY HAMBURGER SET\n" << "Total price is $" << (j_p * ((gst + 100)/100)) << " (GST $" << (j_p * (gst/100)) << ")";
    break;
    
    default:
    cout << "Error! Order number is not correct.";
    break;
}
    
    return 0;

}