#include <iostream>
#include "../include/s24299/Person.h"

class Mr : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "Mr " + name;
        }
};

class Mrs : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "Mrs " + name;
        }

};

class King : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "King " + name;
        }

};

class Queen : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "Queen " + name;
        }

};

auto who_is_it(Person const& person) -> std::string
{
    return person.name;
}

auto main() -> int
{
    Mr mr;
    mr.name = "John Lennon";
    Mrs mrs;
    mrs.name = "Margaret Thatcher";
    King king;
    king.name = "George VIII";
    Queen queen;
    queen.name = "Elizabeth II";
    std::cout << who_is_it(king) << std::endl;
    std::cout << mr.to_string() << std::endl;
    std::cout << mrs.to_string() << std::endl;
    std::cout << king.to_string() << std::endl;
    std::cout << queen.to_string() << std::endl;
    return 0;
}