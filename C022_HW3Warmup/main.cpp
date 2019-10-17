#include <iostream>

using namespace std;

/**
 * Returns the larger of the two values
 * @param a = Template object
 * @param b = Template object
 */
template <typename T>
T abs(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

/**
 * Gets the sum of all elements of the array
 * @param a = Array of objects
 * @param size = size of array
 */
template <typename T1, typename T2>
T1 addUp(T1 a[], T2 size)
{
    int sum = 0;
    for(int x = 0; x < size; x++)
    {
        sum += a[x];
    }
    return sum;
}

/**
 * Main function to test all the objects
 */
int main()
{
    cout << abs(1,2) << endl;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << addUp(arr, 10) << endl;
}
