#include <iostream>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: October 8, 2016
 * C++ PA2: Address
 *
 * The address on Pennsylvania is a four-digit number where:
 * - All four digits are different
 * - The digits in the thousands place is three times the digit in the tens place
 * - The number is odd
 * - The sum of the digits is 27
 * Write a program that uses a loop (or loops) to find the address where the Riddler pans to strike.
 */
int main()
{
    int a,b,c,d;

    for (a = 1; a <= 9; a++) //Thousands digit
    {
        for(b = 0; b < 10; b++) //Hundreds digit
        {
            for(c = 0; c < 10; c++) //Tens digit
            {
                for(d = 0; d < 10;d++) //Units digit
                {
                    int num = a*1000 + b*100 + c*10 + d;

                    //Checks if all digits are different
                    if((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d))
                    {
                        if( (a + b + c + d) == 27) // Check sum is 27
                        {
                            if( num % 2 == 1) // Check odd
                            {
                                if( a == (3 * c)) // Check thousands digit = 3x tens digit
                                {
                                    cout << "The Address is: "<< num << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
