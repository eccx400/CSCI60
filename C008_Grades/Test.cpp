#include <iostream>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: October 16, 2016
 * Email: echeng@scu.edu
 * C++ PA3: Grade Test
 *
 * This algorithm has two functions: one calculates the average of
 * five tests, and the second one returns the corresponding grade
 */

/**
 * This part of the code is the function that calculates the average
 * of five test scores
 * @param a = The first test grade
 * @param b = The second test grade
 * @param c = The third test grade
 * @param d = The fourth test grade
 * @param e = The fifth test grade
 */
double calcAverage(double a, double b, double c, double d, double e)
{
    double average;
    average = (a + b + c + d + e) / 5; // Finds the average of function
    return average;
}

/**
 * This part of the code tests the parameter score and then
 * returns a corresponding grade.
 *
 * @param score = score of the test
 */
char determineScore(int score)
{
    if((score >= 90) && (score <= 100)) // Gives 'A' for score 90-100
    {
        return 'A';
    }
    else if((score >= 80) && (score < 90)) // Gives 'B' for score 90-89
    {
        return 'B';
    }
    else if((score >= 70) && (score < 80)) // Gives 'C' for score 70-79
    {
        return 'C';
    }
    else if((score >= 60) && (score < 70)) // Gives 'D' for score 60-69
    {
        return 'D';
    }
    else
    {
        return 'F'; // Gives 'F' for score 60 and below
    }
}

/**
 * This section of the code is the main method. The user
 * will initialize the different double values (ie. num1,
 * num2, num3, num4, num5)to input into the parameter of
 * the functions, and then store it into another variable
 * (ie. avg, letter) to print out.
 */
int main()
{
    double num1, num2, num3, num4, num5;
    double avg;
    char letter;

    cout << "Enter five test scores: "<< endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    avg = calcAverage(num1, num2, num3, num4, num5); // Uses the function to calculate average score
    cout << "Average score is: "<< avg << endl;

    letter = determineScore(avg); // Uses the function to return the corresponding character grade
    cout << "Your letter grade is: "<< letter << endl;
}
