#include <ios>
#include <iostream>
#include <vector>
#include <string>


template <typename T>
bool isValueInArray(const std::vector<T>& arr, const T& item)
{
    for ( const auto& element : arr )
    {
        if (element == item)
        {
            return true;
        }
    }
    return false;
}


int main()
{

    std::vector<std::string> names { "Betty", "Ezra", "Bob", "Meggie" };

    std::string userNameInput {};

    std::cout << "Enter a name: ";

    std::cin >> userNameInput;

    std::cout << std::boolalpha;

    std::cout << isValueInArray(names, userNameInput) << '\n';
}
