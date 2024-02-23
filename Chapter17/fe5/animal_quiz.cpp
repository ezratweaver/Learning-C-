#include <array>
#include <iostream>
#include <string>
#include <string_view>


struct AnimalStruct
{
    std::string_view name {};
    int legs {};
    std::string sound {};
};

namespace Animal
{
    
    enum type
    {
        chicken,
        dog,
        cat,
        elephant, duck,
        snake,
        max_animals,
    };

    constexpr std::array<AnimalStruct, 6> animals {{ { "chicken", 2, "cluck" },
                                          { "dog", 4, "woof" },
                                          { "cat", 4, "meow" },
                                          { "elephant", 4, "pawoo" },
                                          { "duck", 2, "quack"},
                                          { "snake", 0, "hiss"} }}; 

    static_assert(animals.size() == max_animals);

}



int main()
{
    std::string userAnimal {};
    std::cout << "Enter an animal: ";
    std::cin >> userAnimal;


    bool found { false };
    for (AnimalStruct animal : Animal::animals)
    {
        if (animal.name == userAnimal)
        {
            found = true;
            std::cout << "A " << animal.name << 
                      " has " << animal.legs << 
                      " legs and says " << animal.sound << ".\n";
        }
    }
    if (!found)
    {
        std::cout << "That animal couldn't be found\n";
    }

    std::cout << "\n\nHere is the data for the rest of the animals:\n";

    for (AnimalStruct animal : Animal::animals)
    {
        if (animal.name != userAnimal)
             std::cout << "A " << animal.name << 
                      " has " << animal.legs << 
                      " legs and says " << animal.sound << ".\n";
    }

    return 0;
}
