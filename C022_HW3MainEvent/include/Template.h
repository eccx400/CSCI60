#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include <typeinfo>
#include <cassert>
#include <cmath>

template<typename T>
class Template
{
private:
    T a[10];
    int dimensions;

public:
    Template();
    Template(T arr[], int size);
    Template(int d);

    int get_dimensions(){return dimensions;}
    T get_index(int i);
};

/**
 * Constructor for Template class
 * @param T arr = array of elements of Template
 * @param size = size of array
 */
template <typename T>
Template<T>::Template(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = arr[i];
    }
    dimensions = size;
}

/**
 * Constructor for Template class
 */
template <typename T>
Template<T>::Template()
{
    dimensions = 0;
}

/**
 * Constructor for Template class
 * @param d = dimensions
 */
template <typename T>
Template<T>::Template(int d)
{
    dimensions = d;
}

/**
 * Gets the ith value in array
 * @param i = the index
 */
template <typename T>
T Template<T>::get_index(int i)
{
    return a[i];
}

/**
 * This overrides the operator for + and defines the function to allow
 * Template objects to add each other
 * @param a = First Template object
 * @param b = Second Template object
 */
template <typename T>
Template<T> operator +(Template<T> a, Template<T> b)
{
    assert(a.get_dimensions()== b.get_dimensions());

    int d = a.get_dimensions();
    T temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = a.get_index(i) + b.get_index(i);
    }
    Template<T> c(temp, d);
    return c;
}

/**
 * This overrides the operator for + and defines the function to allow
 * Template objects to subtract from each other
 * @param a = First Template object
 * @param b = Second Template object
 */
template <typename T>
Template<T> operator -(Template<T> a, Template<T> b)
{
    assert(a.get_dimensions()== b.get_dimensions());

    int d = a.get_dimensions();
    T temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = a.get_index(i) - b.get_index(i);
    }
    Template<T> c(temp, d);
    return c;
}

/**
 * This overrides the operator for == and tests to see if the
 * Template objects are equal to each other
 * @param a = First Template object
 * @param b = Second Template object
 */
template <typename T>
bool operator ==(Template<T> a, Template<T> b)
{
    assert(a.get_dimensions()==b.get_dimensions());

    for (int i = 0; i < a.get_dimensions(); i++)
    {
        return (a.get_index(i) == b.get_index(i));
    }
    return false;
}

/**
 * This overrides the operator for += and defines the function to allow
 * Template objects to increment by itself
 * @param a = Template object
 */
template <typename T>
void Template<T>::operator +=(Template<T> a)
{
    assert(get_dimensions()== a.get_dimensions());

    for (int i = 0; i < a.get_dimensions(); i++)
    {
        a[i] += a.get_index(i);
    }
}

/**
 * Checks how frequent the items are in the array a of template
 * @param a = Array of Template objects
 * @param size = Size of array
 */
template <class T1, class T2>
T1 frequent(T1 a[], T2 size)
{
    assert(get_dimensions()==a.get_dimensions());
    assert(size <= 50);

    int x = 0;
    int count = 0;
    int rcount = 1;

    T test = a.get_index(0);
    for(x = 0; x < size; x++)
    {
        T temp = a.get_index(x);
        count++;
        for(int y = x + 1; y < size; y++)
        {
            if(a.get_index(y) == temp.get_index(x))
            {
                count++;
                if(count > rcount)
                {
                    test = temp;
                    rcount = count;
                }
            }
        }
    }
    Template<T> c(test, rcount);
    return c;
}

/**
 * Distance operator returns the distance according to the
 * distance formula
 * @param a = First Template object
 * @param b = Second Template object
 */
template<typename T>
double operator distance((Template<T> a, Template<T> b)
{
    assert(a.get_dimensions()== b.get_dimensions());

    double d = pow(a.get_index() - b.get_index(), 2);
    return sqrt(d);
}

#endif // TEMPLATE_H
