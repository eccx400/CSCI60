#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int size = 5;
    srand(time(0));
    string spanish[size] = {"gato", "perro", "uno", "dos", "tres"};
    string english[size] = {"cat", "dog", "one", "two", "three"};
    int score[size] = {0,0,0,0,0};

    string input;
    string answer;
    int correct = 0;
    while (correct < 10)
    {
        int index = rand()%5;
        if (score[index] < 2)
        {
            cout << "What is the English of " << spanish[index] << endl;
            cin >> input;
            if (input == english[index])
            {
                correct++;
                score[index] = score[index] + 1;
            }
            else
            {
                cout << "The right answer is: " << english[index] << endl;
            }
        }
    }
    cout << correct << endl;
    return 0;
}
