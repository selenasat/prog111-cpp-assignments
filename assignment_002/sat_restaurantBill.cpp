/*
Selena Sat
Fall 2022
SUZUKI
PROG 111
HW ASSIGNMENT 002
*/
 
#include <iostream>
#include <iomanip> // For setting decimal precision to format the cost output
using namespace std;

int main()
{
    // Declare a string variable to store the customer's name
    string customerName;
    // Prompt the user to enter their name
    cout << "Name: ";
    // Read the customer's name from the input
    cin >> customerName;

    // Declare a double variable to store the price of the item
    double itemPrice;
    // Prompt the user to enter the price of the item
    cout << "Item Price: ";
    // Read the item price from the input
    cin >> itemPrice;

    // Declare a double variable to store the tax percentage
    double tax;
    // Prompt the user to enter the tax percentage
    cout << "Tax %: ";
    // Read the tax percentage from the input
    cin >> tax;

    // Calculate the total cost including tax
    double cost = itemPrice * (1 + (tax / 100));
    
    // Set the output to show two decimal places
    cout << fixed << setprecision(2);
    // Display the customer's name and the total cost
    cout << "Hi " + customerName + ", Here's your bill : $" << cost;

    // Return 0 to indicate successful execution
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu