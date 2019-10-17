#include "Rational.h"

/**
 * This overrides the operator for * and defines the function to allow
 * Rational objects to multiply with each other
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */
Rational operator *(Rational lhs, Rational rhs)
{
  return Rational((lhs.get_numerator() * rhs.get_numerator()), (lhs.get_denominator() * rhs.get_denominator()));
}

/**
 * This overrides the operator for + and defines the function to allow
 * Rational objects to add each other
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */
Rational operator +(Rational lhs, Rational rhs)
{
    int numerator, denominator;
    numerator = ((lhs.get_numerator() * rhs.get_denominator()) + ((rhs.get_numerator() * lhs.get_denominator())));
    denominator = (lhs.get_denominator() * rhs.get_denominator());
    return Rational(numerator, denominator);
}

/**
 * The reduce function simplifies fractions to the lowest terms
 * (ie. 5/20 == 1/4)
 */
void Rational::reduce()
{
    int less;
    if(numerator > denominator)
    {
        less = denominator;
    }
    else
    {
        less = numerator;
    }
    for (int x = less; x > 1; x--)
    {
        if ((denominator % x == 0) && (numerator % x == 0))
        {
            denominator /= x;
            numerator /= x;
        }
    }
}

/**
 * This overrides the operator for == and defines the function to allow
 * Rational objects compare their values and see if they are equal
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */
bool operator ==(Rational lhs, Rational rhs)
{
    return ((rhs.get_numerator() == lhs.get_numerator()) && (lhs.get_denominator() == rhs.get_denominator()));
}

/**
 * This overrides the operator for == and defines the function to allow
 * Rational objects compare their values and see lhs is less than rhs
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */
bool operator <(Rational lhs, Rational rhs)
{
    lhs.reduce();
    rhs.reduce();
    return((lhs.get_numerator() < rhs.get_numerator()) && (lhs.get_denominator() > rhs.get_denominator()));
}

/**
 * This overrides the operator for == and defines the function to allow
 * Rational objects compare their values and see lhs is greater than rhs
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */
bool operator >(Rational lhs, Rational rhs)
{
    lhs.reduce();
    rhs.reduce();
    return((lhs.get_numerator() > lhs.get_numerator()) && (lhs.get_denominator() < rhs.get_denominator()));
}

/**
 * This overrides the operator for == and defines the function to allow
 * Rational objects to add something to their values and store it
 * @param rhs = Rational object
 */
void Rational::operator +=(Rational rhs)
{
    numerator = ((get_numerator() * rhs.get_denominator()) + ((rhs.get_numerator() * get_denominator())));
    denominator = (get_denominator() * rhs.get_denominator());

    Rational a(numerator, denominator);
    a.reduce();
    numerator = a.get_numerator();
    denominator = a.get_denominator();
}

/**
 * Outputs information in a sensible format
 * @param out = ostream to output information
 * @param a = Rational object
 */
std::ostream& operator <<(std::ostream& out, Rational a)
{
  out << "The numerator is: " << a.get_numerator();
  out << "The denominator is: " << a.get_denominator();
  return out;
}

