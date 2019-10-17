/**
 * Name: Eric Cheng
 * Class: CSCI 10 9:15am
 * This code returns the genetic allele frequency of a father
 * and mother.
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    String mgene = new String"";
    String fgene = new String"";
    cin >> mgene;
    cin >> fgene;

    if (mgene == "GG")
    {
        if(fgene == "GG")
        {
            cout << "The genetic frequency: 'GG': 100%, 'Gg': 0%, 'gg': 0%";
        }
        else if (fgene == "Gg")
        {
            cout << "The genetic frequency: 'GG': 75%, 'Gg': 25%, 'gg': 0%";
        }
        else if (fgene == "gg")
        {
            cout << "The genetic frequency: 'GG': 50%, 'Gg': 50%, 'gg': 0%";
        }
    else if (mgene == "Gg")
    {
        if(fgene == "GG")
        {
            cout << "The genetic frequency: 'GG': 75%, 'Gg': 25%, 'gg': 0%";
        }
        else if (fgene == "Gg")
        {
            cout << "The genetic frequency: 'GG': 25%, 'Gg': 50%, 'gg': 25%";
        }
        else if (fgene == "gg")
        {
            cout << "The genetic frequency: 'GG': 0%, 'Gg': 50%, 'gg': 50%";
        }
    }
    else if (mgene == "gg")
    {
        if(fgene == "GG")
        {
            cout << "The genetic frequency: 'GG': 0%, 'Gg': 100%, 'gg': 0%";
        }
        else if (fgene == "Gg")
        {
            cout << "The genetic frequency: 'GG': 0%, 'Gg': 50%, 'gg': 50%";
        }
        else if (fgene == "gg")
        {
            cout << "The genetic frequency: 'GG': 0%, 'Gg': 0%, 'gg': 100%";
        }
    }
    return 0;
    }
}
