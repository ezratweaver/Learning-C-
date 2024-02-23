#include <iostream>


void printChars(char arr[])
{

    while (*arr != '\0')
    {
        std::cout << *arr << ' ';

        ++arr;
    }
    
    std::cout << '\n';
}


int main()
{

    char hello[] { "Hello" };

    printChars(hello);

    return 0;
}
