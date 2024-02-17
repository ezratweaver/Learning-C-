#include <iostream>
#include <string>
#include <string_view>
#include "random.h"



class Monster
{
    public:

        enum Type
        {
            dragon,
            goblin,
            ogre,
            orc,
            skeleton,
            troll,
            vampire,
            zombie,
            max_monster_types,
        };

        Monster(Type type, std::string_view name, 
                std::string_view roar, int hp)
        : m_type { type }, m_name { name },
          m_roar { roar }, m_hp { hp } {}

        constexpr std::string_view getTypeString(Type type) const
        {
            switch (type)
            {
                case dragon: return "Dragon";
                case goblin: return "Goblin";
                case ogre: return "Ogre";
                case orc: return "Orc";
                case skeleton: return "Skeleton";
                case troll: return "Troll";
                case vampire: return "Vampire";
                case zombie: return "Zombie";
                default: return "???";
            }

        }

        void print() const
        {
            std::cout << m_name << " the " << getTypeString(m_type);


            if (m_hp > 0)
                std::cout << " has " << m_hp << " hit points and says "
                          << m_roar << ".\n";
            else
                std::cout << " is dead.\n";
        }

    private:

        Type m_type { };
        std::string m_name { "???" }; 
        std::string m_roar { "???" };
        int m_hp { };

};

namespace MonsterGenerator
{

    std::string_view getName(int pos)
    {
        switch (pos)
        {
            case 0: return "Goober";
            case 1: return "Boulder";
            case 2: return "Gorlock";
            case 3: return "Bertha";
            case 4: return "Kurglelse";
            case 5: return "Bob";
            default: return "???";
        }
    }

    std::string_view getRoar(int pos)
    {
        switch (pos)
        {
            case 0: return "Blubblub";
            case 1: return "GRAAAAAAA!";
            case 2: return "BABABABABABAB!";
            case 3: return "YABADABADOOOOO!";
            case 4: return "POTATO!!!";
            case 5: return "IM THE IRS HERE TO COLLECT TAXES!";
            default: return "???";
        }

    }

    Monster generate()
    {
        return Monster{ static_cast<Monster::Type>
                                   (Random::get(1, Monster::max_monster_types-1)),
                            getName(Random::get(0, 5)),
                            getRoar(Random::get(0, 5)),
                            Random::get(0, 100) };
    }
    
}

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}

