#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits)
{
    //Implements a rolling bit feature such that when a bitset 
    //is shifted to the left no data will be lost.
    if (bits.test(3) == 1)
    {
        bits <<= 1;
        bits.flip(0);
    }
    else
        bits <<= 1;
    return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
