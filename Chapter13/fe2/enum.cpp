namespace Scary
{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}

int main()
{
    Scary::MonsterType bob { Scary::orc };
    

    return 0;
}
