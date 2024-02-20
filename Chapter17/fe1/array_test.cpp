#include <iostream>
#include <array>


int main()
{

    constexpr std::array<char, 5> hello { 'h', 'e', 'l', 'l', 'o' };

    std::cout << hello[1] << '\n';

    return 0;
}
