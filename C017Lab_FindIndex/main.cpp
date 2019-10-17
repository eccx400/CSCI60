#include <iostream>

using namespace std;

int printIndex(string str);

int main()
{
    string str;

    cout << "What is your sentence?" << endl;
    getline(cin, str);
    //int size = 4;

    cout << printIndex(str) << endl;

    return 0;
}

int printIndex(string str)
{
    int result = 0;
    for (int i = 1; i < str.length(); i++)
    {
        if(str[i] == 32)
        {
            i++;
        }
        else if((str[i] >= 97) && (str[i] <= 122))
        {
            if (str[i] == str[1])
            {
                result = i;
            }
            else if (str[i] < str[i-1])
            {
                result = i;
            }
        }
        else
        {
            return -1;
        }
    }
    return result;
}

/**
int printIndex(string str, int size)
{
    int result = str.at(0);
    for (int i = 1; i < size; i++)
    {
        if((str.at(i) >= 97) && (str.at(i) <= 122))
        {
            if (str.at(i) < str.at(i-1))
            {
                result = str.at(i);
            }
        }
        else
        {
            return -1;
        }
    }
    return result;
} */
