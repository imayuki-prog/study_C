#include <iostream>
#include <cmath>

using namespace std;
    
int main()
{

double volume_of_topsoil; // choices are 15cm or 20cm of soil
double cost_of_sod = 929; // $1.99/929cm2
double order;
double ad_cost_sod = 1.05; // add 5% for SOD
double delivery_charges = 179.00;
double gst = 1.05;
double dis_10 = 0.9; // if soil and grass is purchased together
double dis_5 = 0.95; //  if the lawn is bigger than 83 meters2
double cost = 1.99;
double total_cost;

cout << "Choose 15cm or 20cm of soil: "; cin >> volume_of_topsoil;
cout << "Would you like to buy sod needed to cover the lawn?\nYes 1 / No  2 : "; cin >> order;

double volume_of_topsoil_cm2 = volume_of_topsoil * volume_of_topsoil;

if (order == 2)
{
    double total_cost_n = volume_of_topsoil_cm2 * cost;
    double total_del = total_cost_n + delivery_charges;
    cout 
    << "\n"
    << "-------The itemized bill-------\n" 
    << "Total            $" 
    << total_del * gst 

    << "\n"
    << "-------------------------------\n"

    << "The Topsoil      $"
    << total_cost_n
    << "("
    << volume_of_topsoil_cm2
    << "cm2)"
    
    << "\n" 
    << "Delivery charges $"
    << delivery_charges

    << "\n" 
    << "GST              $"
    << ((total_del * gst) - total_del)
    
    << endl;
}

else if (cost_of_sod > 82)
{ 
    double total_topsoil_cost = volume_of_topsoil_cm2 * cost;
    double total_sod_cost = cost_of_sod * cost;
    double total_sod_adcost = total_sod_cost * ad_cost_sod; // add 5% for SOD 
    
    double total_amount = total_topsoil_cost + total_sod_adcost; // total
    
    double total_amount_dis = total_amount * dis_5; // volume discount for sod
    double total_cost_n = total_amount_dis * dis_10; // volume disoucnt for both

    cout 
    << "\n"
    << "-------The itemized bill-------\n" 
    << "Total             $"
    << (total_cost_n + delivery_charges) * gst 
    
    << "\n"
    << "-------------------------------\n"
    
    << "The Topsoil       $"
    << total_topsoil_cost
    << "("
    << volume_of_topsoil_cm2
    << "cm2)"
    
    << "\n" 
    << "The Sod           $"
    << total_sod_cost
    << "("
    << cost_of_sod
    << "cm2)"

    << "\n" 
    << "Additional sod.   $"
    << total_sod_adcost - total_sod_cost
    << "(5%)"
    
    << "\n" 
    << "Volume discount1 -$"
    << total_amount - total_amount_dis
    << "(5%)"

    << "\n" 
    << "Volume discount2 -$"
    << total_amount_dis - total_cost_n
    << "(10%)"
    
    << "\n" 
    << "Delivery charges  $"
    << delivery_charges
    
    << "\n" 
    << "GST               $"
    << ((total_cost_n + delivery_charges) * gst  - (total_cost_n + delivery_charges))
    
    << endl;
}

else
{ 
    double total_topsoil_cost = volume_of_topsoil_cm2 * cost;
    double total_sod_cost = cost_of_sod * cost;
    double total_sod_adcost = total_sod_cost * ad_cost_sod; // add 5% for SOD 
    
    double total_amount = total_topsoil_cost + total_sod_adcost; // total
    
    double total_cost_n = total_amount * dis_10; // volume disoucnt for both

    cout 
    << "\n"
    << "-------The itemized bill-------\n" 
    << "Total             $"
    << (total_cost_n + delivery_charges) * gst 
    
    << "\n"
    << "-------------------------------\n"
    
    << "The Topsoil       $"
    << total_topsoil_cost
    << "("
    << volume_of_topsoil_cm2
    << "cm2)"
    
    << "\n" 
    << "The Sod           $"
    << total_sod_cost
    << "("
    << cost_of_sod
    << "cm2)"

    << "\n" 
    << "Additional sod.   $"
    << total_sod_adcost - total_sod_cost
    << "(5%)"

    << "\n" 
    << "Volume discount2 -$"
    << total_amount - total_cost_n
    << "(10%)"
    
    << "\n" 
    << "Delivery charges  $"
    << delivery_charges
    
    << "\n" 
    << "GST               $"
    << ((total_cost_n + delivery_charges) * gst  - (total_cost_n + delivery_charges))
    
    << endl;
}

    return 0;
}
