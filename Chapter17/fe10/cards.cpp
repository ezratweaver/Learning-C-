#include <cstddef>
#include <algorithm>
#include <iostream>
#include <string_view> 
#include <array>
#include "random.h"

struct Card {
    enum Rank
    { ace,
        two,
        three,
        four,
        five,
        six,
        seven,
        eight,
        nine,
        ten, 
        jack,
        queen,
        king,
        max_rank,
    };

    enum Suit
    {
        clubs,
        diamonds,
        hearts,
        spades,
        max_suit,
    };
    
    constexpr static std::array<Rank, max_rank> ranks {
                    ace, two, three, four, five, six, seven,
                    eight, nine, ten, jack, queen, king };
    constexpr static std::array<std::string_view, max_rank> rank_strings {
                   "A", "2", "3", "4", "5", "6", "7",
                   "8", "9", "10", "J", "Q", "K" };

    constexpr static std::array<Suit, max_suit> suits {
                    clubs, diamonds, hearts, spades };
    constexpr static std::array<std::string_view, max_suit> suit_strings {
                    "C", "D", "H", "S" };
    

    Rank rank {};
    Suit suit {};

    friend std::ostream& operator<<(std::ostream& out, const Card &card)
    {
        out << rank_strings[static_cast<std::size_t>(card.rank)] << suit_strings[static_cast<std::size_t>(card.suit)];
        return out;
    }

    int getValue()
    {
        return (rank + 1);
    }

};


class Deck
{
    private:
        std::array<Card, 52> m_deck {};
        std::size_t m_nextCard { 0 };

    public:
        Deck()
        {
            std::size_t counter { 0 };
            for (auto suit : Card::suits)
                for (auto rank : Card::ranks)
                {
                    m_deck[counter] = Card { rank, suit };
                    ++counter;
                }
        }

        Card dealCard()
        {
            Card returnCard { m_deck[m_nextCard] };
            ++m_nextCard;
            return returnCard;
        }  

        void shuffle()
        {
            std::shuffle(m_deck.begin(), m_deck.end(), Random::mt);
        }

};


int main()
{
    Deck deck{};
    std::cout << deck.dealCard() << ' ' << deck.dealCard() << ' ' << deck.dealCard() << '\n';

    deck.shuffle();
    std::cout << deck.dealCard() << ' ' << deck.dealCard() << ' ' << deck.dealCard() << '\n';

    return 0;
}
