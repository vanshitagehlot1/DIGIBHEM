#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "\n\n\t\t...WELCOME TO NUMBER GUESSING GAME...\t\t\n\n";
    cout << "You have to guess a number between the range 1-100\n\n";

    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int number, attempts = 10;
    cout << "you have 10 attempts to find the number\n";
    for (int i = 0; i <= 10; i++)
    {
        cout << "enter the guess number\t";
        cin >> number;
        if (number == secretNumber)
        {
            cout << "Congrats!! YOU WON THE GAME\n "
                 << number
                 << " is the guessed number\n"
                 << endl;
            cout << "\t\t\t Thanks for playing...."
                 << endl;

            break;
        }
        else
        {
            cout << "No, " << number
                 << " is not the correct number\n";
            if (number > secretNumber)
            {
                cout << "Too high !Try again\n"
                     << endl;
            }
            else
            {
                cout << "Too low! Try again.\n"
                     << endl;
            }
            attempts--;
            cout << attempts << " choices left.\n "
                 << endl;
            if (attempts == 0)
            {
                cout << "You couldn't find the "
                        "secret number, it was "
                     << secretNumber
                     << ", You lose!!\n\n";
                cout << "Play the game again to "
                        "win!!!\n\n";
            }
        }
    }
}