#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}


int main()
{
    std::cout << max('b', 'a') << '\n'; 
    return 0;
}
