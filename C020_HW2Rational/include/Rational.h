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
    Rational();
    Rational(int numerator, int denominator);

    int get_numerator();
    int get_denominator();

    void set_numerator(int numerator);
    void set_denominator(int denominator);
};

Rational operator * (Rational lhs, Rational rhs);
Rational operator + (Rational lhs, Rational rhs);
Rational operator - (Rational lhs, Rational rhs);

bool operator == (Rational lhs, Rational rhs);
bool operator <(Rational lhs, Rational rhs);
bool operator >(Rational lhs, Rational rhs);

ostream& operator << (ostream& out, Rational a);
void operator += (Rational rhs);
void reduce();


#endif // RATIONAL_H
