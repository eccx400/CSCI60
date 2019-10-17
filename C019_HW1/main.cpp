#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

/**
 * Function declaration
 * @param string names = array of names
 * @param int size = size of array
 * @param char letter = The first letter of word
 * @param ostream out = For output purposes
 */
void writeletter(string names[], int size, char letter, ostream& out);

/**
 * This main method reads in the text file and runs the writeletter() function
 */
int main()
{
    ifstream instream;
    ofstream outstream;

    char letter;
    int size = 6;
    string names[100];

    instream.open("word.txt");
    outstream.open("output.txt");
    if(instream.is_open())
    {
        while (!instream.eof())
        {
            for(int x = 0; x < size; x++)
            {
                instream >> names[x];
            }
            writeletter(names, size, letter, outstream);
        }
    }
    cout << "file did not open" << endl;

    instream.close();
    outstream.close();
    return 0;
}

/**
 * Changes the order of the names in the array based upon alphabetical order
 * @param string names = array of names
 * @param int size = size of array
 * @param char letter = The first letter of word
 * @param ostream out = For output purposes
 */
void writeletter(string names[], int size, char letter, ostream& out)
{
    string temp;
    for (int i = 0; i < size; i++)
    {
        for (int x = 0; x < size; x++)
        {
            if (names[i].at(0) < names[x].at(0))
            {
                temp = names[i];
                names[i] = names[x];
                names[x] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        out << names[i] << endl;
    }
}

// ------------------------------- Break -----------------------------------//

/**
 * The animal structure to indicate the specifications of the animals in the array
 */
struct Animal
{
    string name;
    int age;
    string gender;
    double price;
    string type;
};

/**
 * Function declaration
 * @param string type = Animal type: Cat or Dog
 * @param Animal a = Array of Animals
 * @param int size = Size of Array
 */
Animal cheapest(string type, Animal a[], int size);

/**
 * Function declaration
 * @param Animal a = First Animal
 * @param Animal b = Second Animal
 */
bool livetogether(Animal a, Animal b);

/**
 * This main method finds the cheapest animal you choose in the array
 * and also checks if two animals can live together
 */
int main()
{
    Animal s[6];
    string yourAnimal;
    for(int x = 0; x < 6; x++)
    {
        cout << "Name of animal: " << endl;
        cin >> s[x].name;

        cout << "Animal Type: " << endl;
        cin >> s[x].type;

        cout << "Animal Gender: " << endl;
        cin >> s[x].gender;

        cout << "Animal Age: " << endl;
        cin >> s[x].age;

        cout <<  "Animal Price: " << endl;
        cin >> s[x].price;
    }
    cin >> yourAnimal;
    cheapest(yourAnimal, s, 6);

    Animal a;
    Animal b;
    for(int i = 0; i < 6; i++)
    {
        if (a.name == s[i].name)
        {
            a = s[i];
        }
        if(b.name == s[i].name)
        {
            b = s[i];
        }
    }
    cout << "Can they live together? " << livetogether(a,b) << endl;
}

/**
 * This method runs through the array to find the cheapest animal according
 * to the parameters
 * @param string type = type of animal
 * @param Animal a = Array of animals
 * @param int size = size of array
 */
Animal cheapest(string type, Animal a[], int size)
{
    Animal animal;
    int x;
    for(x = 0; x < size; x++)
    {
        if (a[x].type == type)
        {
            animal = a[x];
        }
    }
    for (x++; x < size; x++)
    {
        if(a[x].price < animal.price)
        {
            animal = a[x];
        }
    }
}

/**
 * This function checks if two animals can live together
 * @param Animal a = First Animal
 * @param Animal b = Second Animal
 */
bool livetogether(Animal a, Animal b)
{
      return (a.type == b.type);
}

// ------------------------------- Break -----------------------------------//

/**
 * This is the movie class, which holds functions and variables for any movie
 * objects
 */
class Movie
{
private:
    string name;
    string rating;
    double money;
    Movie();

public:
    string get_name()
    {
        return name;
    }
    string get_rating()
    {
        return rating;
    }
    double get_money()
    {
        return money;
    }
    double movieShowing(int money);
    Movie mergeMovie(Movie m);
};

/**
 * Constructor method
 */
Movie::Movie()
{
    name = "Some Horror Film";
    rating = "R";
    money = 15;
}

/**
 * Constructor method
 * @param string title = title of film
 * @param string rate = rating of film
 * @param double d = money made from film
 */
Movie::Movie(string title, string rate, double d)
{
    name = title;
    rating = rate;
    money = d;
}

/**
 * The movie showing functions takes in the number of
 * people who saw the movie in that showing, and updates the
 * amount if show is 12.00 dollars a person
 * @param n = number of people
 */
double Movie::movieShowing(int n);
{
    assert(n >= 0);
    return (money + (12.00 * n));
}

/**
 * The mergeMovie method combines duplicate objects and then
 * merges them to return a combined movie
 * @param m = Movie object
 */
Movie Movie::mergeMovie(Movie m)
{
     Movie theMovie;
     if(theMovie.name == m.name)
     {
        theMovie = m;
        if(m.rating == "R")
        {
            theMovie.rating = "R";
        }
        else if(m.rating == "PG-13")
        {
            theMovie.rating = "PG-13";
        }
        else if(m.rating == "PG")
        {
            theMovie.rating = "PG";
        }
        else
        {
            theMovie.rating = "G";
        }
         theMovie.money += m.money;
     }
     cout << "Could not Combine" << endl;
     return theMovie;
}

/**
 * The getter method
 * @param Movie m = Movie
 */
void Movie::get(Movie m)
{
    assert(m != null);
    cout << "Name: " << m.name;
    cout << "Rating: " << m.rating;
    cout << "Earnings: " << m.money;
}

/**
 * The setter method
 * @param Movie m = Movie
 */
void Movie::set(Movie m)
{
    assert(m != null);
    return m.name;
    return m.rating;
    return m.money;
}

int main()
{
    Movie g;
    cout << "Name of Movie: " << endl;
    cin >> g.name;
    cout << "Rating of Movie(G, PG, PG-13, R): " << endl;
    cin >> g.rating;
    cout << "Earnings: " << endl;
    cin >> g.money;
    //Ex: "The Godfather", "R", 4000

    Movie o;
    cout << "Name of Movie: " << endl;
    cin >> o.name;
    cout << "Rating of Movie(G, PG, PG-13, R): " << endl;
    cin >> o.rating;
    cout << "Earnings: " << endl;
    cin >> o.money;
    //"Toy Story", "G", 6000

    Movie m;
    cout << "Name of Movie: " << endl;
    cin >> m.name;
    cout << "Rating of Movie(G, PG, PG-13, R): " << endl;
    cin >> m.rating;
    cout << "Earnings: " << endl;
    cin >> m.money;
    //"NightCrawler", "R", 2000

    Movie h;
    cout << "Name of Movie: " << endl;
    cin >> h.name;
    cout << "Rating of Movie(G, PG, PG-13, R): " << endl;
    cin >> h.rating;
    cout << "Earnings: " << endl;
    cin >> h.money;
    //Ex: "The Godfather", "R", 4000

    o.mergeMovie(Movie h);
}
