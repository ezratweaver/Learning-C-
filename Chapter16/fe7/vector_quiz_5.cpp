#include <limits>
#include <iostream>
#include <vector>

template <typename T>
void printArray(const std::vector<T>& arr)
{
    for (std::size_t i {}; i < arr.size(); ++i)
    {
        std::cout << arr[i] << ' '; 
    }
    std::cout << '\n';
}


int getUserIndex()
{
    int userIndex { };
    while (userIndex < 1 || userIndex > 9)
    {
        std::cout << "Enter a number between 1 and 9: ";

        std::cin >> userIndex;

        if (!std::cin)
            std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    return userIndex;
}


template <typename T>
void findIndexInArr(const std::vector<T>& arr, int target)
{
    for (std::size_t i {}; i < arr.size(); ++i)
    {
        if (arr[i] == target)
        {
            std::cout << "The number " << target << " has index " << i << '\n';
            return;
        }
    }
    std::cout << "The number " << target << " was not found\n";
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int userIndex { getUserIndex() };

    printArray(arr);

    findIndexInArr(arr, userIndex);

    return 0;
}

