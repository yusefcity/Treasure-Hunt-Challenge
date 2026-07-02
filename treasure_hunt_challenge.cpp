#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int secret = std::rand() % 20 + 1;
    int guess = 0;
    int attempts = 5;

    std::cout << "=== Number Treasure ===\n";

    while (attempts > 0) {
        std::cout << "Guess a number (1-20): ";
        std::cin >> guess;

        if (guess == secret) {
            std::cout << "You found the treasure!\n";
            break;
        }

        if (guess < secret)
            std::cout << "Too low.\n";
        else
            std::cout << "Too high.\n";

        attempts--;
        std::cout << "Remaining attempts: " << attempts << "\n";
    }
