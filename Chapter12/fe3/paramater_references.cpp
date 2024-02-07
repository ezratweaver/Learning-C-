#include <iostream>

void printVal(int& x) // A const reference would allow non-modifyable
{                     // and rvalue inputs, but would disallow modifying
    std::cout << "In function: " << x << '\n';
    ++x;
}

int main()
{
    int x { 2 };

    printVal(x);

    std::cout << "Outside function: " << x << '\n';

    return 0;
}
