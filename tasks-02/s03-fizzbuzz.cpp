#include <iostream>

auto main(int argc, char*argv[]) -> int {
    auto user_input = std::stoi(argv[1]);
    for (auto i = 1; i <= user_input; ++i) {
        std::cout << i << std::endl;
        if (i % 15 == 0) {std::cout << "FizzBuzz" << std::endl;}
        else if (i % 5 == 0) {std::cout << "Buzz" << std::endl;}
        else if (i % 3 == 0) {std::cout << "Fizz" << std::endl;}
    }
    return 0;
}
