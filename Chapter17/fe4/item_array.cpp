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

    constexpr std::array<Item, 4> inventory { Item{ "Sword", 5 }, Item{ "Dagger", 3 }, 
                                              Item{ "Club", 2 }, Item{ "Spear", 7 } };

    for (const Item& item : inventory) 
    {
         std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
    }

    return 0;
}
