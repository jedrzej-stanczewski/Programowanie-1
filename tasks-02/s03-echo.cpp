#include <iostream>

auto main(int argc, char*argv[]) -> int {
    if (std::string{argv[1]} == "-r" and std::string{argv[2]} == "-l") {
        for (auto i = argc - 1; i > 2; --i) {
            std::cout << argv[i] << std::endl;
        }
    }
    else if (std::string{argv[1]} == "-r" and std::string{argv[2]} == "-n") {
        for (auto i = argc - 1; i > 2; --i) {
            std::cout << argv[i] << " ";
        }
    }
    else if (std::string{argv[1]} == "-n") {
        for (auto i = 2; i < argc; ++i) {
            std::cout << argv[i] << " ";
        }
    }
    else if (std::string{argv[1]} == "-l") {
        for (auto i = 2; i < argc; ++i) {
            std::cout << argv[i] << std::endl;
        }
    }
    else if (std::string{argv[1]} == "-r") {
        for (auto i = argc - 1; i > 1; i--) {
            std::cout << argv[i] << " ";
        }
        std::cout << std::endl;
    }
    else {
        for (auto i = 1; i < argc; ++i) {
            std::cout << argv[i] << " ";
        }
        std::cout << std::endl;
    }
  return 0;
}
