#include <stdio.h>
#include <stdint.h>
#include <math.h>

/**
 To be implemented by student
 Input Parameter: 0.0 < X < 1.0
 Output Parameter: bin[0] = Least significant bit
 bin[7] = Most significant bit
 Return value: None
 */
void Dec2Bin(float x, int bin[8])
        {
            int i = 0;
            for(i = 7; i >= 0; i--)
            {
            x = 2 * x;
            if( x < 1 )
            {
                bin[i] = 0;
            }
            else
            {
                bin[i] = 1;
                x = x - 1;
            }
        }

/**
 To be implemented by student
 Input Parameter: bin[0] = Least significant bit
 bin[7] = Most significant bit
 Return value: 0.0 < float < 1.0
 */
float Bin2Dec(int bin[8])
        {
            float answer = 0.0;
            float exponent = 0.5;

            int i = 0;
            for(i = 7; i >= 0; i--)
                {
                    if(bin[i] == 1)
                {
                    answer += exponent;
                }
                exponent /= 2;
                }
        return answer;
        }

void PrintBinary(int bin[8]) ;

#define ENTRIES(a) (sizeof(a)/sizeof(a[0]))

typedef struct
        {
        float	x ;
        int		rounded ;
        int     truncated ;
        } TESTCASE ;

int Correct(int [8], TESTCASE *) ;

int main(void)
        {	// To be implemented by student	// To be implemented by student
        // Input Parameter: 0.0 < X < 1.0
        // Output Parameter: bin[0] = Least significant bit
        //                   bin[7] = Most significant bit
        // Return value: None
        // Input Parameter: bin[0] = Least significant bit
        //                  bin[7] = Most significant bit
        // Return value: 0.0 < float < 1.0
        TESTCASE testcase[] =
                {
                {0.005,	  1,    1},
                {0.010,	  3,    2},
                {0.050,  13,   12},
                {0.100,  26,   25},
                {0.300,  77,   76},
                {0.700, 179,  179},
                {0.900, 230,  230}
                } ;
        int k ;

        for (k= 0; k < ENTRIES(testcase); k++)
                {
                float x1, x2, abserr, percent ;
                int bin[8] ;

                x1 = testcase[k].x ;
                printf("Testcase #%d:  x = %f\n", k + 1, x1) ;

                Dec2Bin(x1, bin) ;
                PrintBinary(bin) ;
                switch (Correct(bin, &testcase[k]))
                        {
            case 0: // correct (rounded)
                x2 = Bin2Dec(bin) ;
                printf("Back to Decimal = %f\n", x2) ;
                abserr = fabs(x1 - x2) ;
                percent = 100 * abserr / x1 ;
                printf("Difference = %f (%.2f%c)\n", abserr, percent, '%') ;
                break ;
            case 1: // incorrect (truncated)
                printf("--- ERROR: NOT ROUNDED! ---\n") ;
                break ;
            case 2: // incorrect (wrong)
                printf("--- ERROR: BAD CONVERSION! ---\n") ;
                break ;
                        }

                printf("\nPress blue push button to continue\n") ;
                }	// To be implemented by student
        // Input Parameter: 0.0 < X < 1.0
        // Output Parameter: bin[0] = Least significant bit
        //                   bin[7] = Most significant bit
        // Return value: None

        printf("--- FINISHED ---\n") ;
        while (1) ;
        return 0 ;
        }

void PrintBinary(int bin[8])
        {
        // bin[0] = Least significant bit
        // bin[7] = Most significant bit
        int k ;

        printf("Converted 2 Bin = 0.") ;
        for (k = 7; k >= 0; k--) printf("%d", bin[k]) ;
        printf("\n") ;
        }

int Correct(int bin[8], TESTCASE *t)
        {
        // bin[0] = Least significant bit
        // bin[7] = Most significant bit
        int k, dec ;

    dec = 0 ;
        for (k = 7; k >= 0; k--)
                {
        dec = 2 * dec + bin[k] ;
                }
    if (dec == t->rounded) return 0 ;
    if (dec == t->truncated) return 1 ;
    return 2 ;
        }
        }
