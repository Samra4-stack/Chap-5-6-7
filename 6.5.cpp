/* Write a Program that inputs a number from the user and displays a table on that 
number using While loop*/
#include<iostream>
using namespace std;
int main()
{
    int num, i;
    cout<<"Enter a number to display that number: ";
    cin >> num;
    i = 1;
    while(i<=10){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }
    return 0;
}