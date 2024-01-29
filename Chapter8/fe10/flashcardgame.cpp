#include <iostream>
#include <random>
#include <chrono>

int main()
{

    std::mt19937 mt{ static_cast<std::mt19937::result_type>(
        std::chrono::steady_clock::now().time_since_epoch().count()) };

    std::uniform_int_distribution<> flashRange{ 1, 15 };

    int flash1{ flashRange(mt) };
    int flash2{ flashRange(mt) };
    int answer{ flash1 * flash2 };

    std::cout << "What is " << flash1 << " * " << flash2 << "?\n";
    int userAnswer{ };
    std::cin >> userAnswer;

    if (userAnswer == answer)
        std::cout << "You are correct! The answer was: " << answer << '\n';
    else
        std::cout << "Wrong! The correct answer was: " << answer << '\n';

    return 0;
}
