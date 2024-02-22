#include <array>
#include <iostream>
#include <string_view>

struct Item
{
    std::string_view name { };
    int gold { };

};

int main()
{

    constexpr std::array<Item, 4> inventory {{ { "Sword", 5 }, { "Dagger", 3 }, 
                                              { "Club", 2 }, { "Spear", 7 } }};

    for (const Item& item : inventory) 
    {
         std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
    }

    return 0;
}
