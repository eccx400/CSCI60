#include <iostream>
#include <fstream>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: November 15, 2016
 * Email: echeng@scu.edu
 * C++ PA7: Statistics
 *
 * Write a program that computes all of the following statistics for a file and outputs the statistics to
 * both the screen and to another file: the total number of occurrences of characters in the file, the
 * total number of non-whitespace characters in the file, and the total number of occurrences of
 * letters in the file. You can do this from the main function. Your input file is input.txt and your
 * output file name should be output.txt. Make sure you place the input.txt in the same
 * directory where you will be writing your code.
 */

 /**
  * The main method runs the executes the code and returns the output
  */
int main()
{
    /**
     * Declares input and output
     */
    ifstream instream;
    ofstream outstream;

    /**
     * Character declarations for file reading
     */
    char chars;
    char chars2;
    char chars3;

    /**
     * Counters for iteration
     */
    int count = 0;
    int charminwhite = 0;
    int letters = 0;

    /**
     * Opens the input and outpiut files
     */
    instream.open("input.txt");
    outstream.open("output.txt");

    /**
     * Tests for the total number of occurrences of characters in the file
     */
	while (instream >> chars)
    {
        count++;
    }
    cout <<"Total amount of characters: " << count << endl;
    outstream << count << endl;
    instream.close();

    /**
     * Tests for the total number of non-whitespace characters in the file
     */
    instream.open("input.txt");
	while (instream.get(chars2))
    {
        if((chars2 != ' ' || chars2 != '\n'))
        {
            charminwhite++;
        }
    }
    cout <<"Characters w/o whitespace: " << charminwhite << endl;
    outstream << charminwhite << endl;
    instream.close();

    /**
     * Tests for the total number of occurrences of letters in the file
     */
    instream.open("input.txt");
	while (instream.get(chars3) && !((chars3 == '0')|| (chars3 == '1')|| (chars3 == '2')
                || (chars3 == '3')|| (chars3 == '4')|| (chars3 == '5')
                    || (chars3 == '6')|| (chars3 == '7')|| (chars3 == '8')
                        || (chars3 == '9') || (chars3 == ' ') || (chars3 == '\n')))
    {
        letters++;
    }
    cout <<"Letters only: " << letters << endl;
    outstream << letters << endl;
    instream.close();
    outstream.close();
	return 0;
}
