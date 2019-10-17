#ifndef ATM_H
#define ATM_H

/**
 * This is the classes of ATM which holds the variables and the
 * functions of the class
 */
class ATM
{
private:
    int twenties;
    int tens;
public:
    ATM();
    ATM(int twenties, int tens);
    int get_twenties();
    int get_tens();
};

BankAccount get_cash(int amount, BankAccount b);
ATM operator +=(Atm& rhs);
bool operator == (Atm lhs, Atm rhs);
ostream& operator << (ostream& out, Atm a)

#endif // ATM_H
