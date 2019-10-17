#include "ATM.h"
#include <cassert>
#include <iostream>

using namespace std;

/**
 * Constructor
 */
ATM::ATM()
{
    twenties = 0;
    tens = 0;
}

/**
 * Constructor
 * @param tw = twenty dollar bills
 * @param te = ten dollar bills
 */
ATM::ATM(int tw, te)
{
    twenties = tw;
    tens = te;
}

/**
 * Overwrites the += function for ATM objects
 * @param rhs = Object to be changed
 */
ATM operator +=(Atm& rhs)
{
    ATM a;
    a.twenties() = a.get_twenties + rhs.get_twenties();
    a.tens() = a.get_tens + rhs.get_tens();
    return a;
}

/**
 * Restocks the amount of twenty dollar bills and ten dollar bills
 * in ATM
 * @param new20s = The twenty dollar bills to be added
 * @param new10s = The tens dollar bills to be added
 */
ATM::ATM restock(int new20s, int new10s)
{
    ATM.twenties = ATM.get_twenties() + new20s;
    ATM.tens = ATM.get_tens() + new10s;
    return ATM;
}

/**
 * Returns the amount of 20 dollar bills in ATM
 */
ATM::int get_twenties()
{
    return twenties;
}

/**
 * Returns the amount of 10 dollar bills in ATM
 */
ATM::int get_tens()
{
    return tens;
}

/**
 * Gets the cash from the ATM using one's BankAccount
 * @param amount = Amount to be withdrawn
 * @param b = BankAccount for user
 */
BankAccount get_cash(int amount, BankAccount b)
{
    assert(amount > 0);
    assert(b.get_balance() > amount);
    b.withdraw(amount);

    int total = (20 * twenties) + (10 * tens);
    if (total < amount)
    {
        cout << "Try again. The maximum withdraw is " << b.get_balance() << endl;
        cin >> amount;
    }

    int no20, no10s;
    if (no20 > twenties)
    {
        {
            amount -= no20;
            twenties = 0;
        }
        else
        {
            twenties -= no20;
            tens -= 20 * no20;
        }
        no10 = amount/10;
        if(no10 > tens)
        {
            amount -= no10;
            tens = 0;
        }
        else
        {
            tens -= no10;
            amount -= 10 * no10;
        }
        cout << "The amount of 20 dollar bills is: " << twenties << endl;
        cout << "The amount of 10 dollar bills is: " << tens << endl;
        cout << "The amount of money left is: " << amount << endl;
    }
    b.withdraw(amount);
    return b;
}

/**
 * This operator allows the ATM to check if the two ATM have equal values
 * @param lhs = First ATM object
 * @param rhs = Second ATM object
 */
bool operator == (Atm lhs, Atm rhs)
{
    return ((lhs.twenties) == (rhs.twenties)) && ((lhs.tens) == (rhs.tens));
}

/**
 * Outputs the information in a legible format
 * @param out = Outstream
 * @param ATM = The ATM to be printed
 */
ostream& operator << (ostream& out, Atm a)
{
    out<<"Amount of Twenty dollar bills in ATM: "<< a.get_twenties() << endl;
    out<<"Amount of Ten dollar bills in ATM: "<< a.get_tens() << endl;
    return out;
}
