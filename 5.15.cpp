/* Write a Program that inputs Salary. If the Salary is 20000 or more, it deducts 7% 
of Salary. If the Salary is 10000 or more, but less than 20000 it deducts 1000 of Salary. 
If the Salary is less than 10000 or more, it deducts nothing.it finally diplays the
Net Salary. */
#include<iostream>
using namespace std;
int main()
{
    int salary , deduction ;
    cout<<"Enter Salary : ";
    cin>>salary;
    if(salary >= 20000){
        deduction = (salary * 7) / 100;
        salary -= deduction;
        cout<<" 7% deducted -> Total Salary : "<<salary<<endl;
    }
    else if (salary >= 10000 and salary < 20000){
        deduction = 1000;
        salary -= deduction;
        cout<<" 1000 deducted -> Total Salary : "<<salary<<endl;
    }
    else if(salary < 10000){
        cout<<"Total Salary : "<<salary<<endl;
    }
    else{cout<<"Invalid Salary"<<endl;}
}