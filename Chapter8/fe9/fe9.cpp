#include <iostream>

void fizzbuzz(int value)
{
    for (int i{ 1 }; i <= value; ++i)
    {
        bool printInt{ true };
        if (i % 3 == 0)
        {
            std::cout << "fizz";
            printInt = 0;
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz"; 
            printInt = 0;
        }
        if (i % 7 == 0)
        {
            std::cout << "pop";
            printInt = 0;
        }
        if (printInt)
        {
            std::cout << i;
        }

        std::cout << '\n';
    }
}


int main()
{

    fizzbuzz(150);
    return 0;
}
