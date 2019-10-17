#include <iostream>

using namespace std;

void cbr(double& getAvg, double& getMax);

int main()
{
    double getMax;
    double getAvg;
    cbr(getAvg, getMax);
    cout << "Average is:  "<< getAvg << " Max is: " << getMax << endl;
}

void cbr(double& getAvg, double& getMax)
{
    double count = 0;
    double val;
    double total = 0;
    cout << "Please enter a value, or -1 when you're done." << endl;
    cin >> val;
    while(val != -1)
    {
        total += val;
        count++;

        if(val > getMax)
        {
            getMax = val;
        }
        cout << "Please enter a value, or -1 when you're done." << endl;
        cin >> val;
    }
    getAvg = (total/count);
}
