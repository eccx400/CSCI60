#include "rational.h"
#include "Rational.h"
#include "Template.h"

using namespace std;

/**
template <typename T1, typename T2>

int count_exact (T1 a[], T2 size, T1 find)
{
    int count = 0;
    for(int x = 0; x < size; x++)
    {
        if(a[x] == find)
        {
            count++;
        }
    }
    return count;
}

template <typename T1, typename T2>
int count_range(T1 a[], T2 size, T1 low, T1 high)
{
    int count = 0;
    for(int y = 0; y < size; y++)
    {
        if((a[y] >= low) && (a[y] <= high))
        {
            count++;
        }
    }
    return count;
}
*/

/**
 * This is the main function to test the functions and the operators
 */
int main()
{
    int a[3] = {1, 2, 3};
    int b[3] = {10, 20, 30};
    Template<int> x(a, 3);
    Template<int> y(b, 3);
    Template<int> e(b, 3);

    Template<int> c = x + y;
    cout << c.get_index(0)<< " " << c.get_index(1) << " " << c.get_index(2)<<endl;
    cout << (a == b) << " " << (c == c) << endl;

    Template<int> d = x - y;
    cout << d.get_index(0) << " "<<d.get_index(1) << " " << d.get_index(2)<<endl;
    cout << (a == b) << " " << (d == d) << endl;

    Template<int> e += x;
    cout << e.get_index(0) << " "<<e.get_index(1) << " " << e.get_index(2)<<endl;
    cout << (a == b) << " " << (e == e) << endl;

    cout << frequent(a, 3) << endl;

    return 0;
}
