/* Write a Program that inputs five integers from the user and stores them in a array 
then displays all the values in array using loops*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5]; //store an array of integers
    cout<<"Enter 5 integers: ";
    for(int i=0; i<5; i++)
        cin>>arr[i]; //taking input from user_output
    
    cout<<"Array elements: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    return 0;
}