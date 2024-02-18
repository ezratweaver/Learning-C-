#include <iostream>
#include <vector>

namespace Animal
{
    enum AnimalType
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        maxAnimals,
    };

}


int main()
{

    std::vector animalLegs { 2, 4, 4, 4, 2, 0 };

    std::cout << "The elephant has " << animalLegs[Animal::elephant] << " legs.\n";

    return 0;
}

