#ifndef S24299_STUDENT_H
#define S24299_STUDENT_H

#include <string>

namespace s24299
{
    struct Student
    {
        std::string const first_name;
        std::string const last_name;
        std::string const index_number;
        unsigned short semester = 1;
        double grade_average = 0.0;
        
        Student(std::string, std::string, std::string);
        
        auto to_string() const -> std::string;
    };
}

#endif
