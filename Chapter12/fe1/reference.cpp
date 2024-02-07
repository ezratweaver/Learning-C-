#include <iostream>

int main()
{
    int var{ 5 };
    int& ref1{ var };
    int& ref2{ ref1 };

    ++var;

    std::cout << ref2 << '\n';

    return 0;
}
