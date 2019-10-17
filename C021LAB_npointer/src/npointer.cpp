#include "npointer.h"

npointer::npointer()
{
    T a[10] = {};
    int dimension = 0;
}

npointer::npointer(T arr[], int d)
{
    dimension = d;
    a = arr;
}

npointer::npointer()
{
    //ctor
}

int get_size()
{
    return dimension;
}

