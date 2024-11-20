/* Write  a Program the calculates the Electricity bills. The rate of Electricity per
unit are as:

        If the Units consumed are <=300 , then the cost is Rs 2 per unit.
        If the Units consumed are >300 and <=500 , then the cost is Rs 5 per unit.
        If the Units exceed 500 , then the cost  per unit is Rs 7.

A line rent Rs 150 is also added to the total bill and a surcharge of 5% extra if the bill
exceed Rs 2000. Calculate the total bill with all the conditions given above.*/
#include<iostream>
using namespace std;
int main()
{
   int units;
   cout<<"Enter the Units consumed: ";
   cin>>units;
   if(units<=300){
        cout<<"The cost per unit is Rs 2.\n";
        cout<<"Total cost: "<<(units*2);
        cout<<"Total cost before surcharge: "<<(units*2)+150<<endl;
        if(units*2+150>2000){
            cout<<"Surcharge of 5% is applied.\n";
            cout<<"Total bill: "<<(units*2+150)*(1+0.05)<<endl;
        }else{
            cout<<"Total bill: "<<(units*2+150)<<endl;
        }
   }
   else if(units>300 and units<=500){
        cout<<"The cost per unit is Rs 5.\n";
         cout<<"Total cost: "<<(units*5);
        cout<<"Total cost with line rent before surcharge: "<<(units*5)+150<<endl;
        if(units*5+150>2000){
            cout<<"Surcharge of 5% is applied.\n";
            cout<<"Total bill: "<<(units*5+150)*(1+0.05)<<endl;
        }else{
            cout<<"Total bill: "<<(units*5+150)<<endl;
        }
   }
   else if(units>500){
        cout<<"The cost per unit is Rs 7.\n";
         cout<<"Total cost: "<<(units*7);
        cout<<"Total cost with line rent before surcharge: "<<(units*7)+150<<endl;
        if(units*7+150>2000){
            cout<<"Surcharge of 5% is applied.\n";
            cout<<"Total bill: "<<(units*7+150)*(1+0.05)<<endl;
        }else{
            cout<<"Total bill: "<<(units*7+150)<<endl;
        }
   }
   else{
        cout<<"Invalid units"<<endl;
   }

}