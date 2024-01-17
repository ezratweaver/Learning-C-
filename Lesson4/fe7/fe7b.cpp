#include <iostream>
#include <cstdint>

int implicit_type_conversion(int x)
{
    return x;
}


int main()
{
    std::cout << "Enter a single charcter: ";
    char userInput{ };
    std::cin >> userInput;

    std::cout << "You entered '" << userInput << "', which has an ASCII code " << implicit_type_conversion(userInput) << ".\n";
    return 0;
}

