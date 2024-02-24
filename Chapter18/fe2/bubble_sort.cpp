#include <iostream>
#include <algorithm>

void printArray(int arr[], int length)
{
    for (int i {}; i < length; ++i)
    {
         std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void bubbleSort(int arr[], int length)
{
    for (int i{ 0 }; i < length - 1; ++i)
    {
        for (int x{ 0 }; x < length - 1; ++x)
        {
            if (arr[x] > arr[x+1])
                std::swap(arr[x], arr[x+1]);
        }
    }

}

int main()
{

    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int length { static_cast<int>(std::size(array)) };
    
    bubbleSort(array, length);

    printArray(array, length);

    return 0;
}
