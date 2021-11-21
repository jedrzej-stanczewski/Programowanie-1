#include <iostream>
#include "../include/s24299/Item.h"

class Weapon : public Item
{
    public:
        auto use_on(Creature& creature) -> void
        {
            creature.healthPoints -= 1;
        }
};

class Potion : public Item
{
    public:
        auto use_on(Creature& creature) -> void
        {
            creature.healthPoints += 1;
        }
};

class Sword : public Item
{
    public:
        auto strength() const -> int
        {
            return 1;
        }
};

class Axe : public Item
{
    public:
        auto strength() const -> int
        {
            return 2;
        }
};

class Bow : public Item
{
    public:
        std::string name;

        Bow(std::string Name)
        {
            name = Name;
        }
        auto strength() const -> int
        {
            return 3;
        }
};

class Health_potion : public Item
{
    public:
        auto strength() const -> int
        {
            return 5;
        }
};

auto main() -> int
{   
    Item item("bow");
    Bow bow("Bow");
    std::cout << bow.name << std::endl;
    return 0;
}
