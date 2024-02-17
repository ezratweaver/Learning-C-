#include <iostream>
#include <vector>


int vectorSum(std::vector<int>& list)
{
    int total { 0 };
    for (long unsigned int i { }; i < list.size(); i++)
    {
        total += list[i];
    }
    return total;
}

int vectorMult(std::vector<int>& list)
{
    int total { 1 };
    for (long unsigned int i { }; i < list.size(); i++)
    {
        total *= list[i];
    }
    return total;
}

int main()
{
    
    std::vector<int> empty ( 3 );

    std::cout << "Enter three integers: ";

    std::cin >> empty[0] >> empty[1] >> empty[2];

    std::cout << "The sum is: " << vectorSum(empty) << '\n';

    std::cout << "The product is: " << vectorMult(empty) << '\n';

    return 0;
}
