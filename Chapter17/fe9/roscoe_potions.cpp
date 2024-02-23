#include <cstddef>
#include <limits>
#include <ios>
#include <iostream>
#include <array>
#include <string>
#include <string_view>
#include <vector>
#include "random.h"

struct PotionObj {
    std::string_view name {};
    int cost {};
};

namespace Potions {

    enum Type
    {
        healing,
        mana,
        speed,
        invisibility,
        max_potions,
    };

    std::array<PotionObj, max_potions + 1> potionsObj {{
                { "healing", 20 }, { "mana", 30 },
                { "speed", 12 }, { "invisibility", 50 }

    }};

    const PotionObj& getPotionObj(Type potionType)
    {
        for (std::size_t i{}; i < static_cast<std::size_t>(max_potions); ++i)
        {
            if (static_cast<Type>(i) == potionType)
            {
                return potionsObj[i];
            }
        }        

        return potionsObj[max_potions];
    }

    void printSelection()
    {
        std::cout << "Here is our selection for today:\n";

        for (std::size_t i{}; i < static_cast<std::size_t>(max_potions); ++i)
        {
            PotionObj *currentPotion { &potionsObj[i] };
            std::cout << i << ") " << currentPotion->name << " costs " << currentPotion->cost << '\n';
        } 
    }

}

int getGoldAmount()
{
    return Random::get(80, 120);
}

template <typename T>
T getInput()
{
    T input {};

    while (true)
    {
        std::cin >> input;

        if (!std::cin)
        {
            std::cout << "Invalid input! Try again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    
        return input;
    }
}


void printInventory(const std::vector<PotionObj>& inventory)
{
    std::array<int, Potions::potionsObj.size()> count {};
    for (PotionObj potion : inventory)
    {
        for (std::size_t i{}; i < Potions::potionsObj.size(); ++i)
        {
            if (potion.name == Potions::potionsObj[i].name)
            {
                count[i] += 1;
            }
        }
    }

    std::cout << "\nYour inventory contains:\n";
    for (std::size_t i{}; i < Potions::potionsObj.size(); ++i)
    {
        if (count[i] != 0)
            std::cout << count[i] << "x potion of " << Potions::potionsObj[i].name << '\n';
    }
}


void playGame()
{
    std::cout << "Welcome to Roscoe's potion emporium!\n";
    std::cout << "Enter your name: ";

    std::string userName { getInput<std::string>() };
    int userGold { getGoldAmount() };
    std::vector<PotionObj> userInventory {};

    std::cout << "Hello, " << userName << ", you have " << userGold << " gold left.\n\n";

    while (true)
    {
        Potions::printSelection();
        std::cout << "Enter the number of the potion you'd like to buy, or 'q' to quit: ";
        char userChoice { getInput<char>() };

        if (userChoice == 'q')
        {
            break;
        }

        std::size_t userIndex { static_cast<std::size_t>(userChoice) - '0'};    

        if (userIndex >= Potions::max_potions)
        {
            std::cout << "Potion does not exist!\n\n\n";
            continue;
        }

        PotionObj& currentPotion { Potions::potionsObj[userIndex] };

        if (currentPotion.cost <= userGold)
        {
            userGold -= currentPotion.cost;
            userInventory.push_back(currentPotion);
            std::cout << "You purchased " << currentPotion.name
                      << ".  You have " << userGold << " gold left.\n\n\n";
        }
        else
        {
            std::cout << "You can not afford that.\n\n\n";
            continue;
        }
    }

    printInventory(userInventory);
    std::cout << "You escaped with " << userGold << " gold remaining.\n";
    std::cout << "\nThanks for shopping at Roscoe's potion emporium!\n";
}

int main()
{
    
    playGame();

    return 0;
}


