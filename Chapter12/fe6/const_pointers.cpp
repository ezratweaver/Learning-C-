#include <iostream>

int main()
{

    int x { 5 };
    int y { 7 };
    const int* const ptr { &x };

    std::cout << *ptr << '\n';

    return 0;
}
