#include <iostream>
#include <string>

auto main(int argc, char*argv[]) -> int {
    auto const password = std::string{argv[1]};
    auto guessed_password = std::string{};
    do {
      std::cout << "Guess the password: ";
      std::getline(std::cin, guessed_password);
    } while (guessed_password != password);
    if (guessed_password == password) {
      std::cout << "Correct!" << std::endl;
    }
    return 0;
}

/* alternative version with while
auto main(int argc, char*argv[]) -> int {
    auto const password = std::string{argv[1]};
    std::cout << "Guess the password: ";
    auto guessed_password = std::string{};
    std::getline(std::cin, guessed_password);
    while (guessed_password != password) {
        std::cout << "Wrong, guess the password again: ";
        std::getline(std::cin, guessed_password);
    }
    if (guessed_password == password) {
        std::cout << "Correct!" << std::endl;
    }*/
