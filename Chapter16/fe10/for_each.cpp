#include <iostream>
#include <vector>


int main()
{
    
    std::vector words { "Hello", "World!", "This", "Is", "Alot", "of", "Words" };

    for ( const auto& word : words )
    {
         std::cout << word << ' ';
    }

    std::cout << '\n';

    return 0;
}

