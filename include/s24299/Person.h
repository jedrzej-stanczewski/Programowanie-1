#ifndef S24299_PERSON_H
#define S24299_PERSON_H

class Person
{
    public:
        std::string name;

        Person()
        {
            name = "John Newman";
        }

        Person(std::string a)
        {
            name = a;
        }

        virtual auto to_string() const -> std::string
        {
            return name;
        }
};

#endif