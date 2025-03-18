/*
*Student Name: Jay Fisher
*File Name: Ch03Exercise07.cpp
*Data: 03/18/2025
*/

//  include <iostream> is used for inputs and outputs and <conio.h> is used for a press any key function _getch() 
#include <iostream>
#include <conio.h>

//  namespaces are used to group items much like a class or function
//  std is a namespace from <iostream> library
using namespace std;

int main() {
    float netBalance, payment, d1, d2, interestRate;

    // Input values
    cout << "\n\n  Welcome to the credit card interest helper.";
    cout << "\n  Enter the net balance: $";
    cin >> netBalance;
    cout << "\n  Enter the payment made: $";
    cin >> payment;
    cout << "\n  Enter the number of days in the billing cycle: ";
    cin >> d1;
    cout << "\n  Enter the number of days payment is made before the billing cycle: ";
    cin >> d2;
    cout << "\n  Enter the interest rate per month (as a decimal): ";
    cin >> interestRate;

    // Calculate average daily balance
    float averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    // Calculate interest
    float interest = averageDailyBalance * interestRate;

    // Output interest
    cout << "\n  The interest on the unpaid balance is: $" << fixed;
    cout.precision(2);
    cout << interest << endl;

    // Press any key to end program
    _getch();
    return 0;
}
