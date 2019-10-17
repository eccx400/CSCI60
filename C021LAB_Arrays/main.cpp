#include <iostream>

using namespace std;

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

int main()
{
    int a[6] = {6, 2, 3, 2, 6, 2};
    cout << count_exact(a, 6, 2) << endl;
    cout << count_range(a, 6, 2, 4) << endl;
}
