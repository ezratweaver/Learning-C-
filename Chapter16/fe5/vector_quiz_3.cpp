#include <cstddef>
#include <iostream>
#include <vector>

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    for (std::size_t i { }; i < arr.size(); ++i)
    {
         std::cout << arr[i] << '\n';
    }

    return 0;
}
