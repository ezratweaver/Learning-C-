#include <iostream>


int readNumber()
{
        std::cout << "Please enter a number: ";
        int userNumber{};
        std::cin >> userNumber;
        return userNumber;
}


void writeAnswer(int output)
{
        std::cout << "Output: " << output << "\n";
}

