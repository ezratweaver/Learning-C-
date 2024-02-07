#include <iostream>


int main()
{
    int i { 5 };
    int y { 7 };

    int* ptr { &i };

    std::cout << *ptr << '\n';

    ptr = &y;

    std::cout << *ptr << '\n';

    *ptr += 1;

    std::cout << y << '\n';

    std::cout << *ptr << '\n';

    return 0;    
}

