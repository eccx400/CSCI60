#include "Rational.h"

/**
 * Constructor
 */
Rational::Rational()
{
    numerator = 0;
    denominator = 1;
}

/**
 * Constructor
 * @param n = numerator
 * @param d = denominator
 */
Rational::Rational (int n, int d)
{
    numerator = n;
    denominator = d;
}

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
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */c
void reduce(int numerator, int denominator)
{
    for (int i = denominator * numerator; i > 1; i--)
    {
        if ((denominator % i == 0) && (numerator % i == 0))
        {
            denominator /= i;
            numerator /= i;
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
    return ((rhs.get_numerator() == lhs.get_numerator()) && (lhs.get_denominator() == rhs.get_denominator()))
}

/**
 * This overrides the operator for == and defines the function to allow
 * Rational objects compare their values and see lhs is less than rhs
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */
bool operator <(Rational lhs, Rational rhs)
{
    reduce(lhs.numerator,lhs.denominator);
    reduce(rhs.numerator,rhs.denominator);
    return((lhs.numerator < rhs.numerator) && (lhs.denominator > rhs.denominator))
}

/**
 * This overrides the operator for == and defines the function to allow
 * Rational objects compare their values and see lhs is greater than rhs
 * @param lhs = First Rational object
 * @param rhs = Second Rational object
 */
bool operator >(Rational lhs, Rational rhs)
{
    reduce(lhs.numerator,lhs.denominator);
    reduce(rhs.numerator,rhs.denominator);
    return((lhs.numerator > rhs.numerator) && (lhs.denominator < rhs.denominator))
}

/**
 * This overrides the operator for == and defines the function to allow
 * Rational objects to add something to their values and store it
 * @param rhs = Rational object
 */
void operator +=(Rational rhs)
{
    get_numerator() = ((get_numerator() * rhs.get_denominator()) + ((rhs.get_numerator() * get_denominator())));
    get_denominator() = (get_denominator() * rhs.get_denominator());
}

/**
 * Outputs information in a sensible format
 * @param out = ostream to output information
 * @param a = Rational object
 */
ostream& operator <<(ostream& out, Rational a)
{
  out << "The numerator is: " << a.get_numerator() << endl;
  out << "The denominator is: " << a.get_denominator() << endl;
  return out;
}

