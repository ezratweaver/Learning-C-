#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t mask0{ 0b0000'0001 };
	[[maybe_unused]] constexpr std::uint8_t mask1{ 0b0000'0010 };
	[[maybe_unused]] constexpr std::uint8_t mask2{ 0b0000'0100 };
	[[maybe_unused]] constexpr std::uint8_t mask3{ 0b0000'1000 };
	[[maybe_unused]] constexpr std::uint8_t mask4{ 0b0001'0000 };
	[[maybe_unused]] constexpr std::uint8_t mask5{ 0b0010'0000 };
	[[maybe_unused]] constexpr std::uint8_t mask6{ 0b0100'0000 };
	[[maybe_unused]] constexpr std::uint8_t mask7{ 0b1000'0000 };

    std::uint8_t flags{ 0b0000'0101 };

    std::cout << "bit 0 is " << (static_cast<bool>(flags & mask0) ? "on\n" : "off\n");
    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

    return 0;
}
