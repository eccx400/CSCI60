#include <iostream>

using namespace std;

/**
 * Name: Eric Cheng
 * Date: October 3, 2016
 * Class: CSCI 10 @ 9:15AM
 * C++ PA1: Discounts
 *
 * Email: echeng@scu.edu; ericcheng1998@gmail.com
 *
 * This code prints the discount for a given input quantity purchased and the total price
 */
int main()
{
    /**
     * @amountPurchased = Quantity customer buys
     * @discount = Discount given to customer
     * @price = price of the software company package
     */
    double amountPurchased, discount, price;
    cout << "Please enter how much you want to purchase: " << endl;
    cin >> amountPurchased;

    price = 99; //Set given price
    if ((amountPurchased >= 10)&& (amountPurchased <= 19))
        {
            discount = 0.2;
            price = price * (1 - discount);
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
    else if ((amountPurchased >= 20) && (amountPurchased <= 49))
        {
            discount = 0.3;
            price = price * (1 - discount);
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
    else if ((amountPurchased >= 50) && (amountPurchased <= 99))
        {
            discount = 0.4;
            price = price * (1 - discount);
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
    else if ((amountPurchased >= 100))
        {
            discount = 0.5;
            price = price * (1 - discount);
            cout << "Discount " << discount << " " << "Total Purchased " << price << endl;
        }
}
