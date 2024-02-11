#include <iostream>
#include <string_view>


enum class MonsterType
{
    ogre,
    dragon,
    orc,
    spider,
    slime,
};


struct Monster
{
    MonsterType type {};
    std::string_view name {};
    int health {};
};


constexpr std::string_view getMonsterTypeString(MonsterType type)
{
    using enum MonsterType;

    switch(type)
    {
        case ogre: return "Ogre";
        case dragon: return "Dragon";
        case orc: return "Orc";
        case spider: return "Spider";
        case slime: return "Slime";
        default: return "???";
    }
}


std::ostream& operator<<(std::ostream& os, const Monster& monster)
{
    os << "This " << getMonsterTypeString(monster.type) << " is named " <<
          monster.name << " and has " << monster.health << " health.\n";
    return os;
}


int main()
{
    Monster gorgon { MonsterType::ogre, "Gorgon", 199 }; 
    Monster blublub { MonsterType::slime, "Blublulublbulbu", 2 };

    std::cout << gorgon;
    std::cout << blublub;

    return 0;
}

