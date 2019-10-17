#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: November 7, 2016
 * Email: echeng@scu.edu
 * C++ PA6: Weather
 *
 * Write a program that uses a structure to store the following weather data for a particular month:
 *
 * Total Rainfall
 * High Temperature
 * Low Temperature
 * Average Temperature
 *
 * The program should have an array of 12 structures to hold weather data for an entire year.
 * When the program runs, it should ask the user to enter data for each month. (The average
 * temperature should be calculated.) Once the data are entered for all the months, the program
 * should calculate and display the average monthly rainfall, the total rainfall for the year, the
 * highest and lowest temperatures for the year (and the month they occurred in), and the average
 * of all the monthly average temperatures.
 * Input validation: Only accept temperatures within the range between -100 and +140 degrees
 * Fahrenheit.
 */

/**
 * This is the function declarations
 */
double getAvg(double []);
double getTot(double []);
double getHigh(double [], int &);
double getLow(double [], int &);

/**
 * This is the constant value for the months in the year
 */
const int month = 12;

/**
 * The main method declares the array and the testing variables
 * and outputs the result
 */
int main()
{
    double rain[month];
    double temp[month];
    double getTemp;
    int counter;

    for(int i = 0; i < month; i++)
    {
		cout << "Please enter rain data in inches: " << endl;
		cin >> rain[i];
		cout << "Please enter temperature in Farenheit: " << endl;
		cin >> getTemp;
		if((getTemp > -100) && (getTemp < 140))
        {
            temp[i] = getTemp;
        }
        else
        {
            cout << "Please choose a temperature between -100F and 140F:" << endl;
            cin >> temp[i];
        }
    }
    cout << endl;

    cout << "The average temperature in Farenheit is: " << endl;
    cout << getAvg(temp) << endl;
    cout << "The total amount of rain is: " << endl;
    cout << getTot(rain) << endl;
    cout << "The average amount of rain is: " << endl;
    cout << getAvg(rain) << endl;
    cout << "The highest temperature in Farenheit is: " << endl;
    cout << getHigh(temp, counter) << endl;
    cout << "The lowest temperature in Farenheit is: " << endl;
    cout << getLow(temp, counter) << endl;
}

/**
 * The getTot function finds the total amount of rain there is in inches
 * @param rain = The user input array for rain height in inches
 */
double getTot(double rain[])
{
    double total = 0;
	for (int count = 0; count < month; count++)
    {
        total += rain[count];
    }
	return total;
}

/**
 * The getAvg function finds the average temperature in Fahrenheit
 * @param temp = The user input array for temperature
 */
double getAvg(double temp[])
{
    double avg = 0.0;
	avg = getTot(temp) / month;
	return avg;
}

/**
 * The getHigh function finds the highest temperature in Fahrenheit
 * @param temp = The user input array for temperature
 * @param counter = The counter
 */
double getHigh(double temp[], int& counter)
{
    double high;
	high = temp[0];
	for (int j = 0; j < month; j++)
	{
		if (temp[j] > high )
		{
			high = temp[j];
			counter = j;
		}
	}
	return high;
}

/**
 * The getLow function finds the lowest temperature in Fahrenheit
 * @param temp = The user input array for temperature
 * @param counter = The counter
 */
double getLow(double temp[], int& counter)
{
    double low;
	low = temp[0];
	for (int x = 0; x < month; x++)
	{
		if (temp[x] < low )
		{
			low = temp[x];
			counter = x;
		}
	}
	return low;
}
