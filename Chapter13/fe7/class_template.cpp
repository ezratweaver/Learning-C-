#include <iostream>

template <typename T>
struct Pair
{
    T first{};
    T second{};
};


int main()
{
    Pair<int> p1 {1, 2};

    std::cout << p1.first << p1.second << '\n';

    return 0;
}
