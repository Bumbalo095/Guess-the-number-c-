#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int randomNumber, guess;
    int attempts = 0;

    srand(static_cast<unsigned int>(time(0)));

    randomNumber = rand() % 100 + 1;

    std::cout << "Guess the Number (between 1 and 100):" <<std::endl;

    do {
        std::cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again:" << std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again:" << std::endl;
           } else {
                std::cout << "Congratulations! You guessed the number in " << attempts << "attempts." << std::endl;
         }
        } while (guess != randomNumber);

    return 0;
}