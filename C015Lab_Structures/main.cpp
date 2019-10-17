#include <iostream>

using namespace std;

const int size = 5;

double fillCart(Item a[], int size);

struct Date
{
    int day;
    int month;
    int year;
};

struct Item
{
    string name, author;
    double price;
    string track[size];
    Date release;
};

int main()
{

    Item it;

    initializeItem(it);
    printItem(it);


    return 0;
}

void initializeItem(Item &it)
{
    cout << "Name then author name" << endl;
    getline(cin, it.name);
    getline(cin, it.author);
    cout << "Price" << endl;
    cin >> it.price;

    for (int i =0; i<size;i++)
    {
        string n;
        cout << "Name of track " << i << endl;
        cin >> n;
        it.track[i] = n;
    }
    cout << "Day" << endl;
    cin >> it.release.day;
    cout << "Month" << endl;
    cin >> it.release.month;
    cout << "Year" << endl;
    cin >> it.release.year;
}

void printItem(Item it)
{
    cout << "Name: ";
    cout << it.name << endl;
    cout << "Author name: ";
    cout << it.author << endl;
    cout << "Price: $";
    cout << it.price << endl;
    cout << "Track Listing" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Track # " << i << it.track[i] << endl;
    }
   // cout << it.track[size];
    cout << "Release Date: ";
    cout << it.release.month << "/";
    cout << it.release.day << "/";
    cout << it.release.year << endl;
}

double fillCart(track[], size)
{

}
