#include <iostream>
#include "Rational.h"

using namespace std;

/**
 * This is the testing function for the Rational Class.
 */
int main()
{
    Rational r1;
    r1.set_numerator(1);
    r1.set_denominator(2);
    cout << "Numerator: " << r1.get_numerator() << " Denominator: " << r1.get_denominator() << endl;
    Rational r2;
    r2.set_numerator(1);
    r2.set_denominator(4);
    cout << "Numerator: " << r2.get_numerator() << " Denominator: " << r2.get_denominator() << endl;
    Rational r3;
    r3 = r1 + r2;
    Rational r4;
    r4 = r1 * r2;
    bool test = (r1 == r2);
    cout << "r1 added to r2 is: " << endl;
    cout << "Numerator = " << r3.get_numerator() << " Denominator: " << r3.get_denominator() << endl;
    cout << "r1 multiplied by r2 is: " << endl;
    cout << "Numerator = " << r4.get_numerator() << " Denominator: " << r4.get_denominator() << endl;
    cout << "Is r1 equal to r2" << test << endl;
    cout << r1 << r2 << endl;
    r1 += r2;
    cout << r2 << endl;
}
