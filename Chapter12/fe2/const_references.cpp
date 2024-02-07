#include <iostream>

int main()
{

    int y { 6 }; // normal integer
    const int x { 5 }; // constant integer

    const int& constref { x }; // constant reference to constant integer
                               // both variables involved non-modifyable

    const int& constref2 { y }; // constant reference to non constant integer
                                // intial non constant modifiable, reference not

    y = 7; // This is fine
    // x or constref or constref2 = 7 is not 


    std::cout << constref << '\n';

    std::cout << constref2 << '\n';

    return 0;
}
