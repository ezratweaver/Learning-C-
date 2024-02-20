#include <cstddef>
#include <iostream>
#include <limits>
#include <utility>
#include <vector>

namespace Items
{
    enum ItemsType
    {
        healthPotion, torch,
        arrow,
        max_items,
    };
}

std::pair<int, int> minMax(const std::vector<int>& inventory)
{
    int max { inventory[0] };
    int min { inventory[0] };
    int minIndex { };
    int maxIndex { };
    for (std::size_t i {}; i < inventory.size(); ++i)
    {
        if (inventory[i] > max)
        {
            max = inventory[i];
            maxIndex = static_cast<int>(i);
        }
        if (inventory[i] < min)
        {
            min = inventory[i];
            minIndex = static_cast<int>(i);
        }
    }
    return std::pair { minIndex, maxIndex };
}

void testMinMax(const std::vector<int>& test, const std::pair<int, int>& res)
{
    std::cout << "With array ( ";
    for (int num : test) { std::cout << num << ' '; }
    std::cout << ")\n";

    std::cout << "The min element has index " << res.first <<
              " and value " << test[static_cast<std::size_t>(res.first)] << '\n';

    std::cout << "The max element has index " << res.second <<
              " and value " << test[static_cast<std::size_t>(res.second)] << '\n';
}

std::vector<int> userGenerateList()
{

    std::vector<int> outList;

    while (true)
    {
        std::cout << "Enter numbers to add (use -1 to stop): ";

        int input { };

        std::cin >> input;

        if (input == -1)
            break;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            continue;
        }

        outList.push_back(input);
    }

    return outList;
}


std::string getItemName(Items::ItemsType item, int count)
{
    std::string str { };
    switch (item)
    {
        case Items::healthPotion:
            str = "health potion";
            if (count > 1)
                str += 's';
            break;
        case Items::torch:
            str = "torch"; 
            if (count > 1)
                str += "es";
            break;
        case Items::arrow:
            str = "arrow";
            if (count > 1)
                str += 's';
            break;
        default:
            str = "???";
            break;
    }
    return str;
}

int countTotalItems(const std::vector<int>& inventory)
{
    int sum { };
    for (auto item : inventory)
    {
        sum += item; 
    }
    return sum;
}

void displayInventory(const std::vector<int>& inventory)
{
    for (std::size_t i {}; i < inventory.size(); ++i)
        std::cout << "You have " << inventory[i] << " " <<
                     getItemName(static_cast<Items::ItemsType>(i), inventory[i]) << ".\n";
    std::cout << "You have " << countTotalItems(inventory) << " total items.\n";
}

int main()
{
    // std::vector playerItems { 1, 5, 10 };
    // assert(std::size(playerItems) == Items::max_items);
    // displayInventory(playerItems);

    std::vector<int> input { userGenerateList() };

    std::pair<int, int> res { minMax(input) };

    testMinMax(input, res);

    return 0;
}

