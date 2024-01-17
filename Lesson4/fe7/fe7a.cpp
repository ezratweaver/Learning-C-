#include <iostream>
#include <cstdint>

int main()
{
    std::cout << "Enter a single charcter: ";
    char userInput{ };
    std::cin >> userInput;

    std::cout << "You entered '" << userInput << "', which has an ASCII code " << static_cast<int>(userInput) << ".\n";
    return 0;
}
