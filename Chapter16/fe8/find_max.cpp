#include <iostream>
#include <vector>

template <typename T>
T findMax(const std::vector<T>& arr)
{
    if (arr.size() == 0)
        return 0;

    T newMax { arr[0] };
    for (std::size_t i { 1 }; i < arr.size(); ++i)
    {
        if (arr[i] > newMax) 
            newMax = arr[i];
    }
    return newMax;
}


int main()
{
    std::vector data1 { 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2 { -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3 { };
    std::cout << findMax(data3) << '\n';

    return 0;
}

