#include <array>
#include <cstddef>
#include <iostream>

template <typename T, std::size_t N>
void printArray(const std::array<T, N>& arr)
{
    std::cout << "The array (";
    T lastElmnt { arr[N-1] };
    for (T elmnt : arr)
    {
        if (elmnt == lastElmnt)
            std::cout  << elmnt;
        else
            std::cout << elmnt << ", ";
    }
    std::cout << ") has length " << arr.size() << '\n';
}

int main()
{
    constexpr std::array arr1 { 1, 4, 9, 16 };
    printArray(arr1);

    constexpr std::array arr2 { 'h', 'e', 'l', 'l', 'o' };
    printArray(arr2);

    return 0;
}
