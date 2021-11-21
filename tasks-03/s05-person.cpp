#include <iostream>
#include "../include/s24299/Person.h"

class Mr : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "Mr " + name;
        }

        auto who_is_it(Person const& person) -> std::string
        {
            std::cout << "Mr " << person.name << std::endl;
            return " ";
        }
};

class Mrs : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "Mrs " + name;
        }

        auto who_is_it(Person const& person) -> std::string
        {
            std::cout << "Mrs " << person.name << std::endl;
            return " ";
        }

};

class King : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "King " + name;
        }

        auto who_is_it(Person const& person) -> std::string
        {
            std::cout << "King " << person.name << std::endl;
            return " ";
        }

};

class Queen : public Person
{
    public:
        auto to_string() -> std::string
        {
            return "Queen " + name;
        }

        auto who_is_it(Person const& person) -> std::string
        {
            std::cout << "Queen " << person.name << std::endl;
            return " ";
        }
};

class Greeting : public Person
{
    public:
        virtual auto greet() -> std::string
        {
            return "Hi";
        }
};

class Hello : public Greeting
{
    public:
        auto greet(Person const& person) -> std::string
        {
            std::cout << "Hello " << person.name << std::endl;
            return "";
        }
};

class Good_evening : public Greeting
{
    public:
        auto greet(Person const& person) -> std::string
        {
            return "Good evening " + person.name;
        }
};

class Farewell : public Greeting
{
    public:
        auto greet(Person const& person) -> std::string
        {
            return "Farewell " + person.name;
        }
};


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
    std::cout << mr.to_string() << std::endl;
    std::cout << mrs.to_string() << std::endl;
    std::cout << king.to_string() << std::endl;
    std::cout << queen.to_string() << std::endl;
    mr.who_is_it(mr);
    mrs.who_is_it(mrs);
    king.who_is_it(king);
    queen.who_is_it(queen);
    Hello hello;
    hello.greet(mr);
    return 0;
}
