#include <iostream>

auto main(int argc, char*argv[]) -> int {
    int number = std::stoi(argv[1]);
    if (number == 0) {
        std::cout << number << std::endl;
    }
    else if (number > 0) {
        for (auto i = 1; number > -1; --number) {
            std::cout << number << std::endl;
            }
        }
    else if (number < 0) {
        for (auto i = 1; number < 1; ++number) {
            std::cout << number << std::endl;
            }
        }
    return 0;
}
