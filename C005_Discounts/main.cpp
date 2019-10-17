#include <iostream>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: October 3, 2016
 * C++ PA1: Discounts
 *
 * This code prints the discount for a given input quantity purchased
 */
int main()
{
    double amountPurchased, discount;
    cout << "Please enter how much you want to purchase: " << endl;
    cin >> amountPurchased;

    double price = 99;
    if ((amountPurchased >= 10)&& (amountPurchased <= 19))
        {
            discount = 0.8;
            price = price * discount;
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
    else if ((amountPurchased >= 20) && (amountPurchased <= 49))
        {
            discount = 0.7;
            price = price * discount;
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
    else if ((amountPurchased >= 50) && (amountPurchased <= 99))
        {
            discount = 0.6;
            price = price * discount;
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
    else if ((amountPurchased >= 100))
        {
            discount = 0.5;
            price = price * discount;
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
}
