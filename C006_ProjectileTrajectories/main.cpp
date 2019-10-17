#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double y0, theta, v;
    double g = 9.81;
    double y;
    cout << "y0: " << endl;
    cin >> y0;
    cout << "theta: " << endl;
    cin >> theta;
    cout << "v: " << endl;
    cin >> v;

    for (int x = 0; y > 0; x++)
    {
        y = y0 + (x*tan(theta)) - (g*pow(x,2))/(2*(pow((v*cos(theta)),2)));
        if (y <= 0)
        {
            break;
        }
        else
        {
            cout << "(" << x << "," << y << ")" << endl;
        }
    }
}
