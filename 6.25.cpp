/*Write a Program that inputs table number and length of table and then displays 
the table using for loop*/

#include <iostream>
using namespace std;
int main() {
    int tableNumber, length;    
    cout << "Enter the table number: ";
    cin >> tableNumber;    
    cout << "Enter the length of table: ";
    cin >> length;    
    cout << "Table " << tableNumber << ":" << endl;
    
    for (int i = 1; i <= length; i++) {
       cout<<tableNumber<<" * "<<i<<" = "<<tableNumber*i<<endl;
    }    
    return 0;
}