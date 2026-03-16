#include <iostream>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()

int main() {
    // Seed random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int secret = std::rand() % 100 + 1; // number between 1 and 100

    int guess;
    std::cout << "I have chosen a number between 1 and 100. Try to guess it!\n";

    do {
        std::cout << "Your guess: ";
        std::cin >> guess;

        if (guess > secret) {
            std::cout << "Too high!\n";
        } else if (guess < secret) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "Correct! You guessed it.\n";
        }
    } while (guess != secret);

    return 0;
}