#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1; // Random number between 1 and 100

    std::cout << "****** Number Guessing Game ******\n";

    do
    {
        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too high! Try again.\n";
        }
        else if (guess < num)
        {
            std::cout << "Too low! Try again.\n";
        }
        else
        {
            std::cout << "Congratulations! You guessed the number " << num << " in " << tries << " tries.\n";
        }

    } while (guess != num);

    std::cout << "*******************************\n";

    return 0;
}