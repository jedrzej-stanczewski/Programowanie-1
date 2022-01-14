#ifndef S24299_ITEM_H
#define S24299_ITEM_H

class Creature
{
    public:
        std::string name;
        int healthPoints;

        Creature(std::string Name, int HealthPoints)
        {
            name = Name;
            healthPoints = HealthPoints;
        }
};

class Item
{
    public:
        std::string name;

        Item() {};

        Item(std::string Name)
        {
            name = Name;
        }

        virtual auto strength() const -> int
        {
            return 0;
        }

        virtual auto use_on(Creature& creature) -> void
        {
            creature.healthPoints += strength();
        }
};

#endif
