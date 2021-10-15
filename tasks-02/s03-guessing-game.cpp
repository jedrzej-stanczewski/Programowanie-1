#include <iostream>

int main() {
    int num, guess = 0;
    srand(time(0));
    num = std::rand() % 100 + 1;
    
    do {
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;

        if (guess < 1 or guess > 100) 
            {std::cout << "The number must be between 1 and 100!" << std::endl;}        
        else if (guess > num) 
            {std::cout << "Too high" << std::endl;}
        else if (guess < num) 
            {std::cout << "Too low" << std::endl;}
        else 
            {std::cout << "Correct!" << std::endl;}
    }   while (guess != num);

    return 0;
}
