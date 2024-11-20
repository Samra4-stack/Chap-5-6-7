/* Write a Program that inputs three numbers and displays the smallest number
by using nested if condition.*/
#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 , num3 ;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if(num1 < num2 ){
        if(num1<num3){
            cout<<"Smallest Number is "<<num1<<endl;
        }
        else{
            cout<<"Smallest Number is "<<num3<<endl;
        }
    }
    else{
        if(num2<num3){
            cout<<"Smallest Number is "<<num2<<endl;
         }
        else{
            cout<<"Smallest Number is "<<num3<<endl;
         }
       }
    return 0;
}