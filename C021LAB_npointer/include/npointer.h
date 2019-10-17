#ifndef NPOINTER_H
#define NPOINTER_H

template <typename T>
class npointer
{
private:
    T a[10];
    int dimension;

public:
    npointer();
    T get_size();
    int get_size();
};
#endif // NPOINTER_H
