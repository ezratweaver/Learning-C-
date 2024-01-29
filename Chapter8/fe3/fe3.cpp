#include <iostream>

int main()
{
    int x{ 97 };
    while(x <= 122)
    {
        std::cout << static_cast<char>(x) << " = " << x << ' ';

        if (x % 3 == 0)
            std::cout << '\n';

        ++x;
    }

    std::cout << '\n';

    return 0;
}
