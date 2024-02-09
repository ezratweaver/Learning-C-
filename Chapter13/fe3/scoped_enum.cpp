#include <iostream>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    dog,
    cat,
    duck,
};

std::string_view getAnimalName(Animal animal)
{
    using enum Animal;

    switch(animal)
    {
    case pig: return "pig";
    case chicken: return "chicken";
    case goat: return "goat";
    case dog: return "dog";
    case cat: return "cat";
    case duck: return "duck";
    default: return "???";
    }
}

int getAnimalLegs(Animal animal)
{
    using enum Animal;

    switch(animal)
    {
        case pig: return 4;
        case chicken: return 2;
        case goat: return 4;
        case dog: return 4;
        case cat: return 4;
        case duck: return 2;
        default: return -1;
    }
}

void printNumberOfLegs(Animal animal)
{
    using enum Animal;
    
    int animalLegs { getAnimalLegs(animal) };
    std::string_view animalName { getAnimalName(animal) };

    std::cout << "A " << animalName << " has " << animalLegs << " legs.\n";

}

int main()
{

    Animal myAnimal { Animal::pig };

    printNumberOfLegs(myAnimal);


    return 0;
}
