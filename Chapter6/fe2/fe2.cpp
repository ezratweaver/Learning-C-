#include <iostream>
#include <iomanip>


constexpr bool isEven(int x)
{
    return  x % 2 == 0;
}


int main()
{
    std::cout << "Please enter a number to check if even: ";
    int userInput{ };
    std::cin >> userInput;

    std::cout << std::boolalpha << isEven(userInput) << "\n";

    return 0;

}
