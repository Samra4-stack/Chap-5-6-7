/* Write a Program that allows the user to enter any character through the keyboard
and determines whether it is a capital letter,small case letter, a digit number 
or a symbol*/
#include<iostream>
using namespace std;
int main()
{
    char i;
    cout<< "Enter any Character: ";
    cin>>i;
    if(i>='a'&& i<='z'){
        cout<< "The entered character "<<i<<" is a small case letter."<< endl;
    }
    else if(i>='A'&& i<='Z'){
        cout<< "The entered character "<<i<<" is a capital letter."<< endl;
    }
    else if(i>='0' && i<='9'){
        cout<< "The entered character "<<i<<" is a digit number."<< endl;
    }
    else{
        cout<< "The entered character "<<i<<" is a symbol."<< endl;
    }
    return 0;
}