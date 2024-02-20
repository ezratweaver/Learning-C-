#include <cassert>
#include <fstream>
#include <cstddef>
#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <string_view>
#include "random.h"

constexpr int guessesAllowed { 6 };

void clearScreen()
{
    #ifdef _WIN32
        system("cls");
    #elif __linux__
        system("clear");
    #else
    #endif
}

std::string_view getRandomWord(const std::vector<std::string>& wordList)
{
    int length { static_cast<int>(wordList.size()) };
    int wordIndex { Random::get(0, length-1) };
    return wordList[static_cast<std::size_t>(wordIndex)];
}

bool checkForChar(char in, const std::vector<char>& lettersGuessed)
{
    for (char l : lettersGuessed)
    {
        if (l == in)
            return true;
    }
    return false;
}

bool letterInWord(char in, const std::string_view word)
{
    for (char l : word)
    {
        if (l == in)
            return true;
    }
    return false;
}

char getUserInput(const std::vector<char>& lettersGuessed)
{ char input {};
    
    while (true) {
        std::cout << "Enter your next letter: ";

        std::cin >> input;
        
        if (!std::cin)
        {
            std::cin.clear();
            std::cout << "That wasn't a valid input.  Try again.\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (input < 'a' || input > 'z')
        {
            std::cout << "That wasn't a valid input.  Try again.\n";
            continue;            
        }
        else if (checkForChar(input, lettersGuessed))
        {
            std::cout << "You already guessed that.  Try again.\n";
            continue;
        }

        return input;
    }
}

std::string displayWordProgress(const std::string_view word,
                         const std::vector<char> lettersGuessed)
{
    std::string build {};
    std::string guesses(guessesAllowed, '+');
    
    std::vector<char> wrongGuesses {};

    for (char l : word)
    {
        bool charPlaced { false };
        for (char lg : lettersGuessed) 
        {
            if (lg == l)
            {
                build += lg;
                charPlaced = true;
            }
        }
        if (l == ' ')
            build += ' ';
        else if (!charPlaced)
            build += '_';
    }

    for (char l : lettersGuessed)
    {
        if (!letterInWord(l, word))
            wrongGuesses.push_back(l);
    }

    std::size_t rCount { static_cast<std::size_t>(guessesAllowed - 1) };
    for (char rl : wrongGuesses )
    {
        guesses[rCount] = rl;
        --rCount;
    }

    std::cout << "The word: " << build << "   Wrong guesses: "
        << guesses << '\n';
    return build;
}

int playGame(const std::vector<std::string>& wordList)
{
    std::cout << "Welcome to C++man (a variant of Hangman)\n";
    std::cout << "To win: guess the word.  To lose: run out of pluses.\n\n";
    
    std::string_view gameWord { getRandomWord(wordList) };
    std::vector<char> lettersGuessed { };

    int playCounter {};

    std::string currentWord {};

    while (true)
    {
        clearScreen(); 
        currentWord = displayWordProgress(gameWord, lettersGuessed);

        if (playCounter >= guessesAllowed)
        {
            std::cout << "\n\nYou lost!   The word was: " << gameWord << '\n';
            return -1;
        }
        else if (currentWord == gameWord)
        {
            std::cout << "\n\nYou win!   The word was: " << gameWord << '\n';
            return 0;
        }

        char guess { getUserInput(lettersGuessed) };
        lettersGuessed.push_back(guess);

        std::cout << '\n';

        if (!letterInWord(guess, gameWord))
            ++playCounter;
    }

}

std::vector<std::string> getFileWords(std::string_view filename)
{
    std::ifstream file(filename.data());

    if (!file.is_open())
    {
        std::cerr << "Unable to find file " << filename << '\n';
        assert(true);
    }

    std::vector<std::string> words; 

    std::string line;
    while (std::getline(file, line))
    {
        if (!line.empty())
            words.push_back(line);
    }

    file.close();
    return words;
}

int main()
{

    std::vector<std::string> words { getFileWords("words.txt") };

    playGame(words);

    return 0;
}
