#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << '\t';
    }
    std::cout <<"\n";
}
void play_game()
{
    int guesses[250];
    int guess_count = 0;

    int random = rand() % 111;
    std::cout << "Yo, let's play\n";

    while (true)
    {
        int guess;
        std::cout << std::endl;
        std::cin >> guess;
        guesses[guess_count++] = guess;
        // guess_count++;

        if (guess == random)
        {
            std::cout << "YEahhh, You win!!! \n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Your guess is low! Number will be high\n";
        }
        else
        {
            std::cout << "Your guess is high! Number will be low\n";
        }
    }
    print_array(guesses, guess_count);
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Play Game \n";

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "Thanks for choosing nothing\n";
            return 0;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}