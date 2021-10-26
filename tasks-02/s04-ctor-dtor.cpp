#include <iostream>

struct Structure
{
	std::string example_string;
	Structure(std::string s) : example_string{s} {}
	~Structure()
	{
		std::cout << "DESTRUCTION!" << std::endl;
		std::cout << example_string << std::endl;
	}
};

auto main() -> int 
{
	auto a = Structure("example text");
	return 0;
}
