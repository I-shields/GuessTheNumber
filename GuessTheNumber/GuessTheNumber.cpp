//=================================================================
//Author: Isaac Shields
//Date  : 9-21-2023
//Desc. : program where the user tries to guess the random number
//=================================================================


#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    //MaxNum controls the range of random numbers
    int MaxNum = 20;

    //Tries hold the number of tries it took the user to guess the number
    int Tries = 0;

    //Gets the current time, and uses that as a seed
    srand(time(0));

    //Generates the random number between 0 and MaxNum
    int RN = rand() % MaxNum;

    //sets the game as "not won yet"
    bool GameWon = false;

    //While loop with all the logic
    while (GameWon == false)
    {
        //gets the users number and stores it in UserGuess
        int UserGuess;
        cout << "Enter a number between 0, and " << MaxNum << endl;
        cin >> UserGuess;

        //Checks to see if the users guess was too low. Also adds 1 to the Tries variable
        if (UserGuess < RN)
        {
            cout << "Too low" << endl;
            Tries++;
        }

        //Checks to see if the users guess was too high. Also adds 1 to the Tries variable
        else if (UserGuess > RN)
        {
            cout << "Too high" << endl;
            Tries++;
        }

        //if the ussers guess is the same, set gamewon to true to end the game, and exits the loop. Also adds 1 to the Tries variable
        else
        {
            GameWon = true;
            Tries++;
        }
    }
    //Tells the user they won, and what the random number was
    cout << "You won! The random number was " << RN << " It took you " << Tries<< " tries to guess the number." << endl;
}


