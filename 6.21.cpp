/*Write a program that gets starting and ending point from the user and displays 
all the odd numbers in the given range using do-while loop*/
#include<iostream>
using namespace std;
int main()
{
    int start, end;
    cout<<"Enter the starting point: ";
    cin>>start;
    cout<<"Enter the ending point: ";
    cin>>end;
    
    do
    {
        if(start%2!=0)
            cout<<start<<endl;
        start++;
    }
    while(start<end);
    
    return 0;
}