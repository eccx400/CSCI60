#include <iostream>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: October 31, 2016
 * Email: echeng@scu.edu
 * C++ PA5: Display Greater than
 *
 * In a C++ program, write a function that accepts three arguments: an array, the size of the array,
 * and a number n. Assume that the array contains integers. The function should display all of the
 * numbers in the array that are greater than number n.
 *
 * // Function prototype
 * void displayGreaterThan(int[], int, int);
 *
 * From the main function, you should call the above function with the required arguments as
 * asked. In the above function, you should output the values in the following format:
 * cout << values[i] << endl;
 */

/**
 * This is the function declaration
 * @param arr = The user input array
 * @param size = The size of the array
 * @param n = The test variable
 */
void displayGreaterThan(int arr[], int size, int n);

/**
 * The main method takes inputs for the parameters by the user, and runs the
 * function using the given variables
 */
int main()
{
    int size, n;
    cout << "Please enter the size of the array: " << endl;
    cin >> size;

    int ar[size];
    cout << "Please enter the values in the array: " << endl;
    for(int x = 0; x < size; x++)
    {
        cin >> ar[x];
    }

    cout << "Please enter the number to test: " << endl;
    cin >> n;

    cout << "The numbers greater than " << n << "are" << endl;
    displayGreaterThan(ar, size, n);
}

/**
 * The displayGreaterThan function checks to see which elements of the array are
 * greater than the n value
 * @param arr = The user input array
 * @param size = The size of the array
 * @param n = The test variable
 */
void displayGreaterThan(int arr[], int size, int n)
{
    for(int i = 0; i < size; i++)
    {
        if( arr[i] > n )
        {
           cout << arr[i] << endl;
        }
    }
}
