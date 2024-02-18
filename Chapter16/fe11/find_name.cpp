#include <iostream>
#include <vector>
#include <string>
#include <string_view>


int main()
{

    std::vector<std::string> names { "Betty", "Ezra", "Bob", "Meggie" };

    std::string userNameInput {};

    std::cout << "Enter a name: ";

    std::cin >> userNameInput;

    bool found { false };
    for ( const std::string_view name : names )
    {
        if (name == userNameInput)
        {
            std::cout << userNameInput << " was found.\n";
            found = true;
        }
    }

    if (!found)
        std::cout << userNameInput << " was not found.\n";

}
