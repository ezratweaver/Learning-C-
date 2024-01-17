#include <iostream>


int main()
{
    std::cout << "Please enter an integer between 1-9: ";
    int userInput{};
    std::cin >> userInput;

    if (userInput > 9 or userInput < 0)
    {
        std::cout << "Invalid integer was given!\n";
        return 0;
    }
    if (userInput % 2 == 0 and userInput != 2)
        std::cout << "Integer is not prime!\n";
    else if (userInput % 3 == 0 and userInput != 3)
        std::cout << "Integer is not prime!\n";
    else
        std::cout << "Integer is prime!\n";

    return 0;
}
