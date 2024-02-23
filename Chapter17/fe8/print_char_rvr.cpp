#include <iostream>


void printCharsRvr(char arr[])
{
    char *start { arr - 1 };

    while (*arr != '\0')
    {
        ++arr;
    }

    while (arr != start) 
    {
        std::cout << *arr << ' ';
        --arr;
    }
    
    std::cout << '\n';
}


int main()
{

    char hello[] { "Hello" };

    printCharsRvr(hello);

    return 0;
}
