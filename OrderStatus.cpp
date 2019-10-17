
#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: October 24, 2016
 * Email: echeng@scu.edu
 * C++ PA4: Copper Wires
 *
 * The Middletown Wholesale Copper Wire Company sells spools of copper wiring for $100 each.
 * Write a program that displays the status of an order. The program should have a function that
 * asks for the following data:
 * - The number of spools ordered.
 * - The number of spools in stock.
 * - Whether there are special shipping and handling charges.
 * (Shipping and handling is normally $10 per spool.) If there are special charges, the program
 * should ask for the special charges per spool.
 * The gathered data should be passed as arguments to another function that displays
 * - The number of spools ready to ship from current stock.
 * - The number of spools on backorder (if the number ordered is greater than what is in the
 * stock).
 * - Subtotal of the portion ready to ship (the number of spools ready to ship times $100).
 * - Total shipping and handling charges on the portions ready to ship.
 * - Total of the order ready to ship.
 * The shipping and handling parameter in the second function should have the default argument
 * 10.00
 */

 /**
  * These are the function declarations thats are listed below
  */
void getStockInfo(int& ordered, int& stock, double& extraCharges);
void displayStatus(int ordered, int stock, double extraCharges = 10.00);

/**
 * This is the main function, which holds the tests of the getStockInfo and displayStatus functions
 */
int main()
{
    int ordered, stock;
    double extraCharges;
    getStockInfo(ordered, stock, extraCharges);
    displayStatus( ordered, stock, extraCharges);
    return 0;
}

/**
 * This function gets the users inputs for the ordered amount, the stock,
 * and the possible charges that need to be paid if any
 *
 * @param ordered = the amount of wiring ordered
 * @param stock = the stock of wiring left
 * @param extraCharges = The extra charge for shipping if there are any
 */
void getStockInfo(int& ordered, int& stock, double& extraCharges)
{
    cout << "Please enter the amount of spools ordered: " << endl;
    cin >> ordered;
    while (ordered < 1)
    {
        cout << "Order not available, Please try again." << endl;
        cout << "Please enter the amount of spools ordered: " << endl;
        cin >> ordered;
    }
    cout << "Please enter the amount of spools in stocks: " << endl;
    cin >> stock;
    while (stock < 0)
    {
        cout << "Order not available, Please try again." << endl;
        cout << "Please enter the amount of spools in stocks: " << endl;
        cin >> stock;
    }
    cout << "Please enter special shipping and handling charges (if any)" << endl;
    cin >> extraCharges;
    while (extraCharges < 0)
    {
        cout << "Order not available, Please try again." << endl;
        cout << "Please enter special shipping and handling charges (if any)" << endl;
        cin >> extraCharges;
    }
}

/**
 * This function displays the status of the copper wiring using the given params
 *
 * @param ordered = the amount of wiring ordered
 * @param stock = the stock of wiring left
 * @param extraCharges = The extra charge for shipping if there are any
 */
void displayStatus(int ordered, int stock, double extraCharges)
{
    int backOrder;
    double plusCharges = 10.0, subtotal, totCharges, totOrdered; //The default is 10 dollars
    if( ordered > stock)
    {
        backOrder = ordered - stock;
    }
    else
    {
        backOrder = ordered;
    }
    subtotal = backOrder * 100;
    totCharges = extraCharges + plusCharges;
    totOrdered = subtotal + totCharges;

    // Display the order summary.
    cout << "\nOrder Summary\n";
    cout << "==================\n" << endl;
    cout << "\nItems ordered: " << ordered << endl;
    cout << "\nReady to ship: " << backOrder << endl;
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "\nSubtotal: $" << setw(8) << subtotal << endl;
    cout << "\nShipping: $" << setw(8) << totCharges << endl;
    cout << "\nTotal Due: $" << setw(8) << totOrdered << endl;
}

