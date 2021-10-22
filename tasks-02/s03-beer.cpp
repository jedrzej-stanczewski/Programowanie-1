#include <iostream>

auto main(int argc, char*argv[]) -> int {
    if (argv[1]) {
        auto number = std::stoi(argv[1]);
        int const original_number = number;
        while (number > 1) {
            std::cout << number << " bottles of beer on the wall, " << number << " bottles of beer." << std::endl << "Take one down and pass it around, " << (number - 1) << " bottles of beer on the wall." << std::endl;
            --number;
        }
        if (number == 1) {
            std::cout << "1 bottle of beer on the wall, 1 bottle of beer." << std::endl << "Take one down and pass it around, 0 bottles of beer on the wall." << std::endl;
            -- number;
        }
        if (number == 0) {
            std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl << "Go to the store and buy some more, "<< original_number << " bottles of beer on the wall." << std::endl;
            }
        }
    else {
        auto number = 99;
        int const original_number = number;
        while (number > 1) {
            std::cout << number << " bottles of beer on the wall, " << number << " bottles of beer." << std::endl << "Take one down and pass it around, " << (number - 1) << " bottles of beer on the wall." << std::endl;
            --number;
        }
        if (number == 1) {
            std::cout << "1 bottle of beer on the wall, 1 bottle of beer." << std::endl << "Take one down and pass it around, 0 bottles of beer on the wall." << std::endl;
            -- number;
        }
        if (number == 0) {
            std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl << "Go to the store and buy some more, "<< original_number << " bottles of beer on the wall." << std::endl;
        }
    }
    return 0;
}
