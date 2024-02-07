#include <iostream>

int main()
{

    int x { 5 };

    int* ptr { nullptr };

    if (ptr)
        std::cout << *ptr << '\n';
    else
        std::cout << "Pointer is empty\n";


    return 0;
}
