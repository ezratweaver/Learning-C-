#include <iostream>


int sumTo(int input)
{
    int total{ 0 };
    for (int i{ input }; i > 0; i--)
    {
        if (i == input)
            std::cout << i;
        else
            std::cout << " + " << i;
        total += i;
    }
    
    std::cout << " equals " << total << '\n';

    return total;
}


int main()
{
    sumTo(5);
    return 0;
}
