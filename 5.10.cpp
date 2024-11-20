/*  Write a Program that inputs salary and Grade. It adds 50% Bonus if the Grade is
    Greater than 15. It adds 25% Bonus if the Grade is 15 or less and then displays the 
    total salary.*/
#include<iostream>
using namespace std;
int main()
{
    int salary , bonus ,Grade ;
    cout<<"Enter Salary : ";
    cin>>salary;
    cout<<"Enter Grade in digits: ";
    cin>>Grade;
    if(Grade > 15){
        bonus = (salary * 50) / 100;
        salary += bonus;
        cout<<" 50% Bonus Added -> Total Salary : "<<salary<<endl;
    }
    else if (Grade <= 15){
        bonus = (salary * 25) / 100;
        salary += bonus;
        cout<<" 25% Bonus Added -> Total Salary : "<<salary<<endl;
    }
    else{
        cout<<"Invalid Grade!";
    }
}