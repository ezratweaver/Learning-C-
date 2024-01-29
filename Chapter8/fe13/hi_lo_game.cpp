#include <iostream>
#include "random.h"

int getGameNumber()
{
    return Random::get(1, 100);
}

const char* higherOrLowerStr(int userGuess, int gameNumber)
{
    if (userGuess > gameNumber) 
        return "Your guess is too high.\n";
    if (userGuess < gameNumber)
        return "Your guess is too low.\n";
    else
        return "Your guess was correct, you win!\n";
}

int higherOrLowerLogic(int userGuess, int gameNumber)
{
    if (userGuess == gameNumber)
    {
        std::cout << "Correct! You win! The number was " << gameNumber << ".\n";
        return 1;
    }
    if (userGuess < 0)
    {
        std::cout << "Sorry, you lose. The correct number was " << gameNumber << ".\n";
        return -1;
    }
    return 0;
}

int getUserGuess(int guessCount)
{
    if (guessCount > 7)
        return -1;

    std::cout << "Guess #" << guessCount << ": ";

    int userGuess{ };
    std::cin >> userGuess;
    
    return userGuess;
}

void playGame()
{
    int gameNumber{ getGameNumber() };

    int guessCount{ 1 };

    std::cout << "Lets play a game. Im thinking of a number"
                 "between 1 and 100. You have 7 tries to guess what it is\n";
    while (true)
    {
        int userGuess { getUserGuess(guessCount) }; 
        ++guessCount;
        std::cout << higherOrLowerStr(userGuess, gameNumber);

        if (higherOrLowerLogic(userGuess, gameNumber) != 0)
            break;
    }
}

int main()
{
    
    while (true)
    {
        playGame();

        std::cout << "Would you like to play again (y/n)? ";
        
        char userPrompt{ };
        std::cin >> userPrompt;

        if (userPrompt == 'y')
        {
            continue;
        }
        if (userPrompt == 'n')
        {
            std::cout << "Thank you for playing.\n"; 
            break;
        }
    }
}

