/* Selena Sat
 * FALL 2022
 * SUZUKI
 * PROG 111
 * HW ASSIGNMENT 003
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables to store monthly expenses
    double electricity;
    double water;
    double cable;
    double food;
    double rentMortgage;
    int space = 15;  // Field width for formatting output

    // Display a welcome message
    cout << "Welcome to Selena's home budget calculator\n";

    // Prompt the user for the cost of each expense and store the inputs
    cout << "How much do you spend for electricity? ";
    cin >> electricity;

    cout << "How much do you spend for water? ";
    cin >> water;

    cout << "How much do you spend for cable? ";
    cin >> cable;

    cout << "How much do you spend for food? ";
    cin >> food;

    cout << "How much do you spend for rent/Mortgage? ";
    cin >> rentMortgage;

    // Clear the screen
    system("cls");

    // Display the user's bills with formatted output
    cout << "Your bills\n";
    cout << right << setw(space) << "Electricity" << setw(space) << "$" << electricity << endl;
    cout << right << setw(space) << "Water" << setw(space) << "$" << water << endl;
    cout << right << setw(space) << "Cable" << setw(space) << "$" << cable << endl;
    cout << right << setw(space) << "Food" << setw(space) << "$" << food << endl;
    cout << right << setw(space) << "Rent/Mortgage" << setw(space) << "$" << rentMortgage << endl;

    // Display the total cost with formatted output
    cout << "---------------------------------------" << endl;
    cout << right << setw(space) << "Total" << setw(space) << "$" << fixed << setprecision(2) << (electricity + water + cable + food + rentMortgage);

    // Return 0 to indicate successful execution
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu