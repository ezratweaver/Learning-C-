#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int smaller{ };
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{ };
    std::cin >> larger;

    if (smaller > larger)
    {
        std::cout << "Swapping the values" << '\n';
        int x{ smaller }; // Variable "x" created in scope of if statement
        smaller = larger;
        larger = x ;
    } // Variable "x" destroyed

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
}
