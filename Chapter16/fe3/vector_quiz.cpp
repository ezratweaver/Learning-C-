#include <iostream>
#include <vector>

int main()
{

    std::vector<char> arr { 'h', 'e', 'l', 'l', 'o' };

    std::cout << "The array has " << std::size(arr) << " elements.\n";

    std::cout << arr.at(1) << arr[1] << '\n';

    return 0;
}
