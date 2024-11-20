/* Write a Program that inputs a number from the user and displays the factorial on that 
number using While loop*/
#include<iostream>
using namespace std;
int main()
{
    int num , factorial;
    cout << "Enter a number to find factorial: ";
    cin >> num;
    factorial = 1;
    while(num > 0)
    {
        factorial *= num;
        num--;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}