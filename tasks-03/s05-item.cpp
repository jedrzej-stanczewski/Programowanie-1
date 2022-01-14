#include <iostream>
#include "../include/s24299/Item.h"

class Weapon : public Item
{
    public:
        auto use_on(Creature& creature) -> void
        {
            creature.healthPoints -= strength();
        }
};

class Potion : public Item
{
    public:
        auto use_on(Creature& creature) -> void
        {
            creature.healthPoints += strength();
        }
};

class Sword : public Weapon
{
    public:
        auto strength() const -> int
        {
            return 1;
        }
};

class Axe : public Weapon
{
    public:
        auto strength() const -> int
        {
            return 2;
        }
};

class Bow : public Weapon
{
    public:
        auto strength() const -> int
        {
            return 3;
        }
};

class Health_potion : public Potion
{
    public:
        int timesUsed = 0;
        auto strength() const -> int {
            return 5;
        }
        auto use_on(Creature& creature) -> void
        {
            if (timesUsed < 2) {
            creature.healthPoints += strength();
            timesUsed++;
            };
        }
};

auto main() -> int
{   
    Bow bow;
    Sword sword;
    Axe axe;
    Health_potion potion;
    Creature creature("Balrog", 30);
    std::cout << creature.healthPoints << std::endl;
    bow.use_on(creature);
    std::cout << creature.healthPoints << std::endl;
    axe.use_on(creature);
    std::cout << creature.healthPoints << std::endl;
    potion.use_on(creature);
    std::cout << creature.healthPoints << std::endl;
    sword.use_on(creature);
    std::cout << creature.healthPoints << std::endl;
    potion.use_on(creature);
    std::cout << creature.healthPoints << std::endl;
    potion.use_on(creature);
    std::cout << creature.healthPoints << std::endl;
    return 0;
}
