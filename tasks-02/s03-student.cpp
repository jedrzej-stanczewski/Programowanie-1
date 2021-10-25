#include "../include/s24299/Student.h"
#include <iostream>
#include <sstream>

s24299::Student::Student(std::string x, std::string y, std::string z)
    : first_name{std::move(x)}, last_name{std::move(y)}, index_number{std::move(z)} {
}

auto s24299::Student::to_string() const -> std::string
{
    auto result = std::ostringstream{};
    result << first_name << " " << last_name << " (" << index_number << "), " 
    << "Semester " << semester << ": " << grade_average;
    
    return result.str();
}

auto main() -> int
{
    auto student = s24299::Student("Jędrzej", "Stańczewski", "24299");
    student.grade_average = 4.9;
    std::cout << student.to_string() << std::endl;
    
    return 0;
}
