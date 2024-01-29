#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> me{ 0b0000'0101 };
    
    std::cout << me << '\n';

    me.set(3);
    me.flip(4);
    me.reset(4);

    std::cout << "All the bits: " << me << '\n';
    std::cout << "Bit 3 has value: " << me.test(3) << '\n';
    std::cout << "Bit 4 has value: " << me.test(4) << '\n';

    return 0; 
}
