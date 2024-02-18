#include <cstddef>
#include <iostream>
#include <vector>

template <typename T>
void printArray(const std::vector<T>& arr)
{
    for (std::size_t i {}; i < arr.size(); ++i)
    {
         std::cout << arr[i] << '\n';
    }
}


int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr);

    return 0;
}
