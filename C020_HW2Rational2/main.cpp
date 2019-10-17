#include <iostream>
#include "bankaccount.h"

using namespace std;

/**
 * Main function to test the code
 */
int main()
{
    BankAccount E = {400, 200.00, 12345, "Bob"};
    ATM a = (6, 10);
    cout << "The amount of twenties is: " << a.get_twenties() <<endl;
    cout << "The amount of tens is: " << a.get_tens() <<endl;
    ATM b = (6, 10);
    bool test = (a == b);
    cout << "ATMs have equal values: " << test << endl;
    a += b;
    cout << a << endl;
    a.get_cash(100);
}
