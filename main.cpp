#include <iostream>
#include <ctime>

int main() {
    char answer;

    do {
        int num;
        int guess;
        int tries = 0;

        srand(time(NULL));
        num = (rand() % 100) + 1;

        std::cout << "----- Guess The Number! -----\n";

        do {
            std::cout << "Enter a guess between (1-100): \n";
            std::cin >> guess;
            tries++;

            if (guess > num) {
                std::cout << "You guessed too high!\n";
            }
            else if (guess < num) {
                std::cout << "You guessed too low!\n";
            }
            else {
                std::cout << "You guessed correctly! Well done!\n";
                std::cout << "It took you " << tries << " attempts!\n";
            }

        } while (guess != num);

        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> answer;

    } while (answer == 'y' || answer == 'Y');

    std::cout << "Thanks for playing!\n";
    return 0;
}
