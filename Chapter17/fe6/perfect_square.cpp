#include <ios>
#include <iostream>
#include <limits>

constexpr int perfectSquares[9] { 0, 1, 4, 9, 16, 25, 36, 49, 64 };

int main()
{
    int input {};
    while (true)    
    {
        std::cout << "Enter a single digit interger, or -1 to quit: ";

        std::cin >> input;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (input == -1)
            break;
        
        bool found { false };
        for (int num : perfectSquares)
        {
            if (input == num)
            {
                found = true; 
                break;
            }
        }
        
        if (found)
            std::cout << input << " is a perfect square.\n";
        else
            std::cout << input << " is not a perfect square.\n";

    }

    std::cout << "Bye\n";
    return 0;
}
