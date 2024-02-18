#include <cassert>
#include <iostream>
#include <string_view>
#include <vector>


int main()
{
    using namespace std::literals::string_view_literals;

    std::vector<int> divisors { 3, 5, 7, 11, 13, 17, 19 };
    std::vector<std::string_view> word { "fizz"sv, "buzz"sv, "pop"sv, "bang"sv, "jazz"sv, "pow"sv, "boom"sv }; 

    assert(divisors.size() == word.size() && "Arrays must be same size");

    for (int i{}; i < 101; ++i)
    {
        bool numToPrint { true };
        for (std::size_t x{}; x < divisors.size(); ++x)
        {
            if (i % divisors[x] == 0)
            {
                std::cout << word[x];
                numToPrint = false;
            }
        }
        if (numToPrint)
            std::cout << i;
        std::cout << '\n';
    }




    return 0;
}
