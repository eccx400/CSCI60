#include <iostream>

using namespace std;

class Rational
{
public:
    int numerator;
    int denominator;
    Rational();
    Rational(int numerator, int denominator);

    int get_numerator();
    int get_denominator();

    void set_numerator(int n);
    void set_denominator(int d);
    void operator +=(Rational rhs);
};

Rational operator *(Rational lhs, Rational rhs);
Rational operator +(Rational lhs, Rational rhs);
bool operator ==(Rational lhs, Rational rhs);
ostream& operator <<(ostream& out, Rational a);

Rational::Rational()
{
    numerator = 1;
    denominator = 1;
}

Rational::Rational(int n, int d)
{
    numerator = n;
    denominator = d;
}

int Rational::get_numerator()
{
    return numerator;
}

int Rational::get_denominator()
{
    return denominator;
}

void Rational::set_numerator(int n)
{
    numerator = n;
}

void Rational::set_denominator(int d)
{
    denominator = d;
}

int gcd(int i, int j)
{
	int gcd, remainder;

	while (n != 0)
	{
		remainder = i % j;
		i = j;
		j = remainder;
	}
	gcd = m;
    return gcd;
}


Rational operator *(Rational lhs, Rational rhs)
{
        Rational a;
        a.set_numerator(lhs.numerator * rhs.numerator);
        a.set_denominator(lhs.denominator * rhs.denominator);
        return a;
}

Rational operator +(Rational lhs, Rational rhs)
{
        Rational r;
        r.numerator = (lhs.get_numerator() * rhs.get_denominator()) + (rhs.get_numerator() * lhs.get_denominator());
        r.denominator = rhs.get_denominator() * lhs.get_denominator();
        r.set_numerator(r.get_numerator());
        r.set_denominator(r.get_denominator());
        return r;
}

void operator +=(Rational rhs)
{
    Rational r;
    r = r + rhs;
}

bool operator ==(Rational lhs, Rational rhs)
{
    gcd(lhs.numerator, lhs.denominator);
    gcd(rhs.nenominator, rhs.denominator);
    return ((lhs.get_numerator() == rhs.get_numerator())&& (lhs.get_denominator() == rhs.get_denominator()));
}

ostream& operator <<(ostream& out, Rational a)
{
    out << "The numerator is: " << endl;
    out << a.get_numerator() << endl;
    out << "The denominator is: " << endl;
    out << a.get_denominator() << endl;
}

int main()
{
    Rational r1;
    r1.set_numerator(1);
    r1.set_denominator(2);
    Rational r2;
    r2.set_numerator(1);
    r2.set_denominator(4);
    Rational r3;
    r3 = r1 + r2;
    cout << r3.numerator << " " << r3.denominator << endl;
}
