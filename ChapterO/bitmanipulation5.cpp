#include <bitset>
#include <cstdint>
#include <iostream>
#include <iomanip>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    std::cout << std::boolalpha;

    myArticleFlags |= option_viewed; //Setting option_viewed as on

    std::cout << static_cast<bool>(myArticleFlags & option_edited) << '\n'; //Checking option_edited 

    myArticleFlags &= static_cast<std::uint8_t>(~option_favorited); //Setting option_favorited to false

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}
