#include <iostream>
#include <string>

int main()
{
    std::string str{ "I saw a red car yesterday." };

    str.erase(8, 3);

    str.insert(8, "blue");

    std::cout << str << '\n'; // I saw a blue car yesterday.

    return 0;
}
