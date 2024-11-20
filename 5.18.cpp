/* Write a Program that inputs three numbers and displays the largest number
by using nested if condition.*/
#include<iostream>
using namespace std;

int main()
{
    int num1 , num2 , num3 ;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if(num1 > num2 ){
        if(num1>num3){
            cout<<"Largest Number is "<<num1<<endl;
        }
        else{
            cout<<"Largest Number is "<<num3<<endl;
        }
    }
    else{
        if(num2>num3){
            cout<<"Largest Number is "<<num2<<endl;
         }
        else{
            cout<<"Largest Number is "<<num3<<endl;
         }
       }
    return 0;
}