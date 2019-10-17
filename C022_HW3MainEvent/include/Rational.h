#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

/**
 * This class is the Rational Class, which hold variables that
 * define rational numbers and functions that can change them.
 */
class Rational
{
private:
    int numerator;
    int denominator;
public:
    int get_numerator();
    int get_denominator();

    void set_numerator(int numerator);
    void set_denominator(int denominator);
    void operator +=(Rational rhs);
    void reduce();

    /**
     * Constructor
     */
     Rational()
     {
        numerator = 0;
        denominator = 1;
     }

    /**
     * Constructor
     * @param n = numerator
     * @param d = denominator
     */
     Rational (int n, int d)
     {
        numerator = n;
        denominator = d;
     }
};=

Rational operator * (Rational lhs, Rational rhs);
Rational operator + (Rational lhs, Rational rhs);
Rational operator - (Rational lhs, Rational rhs);

bool operator == (Rational lhs, Rational rhs);
bool operator <(Rational lhs, Rational rhs);
bool operator >(Rational lhs, Rational rhs);

std::ostream& operator << (std::ostream& out, Rational a);

#endif // RATIONAL_H
